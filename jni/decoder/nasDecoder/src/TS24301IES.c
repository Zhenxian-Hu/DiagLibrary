/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).  Version: 6.6.2-pre4, Date: 04-Apr-2013.
 */
#include "TS24301IES.h"
#include "rtxsrc/rtxCommon.h"
#include "rtxsrc/rtxDiagBitTrace.h"

void asn1Init_TS24301IE_AuthRespParam (TS24301IE_AuthRespParam* pvalue)
{
   if (0 == pvalue) return;
   pvalue->numocts = 0;
}

static const OSEnumItem TS24301IE_EMMCause_ENUMTAB[] = {
   { OSUTF8("condIEError"), 100, 11, 12 },
   { OSUTF8("congestion"), 22, 10, 9 },
   { OSUTF8("csDomainNotAvail"), 18, 16, 10 },
   { OSUTF8("csSvcTempUnavail"), 39, 16, 8 },
   { OSUTF8("epsAndNonEPSSvcNotAllowed"), 8, 25, 6 },
   { OSUTF8("epsSvcNotAllowInPLMN"), 14, 20, 4 },
   { OSUTF8("epsSvcNotAllowed"), 7, 16, 33 },
   { OSUTF8("esmFailure"), 19, 10, 11 },
   { OSUTF8("illegalME"), 6, 9, 25 },
   { OSUTF8("illegalUE"), 3, 9, 32 },
   { OSUTF8("imeiNotAccept"), 5, 13, 27 },
   { OSUTF8("implDetach"), 10, 10, 5 },
   { OSUTF8("imsiUnkInHSS"), 2, 12, 21 },
   { OSUTF8("infoElemNotExist"), 99, 16, 16 },
   { OSUTF8("invMandInfo"), 96, 11, 20 },
   { OSUTF8("macFailure"), 20, 10, 2 },
   { OSUTF8("mscTempNotReach"), 16, 15, 7 },
   { OSUTF8("msgNotCompat"), 101, 12, 15 },
   { OSUTF8("msgTypeNotCompat"), 98, 16, 31 },
   { OSUTF8("msgTypeNotExist"), 97, 15, 1 },
   { OSUTF8("networkFailure"), 17, 14, 34 },
   { OSUTF8("noCellsInTrkArea"), 15, 16, 28 },
   { OSUTF8("noEPSBearerCtxtAct"), 40, 18, 24 },
   { OSUTF8("nonEPSAuthUnaccept"), 26, 18, 23 },
   { OSUTF8("notAuthForCSG"), 25, 13, 26 },
   { OSUTF8("plmnNotAllowed"), 11, 14, 3 },
   { OSUTF8("reqSvcOptNotAuth"), 35, 16, 22 },
   { OSUTF8("roamNotAllowed"), 13, 14, 30 },
   { OSUTF8("secModeReject"), 24, 13, 29 },
   { OSUTF8("semIncorrectMsg"), 95, 15, 14 },
   { OSUTF8("severeNetFailure"), 42, 16, 19 },
   { OSUTF8("synchFailure"), 21, 12, 18 },
   { OSUTF8("trkAreaNotAllowed"), 12, 17, 13 },
   { OSUTF8("ueIdentNotDeriv"), 9, 15, 0 },
   { OSUTF8("ueSecCapMismat"), 23, 14, 17 },
   { OSUTF8("unspecProtoErr"), 111, 14, 35 }
} ;
#define TS24301IE_EMMCause_ENUMTABSIZE 36

const OSUTF8CHAR* TS24301IE_EMMCause_ToString (OSINT32 value)
{
   OSINT32 idx = rtxLookupEnumByValue (value, TS24301IE_EMMCause_ENUMTAB, 
      TS24301IE_EMMCause_ENUMTABSIZE);

   if (idx >= 0 && idx < TS24301IE_EMMCause_ENUMTABSIZE) {
      return TS24301IE_EMMCause_ENUMTAB[idx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_EMMCause_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_EMMCause* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_EMMCause_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_EMMCause_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, TS24301IE_EMMCause* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, TS24301IE_EMMCause_ENUMTAB, 
      TS24301IE_EMMCause_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_EMMCause)TS24301IE_EMMCause_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

void asn1Init_TS24301IE_ESMMessageContainer (
   TS24301IE_ESMMessageContainer* pvalue)
{
   if (0 == pvalue) return;
   pvalue->numocts = 0;
   pvalue->data = 0;
}

void asn1Init_TS24301IE_NASMessageContainer (
   TS24301IE_NASMessageContainer* pvalue)
{
   if (0 == pvalue) return;
   pvalue->numocts = 0;
}

void asn1Init_TS24301IE_LCSClientIdentity (TS24301IE_LCSClientIdentity* pvalue)
{
   if (0 == pvalue) return;
   pvalue->numocts = 0;
}

static const OSEnumItem TS24301IE_GenMsgContainerType_ENUMTAB[] = {
   { OSUTF8("lcsMsgCont"), 2, 10, 1 },
   { OSUTF8("lppMsgCont"), 1, 10, 0 }
} ;
#define TS24301IE_GenMsgContainerType_ENUMTABSIZE 2

const OSUTF8CHAR* TS24301IE_GenMsgContainerType_ToString (OSINT32 value)
{
   OSINT32 idx = value - 1;

   if (idx >= 0 && idx < TS24301IE_GenMsgContainerType_ENUMTABSIZE) {
      return TS24301IE_GenMsgContainerType_ENUMTAB
         [TS24301IE_GenMsgContainerType_ENUMTAB[idx].transidx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_GenMsgContainerType_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_GenMsgContainerType* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_GenMsgContainerType_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_GenMsgContainerType_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      TS24301IE_GenMsgContainerType* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_GenMsgContainerType_ENUMTAB, 
      TS24301IE_GenMsgContainerType_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_GenMsgContainerType)
         TS24301IE_GenMsgContainerType_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

void asn1Init_TS24301IE_GenMessageContainer (
   TS24301IE_GenMessageContainer* pvalue)
{
   if (0 == pvalue) return;
   pvalue->numocts = 0;
   pvalue->data = 0;
}

static const OSEnumItem TS24301IE_ESMCause_ENUMTAB[] = {
   { OSUTF8("apnRestrValIncompWithBearerCtxt"), 112, 31, 19 },
   { OSUTF8("bearerHandlingNotSupp"), 60, 21, 8 },
   { OSUTF8("collWithNetwInitReq"), 56, 19, 40 },
   { OSUTF8("condIEError"), 100, 11, 41 },
   { OSUTF8("epsBearerCtxtWoTFTAlrActv"), 46, 25, 43 },
   { OSUTF8("epsQoSNotAccepted"), 37, 17, 29 },
   { OSUTF8("esmInfoNotRcvd"), 53, 14, 30 },
   { OSUTF8("ieNonExistOrNotImpl"), 99, 19, 36 },
   { OSUTF8("insuffResources"), 26, 15, 31 },
   { OSUTF8("invEPSBearerIdent"), 43, 17, 37 },
   { OSUTF8("invMandatoryInfo"), 96, 16, 24 },
   { OSUTF8("invPTIValue"), 81, 11, 27 },
   { OSUTF8("lastPDNDisconnNotAllow"), 49, 22, 5 },
   { OSUTF8("maxNumEPSBearersReached"), 65, 23, 18 },
   { OSUTF8("msgNotCompatWithProtoState"), 101, 26, 26 },
   { OSUTF8("msgTypeNonExistOrNotImpl"), 97, 24, 32 },
   { OSUTF8("msgTypeNotCompatWithProtoState"), 98, 30, 38 },
   { OSUTF8("multPDNConnsForAPNNotAllow"), 55, 26, 9 },
   { OSUTF8("networkFailure"), 38, 14, 33 },
   { OSUTF8("operDeterBarring"), 8, 16, 39 },
   { OSUTF8("pdnConnNotExist"), 54, 15, 4 },
   { OSUTF8("pdnTypeIPv4OnlyAllow"), 50, 20, 25 },
   { OSUTF8("pdnTypeIPv6OnlyAllow"), 51, 20, 12 },
   { OSUTF8("protocolErrorUnspecified"), 111, 24, 21 },
   { OSUTF8("ptiAlreadyInUse"), 35, 15, 22 },
   { OSUTF8("ptiMismatch"), 47, 11, 35 },
   { OSUTF8("reactivateRequest"), 39, 17, 6 },
   { OSUTF8("regularDeactivation"), 36, 19, 20 },
   { OSUTF8("reqAPNNotSupp"), 66, 13, 17 },
   { OSUTF8("reqRejectByServingGW"), 30, 20, 2 },
   { OSUTF8("reqRejectUnspecified"), 31, 20, 42 },
   { OSUTF8("reqSvcOptNotSubscr"), 33, 18, 1 },
   { OSUTF8("semErrorInTFTOp"), 41, 15, 13 },
   { OSUTF8("semErrorsInPktFilt"), 44, 18, 28 },
   { OSUTF8("semIncorrectMessage"), 95, 19, 11 },
   { OSUTF8("singleAddrBearersOnlyAllow"), 52, 26, 34 },
   { OSUTF8("svcOptNotSupp"), 32, 13, 10 },
   { OSUTF8("svcOptTempOutOfOrder"), 34, 20, 15 },
   { OSUTF8("synErrorInTFTOp"), 42, 15, 16 },
   { OSUTF8("synErrorsInPktFilt"), 45, 18, 7 },
   { OSUTF8("unkOrMissAPN"), 27, 12, 3 },
   { OSUTF8("unknownPDNType"), 28, 14, 14 },
   { OSUTF8("unsuppQCIValue"), 59, 14, 23 },
   { OSUTF8("userAutheFailed"), 29, 15, 0 }
} ;
#define TS24301IE_ESMCause_ENUMTABSIZE 44

const OSUTF8CHAR* TS24301IE_ESMCause_ToString (OSINT32 value)
{
   OSINT32 idx = rtxLookupEnumByValue (value, TS24301IE_ESMCause_ENUMTAB, 
      TS24301IE_ESMCause_ENUMTABSIZE);

   if (idx >= 0 && idx < TS24301IE_ESMCause_ENUMTABSIZE) {
      return TS24301IE_ESMCause_ENUMTAB[idx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_ESMCause_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_ESMCause* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_ESMCause_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_ESMCause_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, TS24301IE_ESMCause* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, TS24301IE_ESMCause_ENUMTAB, 
      TS24301IE_ESMCause_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_ESMCause)TS24301IE_ESMCause_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

static const OSEnumItem TS24301IE_PDNTypeValue_ENUMTAB[] = {
   { OSUTF8("ipv4"), 1, 4, 0 },
   { OSUTF8("ipv4v6"), 3, 6, 2 },
   { OSUTF8("ipv6"), 2, 4, 1 }
} ;
#define TS24301IE_PDNTypeValue_ENUMTABSIZE 3

const OSUTF8CHAR* TS24301IE_PDNTypeValue_ToString (OSINT32 value)
{
   OSINT32 idx = value - 1;

   if (idx >= 0 && idx < TS24301IE_PDNTypeValue_ENUMTABSIZE) {
      return TS24301IE_PDNTypeValue_ENUMTAB
         [TS24301IE_PDNTypeValue_ENUMTAB[idx].transidx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_PDNTypeValue_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_PDNTypeValue* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_PDNTypeValue_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_PDNTypeValue_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, TS24301IE_PDNTypeValue* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_PDNTypeValue_ENUMTAB, TS24301IE_PDNTypeValue_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_PDNTypeValue)
         TS24301IE_PDNTypeValue_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

static const OSEnumItem TS24301IE_AddnUpdateResult_value_ENUMTAB[] = {
   { OSUTF8("csFbNotPref"), 1, 11, 1 },
   { OSUTF8("noInfo"), 0, 6, 0 },
   { OSUTF8("reserved"), 3, 8, 3 },
   { OSUTF8("smsOnly"), 2, 7, 2 }
} ;
#define TS24301IE_AddnUpdateResult_value_ENUMTABSIZE 4

const OSUTF8CHAR* TS24301IE_AddnUpdateResult_value_ToString (OSINT32 value)
{
   OSINT32 idx = value;

   if (idx >= 0 && idx < TS24301IE_AddnUpdateResult_value_ENUMTABSIZE) {
      return TS24301IE_AddnUpdateResult_value_ENUMTAB
         [TS24301IE_AddnUpdateResult_value_ENUMTAB[idx].transidx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_AddnUpdateResult_value_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_AddnUpdateResult_value* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_AddnUpdateResult_value_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_AddnUpdateResult_value_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      TS24301IE_AddnUpdateResult_value* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_AddnUpdateResult_value_ENUMTAB, 
      TS24301IE_AddnUpdateResult_value_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_AddnUpdateResult_value)
         TS24301IE_AddnUpdateResult_value_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

static const OSEnumItem TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTAB[] = {
   { OSUTF8("guti"), 6, 4, 2 },
   { OSUTF8("imei"), 3, 4, 1 },
   { OSUTF8("imsi"), 1, 4, 0 }
} ;
#define TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTABSIZE 3

const OSUTF8CHAR* TS24301IE_EPSMobileIdentity_typeOfIdent_ToString (OSINT32 value)
{
   OSINT32 idx = rtxLookupEnumByValue (value, 
      TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTAB, 
      TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTABSIZE);

   if (idx >= 0 && idx < TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTABSIZE) {
      return TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTAB[idx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_EPSMobileIdentity_typeOfIdent_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_EPSMobileIdentity_typeOfIdent* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_EPSMobileIdentity_typeOfIdent_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_EPSMobileIdentity_typeOfIdent_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      TS24301IE_EPSMobileIdentity_typeOfIdent* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTAB, 
      TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_EPSMobileIdentity_typeOfIdent)
         TS24301IE_EPSMobileIdentity_typeOfIdent_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

static const OSEnumItem TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTAB[] = {
   { OSUTF8("eea0"), 0, 4, 0 },
   { OSUTF8("eea3"), 3, 4, 6 },
   { OSUTF8("eea4"), 4, 4, 7 },
   { OSUTF8("eea5"), 5, 4, 1 },
   { OSUTF8("eea6"), 6, 4, 2 },
   { OSUTF8("eea7"), 7, 4, 3 },
   { OSUTF8("x128-eea1"), 1, 9, 4 },
   { OSUTF8("x128-eea2"), 2, 9, 5 }
} ;
#define TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTABSIZE 8

const OSUTF8CHAR* TS24301IE_NASSecurityAlgorithms_typeOfCiph_ToString (OSINT32 value)
{
   OSINT32 idx = value;

   if (idx >= 0 && idx < TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTABSIZE) {
      return TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTAB
         [TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTAB[idx].transidx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_NASSecurityAlgorithms_typeOfCiph_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_NASSecurityAlgorithms_typeOfCiph* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_NASSecurityAlgorithms_typeOfCiph_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_NASSecurityAlgorithms_typeOfCiph_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      TS24301IE_NASSecurityAlgorithms_typeOfCiph* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTAB, 
      TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_NASSecurityAlgorithms_typeOfCiph)
         TS24301IE_NASSecurityAlgorithms_typeOfCiph_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

static const OSEnumItem TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTAB[] = {
   { OSUTF8("eia0"), 0, 4, 0 },
   { OSUTF8("eia3"), 3, 4, 6 },
   { OSUTF8("eia4"), 4, 4, 7 },
   { OSUTF8("eia5"), 5, 4, 1 },
   { OSUTF8("eia6"), 6, 4, 2 },
   { OSUTF8("eia7"), 7, 4, 3 },
   { OSUTF8("x128-eia1"), 1, 9, 4 },
   { OSUTF8("x128-eia2"), 2, 9, 5 }
} ;
#define TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTABSIZE 8

const OSUTF8CHAR* TS24301IE_NASSecurityAlgorithms_typeOfProt_ToString (OSINT32 value)
{
   OSINT32 idx = value;

   if (idx >= 0 && idx < TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTABSIZE) {
      return TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTAB
         [TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTAB[idx].transidx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_NASSecurityAlgorithms_typeOfProt_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_NASSecurityAlgorithms_typeOfProt* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_NASSecurityAlgorithms_typeOfProt_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_NASSecurityAlgorithms_typeOfProt_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      TS24301IE_NASSecurityAlgorithms_typeOfProt* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTAB, 
      TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_NASSecurityAlgorithms_typeOfProt)
         TS24301IE_NASSecurityAlgorithms_typeOfProt_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

static const OSEnumItem TS24301IE_PagingIdentity_ident_ENUMTAB[] = {
   { OSUTF8("imsi"), 0, 4, 0 },
   { OSUTF8("tmsi"), 1, 4, 1 }
} ;
#define TS24301IE_PagingIdentity_ident_ENUMTABSIZE 2

const OSUTF8CHAR* TS24301IE_PagingIdentity_ident_ToString (OSINT32 value)
{
   OSINT32 idx = value;

   if (idx >= 0 && idx < TS24301IE_PagingIdentity_ident_ENUMTABSIZE) {
      return TS24301IE_PagingIdentity_ident_ENUMTAB
         [TS24301IE_PagingIdentity_ident_ENUMTAB[idx].transidx].name;
   }
   else
      return OSUTF8("_UNKNOWN_");
}

int TS24301IE_PagingIdentity_ident_ToEnum (OSCTXT* pctxt,
   const OSUTF8CHAR* value, TS24301IE_PagingIdentity_ident* pvalue)
{
   OSSIZE valueLen = rtxUTF8LenBytes (value);
   return TS24301IE_PagingIdentity_ident_ToEnum2 (pctxt, value, valueLen, pvalue);
}

int TS24301IE_PagingIdentity_ident_ToEnum2 (OSCTXT* pctxt,
   const OSUTF8CHAR* value, OSSIZE valueLen, 
      TS24301IE_PagingIdentity_ident* pvalue)
{
   OSINT32 idx = rtxLookupEnum (value, valueLen, 
      TS24301IE_PagingIdentity_ident_ENUMTAB, 
      TS24301IE_PagingIdentity_ident_ENUMTABSIZE);

   if (idx >= 0) {
      *pvalue = (TS24301IE_PagingIdentity_ident)
         TS24301IE_PagingIdentity_ident_ENUMTAB[idx].value;
      return 0;
   }
   else {
      rtxErrAddStrParm (pctxt, (const char*)value);
      return LOG_RTERR (pctxt, RTERR_INVENUM);
   }
}

void asn1Init_TS24301IE_EPSBearerContextStatus (
   TS24301IE_EPSBearerContextStatus* pvalue)
{
   if (0 == pvalue) return;
   pvalue->ebi4 = FALSE;
   pvalue->ebi3 = FALSE;
   pvalue->ebi2 = FALSE;
   pvalue->ebi1 = FALSE;
   pvalue->ebi0 = FALSE;
}

void asn1Init_TS24301IE_NASSecParamsFromEUTRA (
   TS24301IE_NASSecParamsFromEUTRA* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_NASSecParamsToEUTRA (
   TS24301IE_NASSecParamsToEUTRA* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare1 = FALSE;
   pvalue->spare2 = FALSE;
   pvalue->spare3 = 0;
}

void asn1Init_TS24301IE_AddnUpdateResult (TS24301IE_AddnUpdateResult* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_AddnUpdateType (TS24301IE_AddnUpdateType* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_CSFBResponse (TS24301IE_CSFBResponse* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = FALSE;
}

void asn1Init_TS24301IE_EPSAttachResult (TS24301IE_EPSAttachResult* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = FALSE;
}

void asn1Init_TS24301IE_EPSAttachType (TS24301IE_EPSAttachType* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = FALSE;
}

void asn1Init_TS24301IE_EPSMobileIdentity_GUTI (
   TS24301IE_EPSMobileIdentity_GUTI* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24008IE_MCCMNCPair (&pvalue->mcc_mnc);
}

void asn1Init_TS24301IE_EPSMobileIdentity (TS24301IE_EPSMobileIdentity* pvalue)
{
   if (0 == pvalue) return;
   pvalue->filler = 15;
   OSCRTLMEMSET (&pvalue->content.u, 0, sizeof(pvalue->content.u));
}

void asn1Init_TS24301IE_EPSNetworkFeatureSupport (
   TS24301IE_EPSNetworkFeatureSupport* pvalue)
{
   if (0 == pvalue) return;
   pvalue->length = 1;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_EPSUpdateResult (TS24301IE_EPSUpdateResult* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = FALSE;
}

void asn1Init_TS24301IE_NASSecurityAlgorithms (
   TS24301IE_NASSecurityAlgorithms* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare1 = FALSE;
   pvalue->spare2 = FALSE;
}

void asn1Init_TS24301IE_PagingIdentity (TS24301IE_PagingIdentity* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_TrackingAreaIdent (TS24301IE_TrackingAreaIdent* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24008IE_MCCMNCPair (&pvalue->mcc_mnc);
}

void asn1Init_TS24301IE_PartialTrkAreaIdent0 (
   TS24301IE_PartialTrkAreaIdent0* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24008IE_MCCMNCPair (&pvalue->mcc_mnc);
   pvalue->tacs.n = 0;
}

void asn1Init_TS24301IE_PartialTrkAreaIdent1 (
   TS24301IE_PartialTrkAreaIdent1* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24008IE_MCCMNCPair (&pvalue->mcc_mnc);
}

void asn1Init_TS24301IE_PartialTrkAreaIdent2 (
   TS24301IE_PartialTrkAreaIdent2* pvalue)
{
   if (0 == pvalue) return;
   pvalue->n = 0;
}

void asn1Init_TS24301IE_TrackingAreaIdentListItem (
   TS24301IE_TrackingAreaIdentListItem* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = FALSE;
   OSCRTLMEMSET (&pvalue->elements.u, 0, sizeof(pvalue->elements.u));
}

void asn1Init_TS24301IE_TrackingAreaIdentList (
   TS24301IE_TrackingAreaIdentList* pvalue)
{
   if (0 == pvalue) return;
   pvalue->idents.n = 0;
}

void asn1Init_TS24301IE_UENetworkCapability (
   TS24301IE_UENetworkCapability* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare2 = 0;
   pvalue->spare4.numocts = 0;
}

void asn1Init_TS24301IE_UESecurityCapability (
   TS24301IE_UESecurityCapability* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare2 = FALSE;
   pvalue->spare3 = FALSE;
}

void asn1Init_TS24301IE_CLI (TS24301IE_CLI* pvalue)
{
   if (0 == pvalue) return;
   pvalue->value = 0;
}

void asn1Init_TS24301IE_GUTIType (TS24301IE_GUTIType* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_APNAggMaxBitRate (TS24301IE_APNAggMaxBitRate* pvalue)
{
   if (0 == pvalue) return;
   pvalue->ext.n = 0;
}

void asn1Init_TS24301IE_EPSQualityOfService (
   TS24301IE_EPSQualityOfService* pvalue)
{
   if (0 == pvalue) return;
   pvalue->bitRates.n = 0;
}

void asn1Init_TS24301IE_ESMInfoXferFlag (TS24301IE_ESMInfoXferFlag* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301IE_PDNAddress (TS24301IE_PDNAddress* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
   pvalue->pdnAddrInfo.numocts = 0;
}

void asn1Init_TS24301IE_PDNType (TS24301IE_PDNType* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = FALSE;
}

