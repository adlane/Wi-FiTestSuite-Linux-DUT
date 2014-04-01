/****************************************************************************
 *  (c) Copyright 2007 Wi-Fi Alliance.  All Rights Reserved
 *
 *
 *  LICENSE
 *
 *  License is granted only to Wi-Fi Alliance members and designated
 *  contractors ($B!H(BAuthorized Licensees$B!I(B)..AN  Authorized Licensees are granted
 *  the non-exclusive, worldwide, limited right to use, copy, import, export
 *  and distribute this software:
 *  (i) solely for noncommercial applications and solely for testing Wi-Fi
 *  equipment; and
 *  (ii) solely for the purpose of embedding the software into Authorized
 *  Licensee$B!G(Bs proprietary equipment and software products for distribution to
 *  its customers under a license with at least the same restrictions as
 *  contained in this License, including, without limitation, the disclaimer of
 *  warranty and limitation of liability, below..AN  The distribution rights
 *  granted in clause
 *  (ii), above, include distribution to third party companies who will
 *  redistribute the Authorized Licensee$B!G(Bs product to their customers with or
 *  without such third party$B!G(Bs private label. Other than expressly granted
 *  herein, this License is not transferable or sublicensable, and it does not
 *  extend to and may not be used with non-Wi-Fi applications..AN  Wi-Fi Alliance
 *  reserves all rights not expressly granted herein..AN 
 *.AN 
 *  Except as specifically set forth above, commercial derivative works of
 *  this software or applications that use the Wi-Fi scripts generated by this
 *  software are NOT AUTHORIZED without specific prior written permission from
 *  Wi-Fi Alliance.
 *.AN 
 *  Non-Commercial derivative works of this software for internal use are
 *  authorized and are limited by the same restrictions; provided, however,
 *  that the Authorized Licensee shall provide Wi-Fi Alliance with a copy of
 *  such derivative works under a perpetual, payment-free license to use,
 *  modify, and distribute such derivative works for purposes of testing Wi-Fi
 *  equipment.
 *.AN 
 *  Neither the name of the author nor "Wi-Fi Alliance" may be used to endorse
 *  or promote products that are derived from or that use this software without
 *  specific prior written permission from Wi-Fi Alliance.
 *
 *  THIS SOFTWARE IS PROVIDED BY WI-FI ALLIANCE "AS IS" AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 *  OF MERCHANTABILITY, NON-INFRINGEMENT AND FITNESS FOR A.AN PARTICULAR PURPOSE,
 *  ARE DISCLAIMED. IN NO EVENT SHALL WI-FI ALLIANCE BE LIABLE FOR ANY DIRECT,
 *  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, THE COST OF PROCUREMENT OF SUBSTITUTE
 *  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 *  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE) ARISING IN ANY WAY OUT OF
 *  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. ******************************************************************************
 */
 

#ifndef _WFA_CA_H_
#define _WFA_CA_H_

#define ENCRYPT_NONE         0
#define ENCRYPT_WEP          1
#define ENCRYPT_TKIP         2
#define ENCRYPT_AESCCMP      3
#define ENCRYPT_AESCCMP_TKIP 4

#define WMMAC_UPLINK         0
#define WMMAC_DOWNLINK       1
#define WMMAC_BIDIR          3
#define GROUP_WMMAC          0
#define GROUP_WMMCONF        1
#define WMMAC_ADDTS          0
#define WMMAC_DELTS          1
#define WMMAC_AC_BE          0
#define WMMAC_AC_BK          1
#define WMMAC_AC_VI          2
#define WMMAC_AC_VO          3

extern int wfaStaAssociate(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaIsConnected(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaGetIpConfig(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetIpConfig(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaVerifyIpConnection(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaGetMacAddress(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetMacAddr(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);

extern int wfaStaGetBSSID(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaGetStats(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaSetEncryption(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetEapTLS(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetPSK(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaGetInfo(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaDeviceGetInfo(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaDeviceListIF(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetEapTTLS(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetEapSim(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetPEAP(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetEapSIM(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetPEAP(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetUAPSD(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetIBSS(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaDebugSet(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetMode(int, BYTE *, int *, BYTE *);
extern int wfaStaUpload(int, BYTE *, int *, BYTE *);
extern int wfaStaSetWMM(int, BYTE *, int *, BYTE *);

extern int wfaStaPresetParams(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetEapFAST(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetEapAKA(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetSystime(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaResetTspecs(char* ifname);
extern int wfaStaSet11n(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetWireless(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSendADDBA(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetRIFS(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSendCoExistMGMT(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaResetDefault(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaDisconnect(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaReAssociate(int, BYTE*, int*, BYTE*);

extern int wfaStaSetPwrSave(int, BYTE *, int *, BYTE *);
extern int wfaStaResetDefault(int, BYTE *, int *, BYTE *);
extern int wfaStaSendNeigReq(int, BYTE *, int *, BYTE *);
extern int wfaStaTestBedCmd(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSendFrame(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int  wfaStaGetP2pDevAddress(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf); 	
extern int wfaStaSetP2p(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);			
extern int wfaStaP2pConnect(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);		
extern int wfaStaStartAutoGo(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);		
extern int wfaStaP2pStartGrpFormation(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);		

extern int wfaStaP2pDissolve(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);			
extern int wfaStaSendP2pInvReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);		
extern int wfaStaAcceptP2pInvReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);		
extern int wfaStaSendP2pProvDisReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);		
extern int wfaStaSetWpsPbc(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);

extern int wfaStaWpsReadPin(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);						
extern int wfaStaWpsEnterPin(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);			 
extern int wfaStaGetPsk(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);			 
extern int wfaStaP2pReset(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaWpsReadLabel(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);						
extern int wfaStaGetP2pIpConfig(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSendServiceDiscoveryReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSendP2pPresenceReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetSleepReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetOpportunisticPsReq(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaAddArpTableEntry(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaBlockICMPResponse(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaDevSendFrame(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetRadio(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetRFeature(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaSetSecurity(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);

extern int wfaStaStartWfdConnection(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaCliCommand(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaConnectGoStartWfd(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaGenerateEvent(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaReinvokeWfdSession(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);
extern int wfaStaGetParameter(int len, BYTE *caCmdBuf, int *respLen, BYTE *respBuf);




#endif
