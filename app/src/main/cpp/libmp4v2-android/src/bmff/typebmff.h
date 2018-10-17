///////////////////////////////////////////////////////////////////////////////
//
//  The contents of this file are subject to the Mozilla Public License
//  Version 1.1 (the "License"); you may not use this file except in
//  compliance with the License. You may obtain a copy of the License at
//  http://www.mozilla.org/MPL/
//
//  Software distributed under the License is distributed on an "AS IS"
//  basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
//  License for the specific language governing rights and limitations
//  under the License.
// 
//  The Original Code is MP4v2.
// 
//  The Initial Developer of the Original Code is Kona Blend.
//  Portions created by Kona Blend are Copyright (C) 2008.
//  All Rights Reserved.
//
//  Contributors:
//      Kona Blend, kona8lend@@gmail.com
//
///////////////////////////////////////////////////////////////////////////////

#ifndef MP4V2_IMPL_BMFF_TYPE_H
#define MP4V2_IMPL_BMFF_TYPE_H

namespace mp4v2 { namespace impl { namespace bmff {

///////////////////////////////////////////////////////////////////////////////

/// enumerated ISO-639-2/T language codes.
enum LanguageCode {
    ILC_UNDEFINED = 0,

    ILC_AAR,
    ILC_ABK,
    ILC_ACE,
    ILC_ACH,
    ILC_ADA,
    ILC_ADY,
    ILC_AFA,
    ILC_AFH,
    ILC_AFR,
    ILC_AIN,
    ILC_AKA,
    ILC_AKK,
    ILC_SQI,
    ILC_ALE,
    ILC_ALG,
    ILC_ALT,
    ILC_AMH,
    ILC_ANG,
    ILC_ANP,
    ILC_APA,
    ILC_ARA,
    ILC_ARC,
    ILC_ARG,
    ILC_HYE,
    ILC_ARN,
    ILC_ARP,
    ILC_ART,
    ILC_ARW,
    ILC_ASM,
    ILC_AST,
    ILC_ATH,
    ILC_AUS,
    ILC_AVA,
    ILC_AVE,
    ILC_AWA,
    ILC_AYM,
    ILC_AZE,
    ILC_BAD,
    ILC_BAI,
    ILC_BAK,
    ILC_BAL,
    ILC_BAM,
    ILC_BAN,
    ILC_EUS,
    ILC_BAS,
    ILC_BAT,
    ILC_BEJ,
    ILC_BEL,
    ILC_BEM,
    ILC_BEN,
    ILC_BER,
    ILC_BHO,
    ILC_BIH,
    ILC_BIK,
    ILC_BIN,
    ILC_BIS,
    ILC_BLA,
    ILC_BNT,
    ILC_BOS,
    ILC_BRA,
    ILC_BRE,
    ILC_BTK,
    ILC_BUA,
    ILC_BUG,
    ILC_BUL,
    ILC_MYA,
    ILC_BYN,
    ILC_CAD,
    ILC_CAI,
    ILC_CAR,
    ILC_CAT,
    ILC_CAU,
    ILC_CEB,
    ILC_CEL,
    ILC_CHA,
    ILC_CHB,
    ILC_CHE,
    ILC_CHG,
    ILC_ZHO,
    ILC_CHK,
    ILC_CHM,
    ILC_CHN,
    ILC_CHO,
    ILC_CHP,
    ILC_CHR,
    ILC_CHU,
    ILC_CHV,
    ILC_CHY,
    ILC_CMC,
    ILC_COP,
    ILC_COR,
    ILC_COS,
    ILC_CPE,
    ILC_CPF,
    ILC_CPP,
    ILC_CRE,
    ILC_CRH,
    ILC_CRP,
    ILC_CSB,
    ILC_CUS,
    ILC_CES,
    ILC_DAK,
    ILC_DAN,
    ILC_DAR,
    ILC_DAY,
    ILC_DEL,
    ILC_DEN,
    ILC_DGR,
    ILC_DIN,
    ILC_DIV,
    ILC_DOI,
    ILC_DRA,
    ILC_DSB,
    ILC_DUA,
    ILC_DUM,
    ILC_NLD,
    ILC_DYU,
    ILC_DZO,
    ILC_EFI,
    ILC_EGY,
    ILC_EKA,
    ILC_ELX,
    ILC_ENG,
    ILC_ENM,
    ILC_EPO,
    ILC_EST,
    ILC_EWE,
    ILC_EWO,
    ILC_FAN,
    ILC_FAO,
    ILC_FAT,
    ILC_FIJ,
    ILC_FIL,
    ILC_FIN,
    ILC_FIU,
    ILC_FON,
    ILC_FRA,
    ILC_FRM,
    ILC_FRO,
    ILC_FRR,
    ILC_FRS,
    ILC_FRY,
    ILC_FUL,
    ILC_FUR,
    ILC_GAA,
    ILC_GAY,
    ILC_GBA,
    ILC_GEM,
    ILC_KAT,
    ILC_DEU,
    ILC_GEZ,
    ILC_GIL,
    ILC_GLA,
    ILC_GLE,
    ILC_GLG,
    ILC_GLV,
    ILC_GMH,
    ILC_GOH,
    ILC_GON,
    ILC_GOR,
    ILC_GOT,
    ILC_GRB,
    ILC_GRC,
    ILC_ELL,
    ILC_GRN,
    ILC_GSW,
    ILC_GUJ,
    ILC_GWI,
    ILC_HAI,
    ILC_HAT,
    ILC_HAU,
    ILC_HAW,
    ILC_HEB,
    ILC_HER,
    ILC_HIL,
    ILC_HIM,
    ILC_HIN,
    ILC_HIT,
    ILC_HMN,
    ILC_HMO,
    ILC_HRV,
    ILC_HSB,
    ILC_HUN,
    ILC_HUP,
    ILC_IBA,
    ILC_IBO,
    ILC_ISL,
    ILC_IDO,
    ILC_III,
    ILC_IJO,
    ILC_IKU,
    ILC_ILE,
    ILC_ILO,
    ILC_INA,
    ILC_INC,
    ILC_IND,
    ILC_INE,
    ILC_INH,
    ILC_IPK,
    ILC_IRA,
    ILC_IRO,
    ILC_ITA,
    ILC_JAV,
    ILC_JBO,
    ILC_JPN,
    ILC_JPR,
    ILC_JRB,
    ILC_KAA,
    ILC_KAB,
    ILC_KAC,
    ILC_KAL,
    ILC_KAM,
    ILC_KAN,
    ILC_KAR,
    ILC_KAS,
    ILC_KAU,
    ILC_KAW,
    ILC_KAZ,
    ILC_KBD,
    ILC_KHA,
    ILC_KHI,
    ILC_KHM,
    ILC_KHO,
    ILC_KIK,
    ILC_KIN,
    ILC_KIR,
    ILC_KMB,
    ILC_KOK,
    ILC_KOM,
    ILC_KON,
    ILC_KOR,
    ILC_KOS,
    ILC_KPE,
    ILC_KRC,
    ILC_KRL,
    ILC_KRO,
    ILC_KRU,
    ILC_KUA,
    ILC_KUM,
    ILC_KUR,
    ILC_KUT,
    ILC_LAD,
    ILC_LAH,
    ILC_LAM,
    ILC_LAO,
    ILC_LAT,
    ILC_LAV,
    ILC_LEZ,
    ILC_LIM,
    ILC_LIN,
    ILC_LIT,
    ILC_LOL,
    ILC_LOZ,
    ILC_LTZ,
    ILC_LUA,
    ILC_LUB,
    ILC_LUG,
    ILC_LUI,
    ILC_LUN,
    ILC_LUO,
    ILC_LUS,
    ILC_MKD,
    ILC_MAD,
    ILC_MAG,
    ILC_MAH,
    ILC_MAI,
    ILC_MAK,
    ILC_MAL,
    ILC_MAN,
    ILC_MRI,
    ILC_MAP,
    ILC_MAR,
    ILC_MAS,
    ILC_MSA,
    ILC_MDF,
    ILC_MDR,
    ILC_MEN,
    ILC_MGA,
    ILC_MIC,
    ILC_MIN,
    ILC_MIS,
    ILC_MKH,
    ILC_MLG,
    ILC_MLT,
    ILC_MNC,
    ILC_MNI,
    ILC_MNO,
    ILC_MOH,
    ILC_MON,
    ILC_MOS,
    ILC_MUL,
    ILC_MUN,
    ILC_MUS,
    ILC_MWL,
    ILC_MWR,
    ILC_MYN,
    ILC_MYV,
    ILC_NAH,
    ILC_NAI,
    ILC_NAP,
    ILC_NAU,
    ILC_NAV,
    ILC_NBL,
    ILC_NDE,
    ILC_NDO,
    ILC_NDS,
    ILC_NEP,
    ILC_NEW,
    ILC_NIA,
    ILC_NIC,
    ILC_NIU,
    ILC_NNO,
    ILC_NOB,
    ILC_NOG,
    ILC_NON,
    ILC_NOR,
    ILC_NQO,
    ILC_NSO,
    ILC_NUB,
    ILC_NWC,
    ILC_NYA,
    ILC_NYM,
    ILC_NYN,
    ILC_NYO,
    ILC_NZI,
    ILC_OCI,
    ILC_OJI,
    ILC_ORI,
    ILC_ORM,
    ILC_OSA,
    ILC_OSS,
    ILC_OTA,
    ILC_OTO,
    ILC_PAA,
    ILC_PAG,
    ILC_PAL,
    ILC_PAM,
    ILC_PAN,
    ILC_PAP,
    ILC_PAU,
    ILC_PEO,
    ILC_FAS,
    ILC_PHI,
    ILC_PHN,
    ILC_PLI,
    ILC_POL,
    ILC_PON,
    ILC_POR,
    ILC_PRA,
    ILC_PRO,
    ILC_PUS,
    ILC_QUE,
    ILC_RAJ,
    ILC_RAP,
    ILC_RAR,
    ILC_ROA,
    ILC_ROH,
    ILC_ROM,
    ILC_RON,
    ILC_RUN,
    ILC_RUP,
    ILC_RUS,
    ILC_SAD,
    ILC_SAG,
    ILC_SAH,
    ILC_SAI,
    ILC_SAL,
    ILC_SAM,
    ILC_SAN,
    ILC_SAS,
    ILC_SAT,
    ILC_SCN,
    ILC_SCO,
    ILC_SEL,
    ILC_SEM,
    ILC_SGA,
    ILC_SGN,
    ILC_SHN,
    ILC_SID,
    ILC_SIN,
    ILC_SIO,
    ILC_SIT,
    ILC_SLA,
    ILC_SLK,
    ILC_SLV,
    ILC_SMA,
    ILC_SME,
    ILC_SMI,
    ILC_SMJ,
    ILC_SMN,
    ILC_SMO,
    ILC_SMS,
    ILC_SNA,
    ILC_SND,
    ILC_SNK,
    ILC_SOG,
    ILC_SOM,
    ILC_SON,
    ILC_SOT,
    ILC_SPA,
    ILC_SRD,
    ILC_SRN,
    ILC_SRP,
    ILC_SRR,
    ILC_SSA,
    ILC_SSW,
    ILC_SUK,
    ILC_SUN,
    ILC_SUS,
    ILC_SUX,
    ILC_SWA,
    ILC_SWE,
    ILC_SYC,
    ILC_SYR,
    ILC_TAH,
    ILC_TAI,
    ILC_TAM,
    ILC_TAT,
    ILC_TEL,
    ILC_TEM,
    ILC_TER,
    ILC_TET,
    ILC_TGK,
    ILC_TGL,
    ILC_THA,
    ILC_BOD,
    ILC_TIG,
    ILC_TIR,
    ILC_TIV,
    ILC_TKL,
    ILC_TLH,
    ILC_TLI,
    ILC_TMH,
    ILC_TOG,
    ILC_TON,
    ILC_TPI,
    ILC_TSI,
    ILC_TSN,
    ILC_TSO,
    ILC_TUK,
    ILC_TUM,
    ILC_TUP,
    ILC_TUR,
    ILC_TUT,
    ILC_TVL,
    ILC_TWI,
    ILC_TYV,
    ILC_UDM,
    ILC_UGA,
    ILC_UIG,
    ILC_UKR,
    ILC_UMB,
    ILC_UND,
    ILC_URD,
    ILC_UZB,
    ILC_VAI,
    ILC_VEN,
    ILC_VIE,
    ILC_VOL,
    ILC_VOT,
    ILC_WAK,
    ILC_WAL,
    ILC_WAR,
    ILC_WAS,
    ILC_CYM,
    ILC_WEN,
    ILC_WLN,
    ILC_WOL,
    ILC_XAL,
    ILC_XHO,
    ILC_YAO,
    ILC_YAP,
    ILC_YID,
    ILC_YOR,
    ILC_YPK,
    ILC_ZAP,
    ILC_ZBL,
    ILC_ZEN,
    ILC_ZHA,
    ILC_ZND,
    ILC_ZUL,
    ILC_ZUN,
    ILC_ZXX,
    ILC_ZZA,
};

typedef Enum<LanguageCode,ILC_UNDEFINED> EnumLanguageCode;
MP4V2_EXPORT extern const EnumLanguageCode enumLanguageCode;

///////////////////////////////////////////////////////////////////////////////

}}} // namespace mp4v2::impl::bmff

#endif // MP4V2_IMPL_BMFF_TYPE_H
