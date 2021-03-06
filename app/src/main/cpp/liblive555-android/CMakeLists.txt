# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.
cmake_minimum_required(VERSION 3.4.1)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fexceptions -Wno-write-strings -O2 -DHAVE_SOCKLEN_T -DHAVE_STRUCT_IOVEC")

#SET ( src_file          ${CMAKE_CURRENT_SOURCE_DIR}/UsageEnvironment
#                        ${CMAKE_CURRENT_SOURCE_DIR}/BasicUsageEnvironment
#                        ${CMAKE_CURRENT_SOURCE_DIR}/groupsock
#                        ${CMAKE_CURRENT_SOURCE_DIR}/liveMedia)

SET ( inc_file          ${CMAKE_CURRENT_SOURCE_DIR}/UsageEnvironment/include
                        ${CMAKE_CURRENT_SOURCE_DIR}/BasicUsageEnvironment/include
                        ${CMAKE_CURRENT_SOURCE_DIR}/groupsock/include
                        ${CMAKE_CURRENT_SOURCE_DIR}/liveMedia/include)

SET ( lib_name   live555)

#查找目录下所有的源文件，并保存在指定变量source_file中,遗憾的是它不能像File递归查找
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}/UsageEnvironment      source_file )
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}/BasicUsageEnvironment source_file )
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}/groupsock             source_file )
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}/liveMedia             source_file )
#aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}/testProgs             source_file )

include_directories( BEFORE ${inc_file} )

if (${ANDROID_ABI} STREQUAL "armeabi-v7a")
set_property(SOURCE ${source_file} APPEND_STRING PROPERTY COMPILE_FLAGS " -mfpu=neon")
endif ()

# this creates the static library (.a)
ADD_LIBRARY (   ${lib_name}

                SHARED

                ${source_file}
                 mediaServer/DynamicRTSPServer.cpp
                 mediaServer/serverTest.cpp
                 testProgs/testRTSPClient.cpp)

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

target_link_libraries( # Specifies the target library.
                       ${lib_name}

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )
message("------------------------------Cmake build ${lib_name} END-----------------------------")