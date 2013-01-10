#ifndef _CUST_PS_RIL_
#define _CUST_PS_RIL_

/***************************************************************************
                                 TARGET
****************************************************************************/
#define FEATURE_PS_ATT_SPECIFIC /* USA - AT&T */


/***************************************************************************
                                 COMMON
****************************************************************************/
/* 2012.2.22. kdhyun : PS Telephony Manager ���� �� Interface ����
              - ���� ���� : service_manager.c, GSMPhone.java, Android.mk
              - �߰� ���� : IPSTelephony.aidl, PSInterfaceManager.java
*/
#define FEATURE_PS_TELEPHONY_MGR

/* 20110324 PS10 SUNI : FTM Mode/Debug Screen in LINUX */
#define FEATURE_PS_DEBUG_MENU

#ifdef FEATURE_PS_DEBUG_MENU
  #define FEATURE_FTM_UICC_MENU_RIL
#endif

/* 2011.08.10 PS1 Soobeen: SYSTEM DEBUG MENU */
#define FEATURE_PS_SYSTEM_DEBUGMODE

/* LTE band Locking */
#define FEATURE_LTE_BAND_LOCK

/*
2012.2.22. kdhyun : QMI_SAR�� �̿��Ͽ� OEM QMI interface ����ϵ���?��
                    - ���� ���� : specific_absorption_rate_v01.c, qcril_other.c
*/
#define FEATURE_SKY_CP_OEM_QMI_ACCESS

/*
2012.2.22. kdhyun : QMI�� ���� NV Interface �߰� (QMI_SAR �̿�)
                    - ���� ���� : qcril_other.c, qcril_system_debug_nv.c, qmi_proxy.c, specific_absorption_rate_v01.c/h
*/
#define FEATURE_SKY_CP_NV_ACCESS_WITH_QMI

/*
2012.2.22. kdhyun : QMI�� ���� command �߰� (QMI_SAR �̿�)
                    - ���� ���� : qmi_proxy.c, specific_absorption_rate_v01.c/h
*/
#define FEATURE_SKY_CP_OEM_COMMANDS_WITH_QMI

/*
2012.4.6. kdhyun : CTS �׽�Ʈ�� CDMA ����
                   - ���� ���� : LINUX/android/device/qcom/common/common.mk
*/
#define FEATURE_PS_CTS_CDMA_REMOVE

// android/build/config.mk ??define?�어?�음...
#ifdef T_SKY_CP_DEBUG_LOG_FUNC
/*
    SD 카드�??�한 DM Logging
        - android\vendor\qcom\proprietary\dm-monitor
        - android\vendor\qcom\proprietary\syslog
        - android\packages\apps\DMLogging
*/
#define FEATURE_SKY_CP_DM_LOG_STORE_TEMP_MEMORY
#endif/* T_SKY_CP_DEBUG_LOG_FUNC */

/***************************************************************************
                                 AS
****************************************************************************/

/* 20101101 PSTeam Sungoh AT&T RSSI Requirement implementation
13340 V_42 <CDR-RBP-1030>*/
#define FEATURE_ATNT_RSSI_BAR
#define FEATRUE_PS_NO_SERVICE_AFTER_RLF 
/***************************************************************************
                                 MM
****************************************************************************/
/*
2010.11.09. kdhyun : MCC/MNC 001/01, 001/02, 002/01�� ���?network name�� �÷����� �ʵ��� ��
                     - �����ҽ� : qcril_qmi_nas2.c
*/
#define FEATURE_PS_NOT_USED_QUALCOMM_DEFAULT

/*
2011.07.21. Soobeen : Manual selection�� �����?RAT ���� �߰�
2012.4.2. kdhyun : Disable Managed Roaming
                   - �������� : GsmServiceStateTracker.java
*/
#define FEATURE_PS_MANUAL_SELECTION_RAT

/*
2011.11.22. kdhyun : TIMEZONE ���� display�� �� DST�� �������?����
                     - ���� TC : GSM-BTR-1-9275-2, LTE-BTR-1-4212
                     - �������� : DateTimeSettings.java
*/
#define FEATURE_PS_TIMEZONE_WITHOUT_DST

/*
2012.1.2. kdhyun : EF_SPN�� ���� ������ �� null�� return �ϵ��� ��
                   - �������� : UiccApplicationRecords.java
*/
#define FEATURE_PS_EF_SPN_CHECK

/*
2012.1.17. kdhyun : MM reject cause display for AT&T requirement
                    - �������� : GsmServiceStateTracker.java, strings.xml
*/
#ifdef FEATURE_PS_ATT_SPECIFIC
#define FEATURE_PS_MM_REJECT_CAUSE_DISPLAY
#endif

/*
2012.1.17. kdhyun : Out of service state�� Emergency only state�� �����ؼ� ������ display �ϵ��� ��
                    - �������� : MSimSubscriptionStatus.java, RadioInfo.java, Status.java
*/
#ifdef FEATURE_PS_ATT_SPECIFIC
#define FEATURE_PS_SEPERATE_OUT_OF_SERVIE_AND_EMERGENCY_ONLY
#endif

/*
2012.1.27. kdhyun : EF_PNN�� LAC range üũ ���� ����
                    - �������� : OplRecords.java
*/
#define FEATURE_PS_PNN_LAC_RANGE_BUG_FIX

/*
2012.3.13. kdhyun : NITZ�� ���� ���� �ð� ���� �� Timezone �� DST�� �����?������Ʈ ���� �ʴ� ������ �ֽ� zoneinfo ���Ϸ� ��ü��(���� 2011l, ��ü 2012b)
                    (���� TC : GSM-BTR-1-9275, GSM-BTR-1-9350 fail)
2012.04.02 kim youngkyun : GSM-BTR-1-9275 �׸� fail�� ���Ͽ� zoneinfo 2012b������ 2011g�� ��ü
                    - �������� : LINUX\android\bionic\libc\zoneinfo\zoneinfo.dat, zoneinfo.idx, zoneinfo.version
*/
#define FEATURE_PS_ZONEINFO_BUG_FIX

/*
2012.3.21. kdhyun : android���� pref mode �ʱⰪ GWL�� ����
                    - �������� : RILConstants.java
*/
#define FEATURE_PS_DEFAULT_NETWORK_MODE_GWL

/*
2012.4.5. kdhyun : AlphaLong�� null�� ���?AlphaShort ����ϵ���?��
                   - �������� : GsmServiceStateTracker.java
*/
#define FEATURE_PS_ALT_OPERATOR_NAME_USE

/*
2012.4.5. kdhyun : Restricted notification ������ �ʵ��� ��
                   - �������� : GsmServiceStateTracker.java
*/
#define FEATURE_PS_RESTRICTED_NOTIFICATION_NOT_SUPPORT

/*
2012.4.27. kdhyun : 30145 patch??qcril.c??android_request_id가 QMI_RIL_FW_ANDROID_REQUEST_HNDL_MAX_EVT_ID (127)�??�한??
                    Ril.h??추�???event id값을 추�??�여 132 값보????값으�??�정??
                    - ?�정?�일 : qcril.c, ril.h
					- 1048 버전 only
*/
#define FEATURE_SKY_CP_RIL_FW_ANDROID_REQUEST_HNDL_MAX_EVT_ID_FIX

/*
2012.4.27. kdhyun : 30145 patch??qcril.c 추�???RIL관??ITEM 처리 구조??변?�로 간헐?�으�??�밴??처리??문제가 ??
                    Voice & Data REG STATE, Auto & Malual Network Selection 관??RIL event??30145 patch ?�전�?같이 처리?�도�?
                    qmi_ril_fw_dedicated_thrd_exec_android_requests_set ?�이블에???�외??
					- 1048 버전 only
*/
#define FEATURE_SKY_CP_FW_DEDICATED_ANDROID_REQ_BUG_FIX

/*
2012.04.27. cmjung : GWL?????? ?????? ???? ???? ?? ????? ??? ????? GWL?? ?????? ??? GW ?????? ?????? ??o?? ????.
                                        Modem pref mode nv(00010)???? Sync.
                    - ???????? : GsmServiceStateTracker.java, ServiceStateTracker.java
*/
#define FEATURE_SKY_CP_GET_CM_PERSIST_PREF_MODE

/*
2012.5.30. kdhyun : *#*#4636#*#* -> Phone information -> Set preferred network type ���۾��ϵ��� ��
                   - �������� : RadioInfo.java
*/
#define FEATURE_PS_BLOCK_GOOGLE_NETWORK_MODE_SETTING

/*
2012.06.05. cmjung : deleted 'No service' in Lock screen
                    - ��d ���� : KeyGuardUpdate.java, CarrierLabel.java(modified by US3team )
*/

#define FEATURE_PS_NO_SVC_BLOCK

/*
2012.6.29. cmjung : modified the network name  mismatch in notification after reject from network.
                    - modified file : GSMPhone.java, NotificationMgr.java
*/
#define FEATURE_PS_MATCH_NETWORK_NAME_IN_NOTIFICATION_AFTER_REJECT

/***************************************************************************
                                 CC
****************************************************************************/
/*ygkim 2012.1.3 AT&T Local CLIR
10776 & Local CLIR for AT&T ������  get property�� �̿��ؼ� CLIR flag on/off �Ѵ�.
*/
#define FEATURE_GET_CLIR_LOCAL

/*EsLee 2012.1.3 Error Cause by FDN Enabled
Process USSD FDN Check Failure as Not Unsolicited res But OnRequestComplete
*/
#define FEATURE_PS_USSD_FDN_CHECK_ERROR_RELAY

/*ygkim 2012.1.3 Qualcomm bug fix
���� :Airplane ������ State machine ���� ���� ��.  
*/
//#define FEATURE_RADIO_POWER_CB_SUCCESS

/*hnlee 2012.1.3 UICC Check for call waiting
 ���� ���� ���?call setting �޴� �� forwarding�� waiting�� ������ ���ϵ��� ���?�߰� 
 ����: ���� ���� ���� �Ϻ� ����, �����ص� ��忡��?  
 */

//#define FEATURE_SIM_PRESENT_CHECK_FOR_CALL_SETTING 

/*hnlee 2012.1.3 Call end Reason 
 ���� :Add Call End raeson for Reject Indication --> function ���� ��. 
 �ҽ��� reason�� ���ؼ���  �����Ͽ� Presto reason(UI call cause) ���� �� �� ����.
 */
#define FEATURE_ADD_CALL_END_REASON
#define FEATURE_PRESTO_ADD_ECC_FAIL_CAUSE

/*ygkim 2012.1.3 Qulaocmm bug fix
����: DTMF state machine���� �̻� ���� ���� -->��ü ���� �ڵ� 
Qualcomm ���� qcril_reqlist_free() �� ���� �ϰ�  event_queue()�����ϵ��� ����  
*/
//#define FEATURE_DTMF_EVENT_UNSYNC

/* SUNI 20120215 OSCAR PLM 317
  After the call was ended at local, the state 'ACTIVE' is returned in result to get current call */
  // Choi Juhyun, Lee Eunseong modified a side effect for multi call
#define FEATURE_PS_CC_RETURN_NULL_DURING_CALL_DISCONNECTING

/* Choi, Juhyun, Lee, Eunseong 20120320, Incoming call ring�� ���� ���� �ʴ� ���� ����.
RIL_UNSOL_CALL_RING�� UI�� ������ ���� �ʾ� �߻��� ����*/
#define FEATURE_INCOMING_ALERTING_UNSOL_REP

/* 20120330, Lee, Eunseong ���� ���� ���� SBA �ݿ�, ���� regi��, 2nd MO call�� ���� reject�� ���� ��, 
   cause���� valid���� �ʾ� UI�� conference call�� �ߴ� ������ �ִٰ� ��, �̷� �� cause�� ���� �Լ� ȣ��.*/
#define FEATURE_SKY_CP_LAST_CALL_FAILURE_FORCED_INIT

/*20120418 Lee, Eunseong
   USSD failure return*/
 #define FEATURE_PS_USSD_FAIL_RETURN_NW_NOT_RESPONSE
   
/* 20120426 Lee, Eunseong
    ȿ��: PS only cell���� CS doamin���¸� no service �� �ø��� ���� ����
*/
#define  FEATURE_SKY_CP_SUPPPORT_PS_ONLY_MODE

/* Choi juhyun(jubong), Lee, Eunseong 2012.05.17 
 This Feature  ignore DTMF option.( flow control )
*/
#define FEATURE_PS_CC_DTMF_BLOCK_FLOW_CONTROL

/*ygkim 2012.05.31
we soemtimes have no return value to qmi_client_send_msg_sync(QMI_DMS_SET_OPERATING_MODE_REQ_V01) callback. but Modem's operating mode action is success.
this is unsync issue between modem and Android.
if this is failure by timeout for callback. we change failure to success. also change timeout value( 2000 -->5000) 
*/
#define FEATURE_HANDLE_QMI_TIMEOUT_SET_MODEM_OP_MODE

/***************************************************************************
                                 Data
****************************************************************************/

/* 20110422_PS11_DATA_PKH
 - init.rc ���� 
 - net.tcp.buffersize.default 4096,87380,262140,4096,16384,262140
 - tcp advertisement window scals value  3 : init.qcom.rc
*/
#define FEATURE_DATA_CHANGE_TCP_CONFIGRATION

/* 20110422_PS11_DATA_PKH
 - Ư�� VPN ���� ���� �ȵǴ� ���� (���� : android ��  SSL VPN �� Cisco VPN ������)
 - external\mtpd\L2tp.c �� kernel config ( kernel\arch\arm\config\ ���� �̹� define�� ������ �ּ�ó���ϰ� y�� ���� )
*/
#define FEATURE_DATA_VPN_FIX

/* 20110422_PS11_DATA_PKH
 - no service event �� �߻��� ���?���� data �������?�ʰ� disconnected �� broadcast �Ǿ� default route �����ǰ� 
   �ٷ� in service ���ԵǸ� �Ʒ������δ� data ����Ǿ�?������ �������� �������?���� ������ ���̴� ���� 
 - dataconnectiontracker.java , BSP ���� �ּ�ó���Ǿ� �ʿ� ���� ���?����. 
 - ICS ���� (OSCAR �� ���? phonebase.java��  mOosIsDisconnect ���� -> false�� ����.
*/
#define FEATURE_DATA_NO_SERVICE_BUG_FIX

/* 20110422_PS11_DATA_PKH
 - CTS testTrafficStatsForLocalhost test �� ���� kernel config �� CONFIG_UID_STAT=y �� ����. 
 - FEATURE_DATA_CONFIG_UID_STAT �� FEATURE_DATA_FOR_CTS_TEST rename
 - dun file permission ���� �� /dev/dun -> /dev/pantech/dun ���� �̵� -> OSCAR ICS ���� ���� /ata/dun ���� ���� �̵��Ǿ� ���� // ������ !!
 - ip permission ���� 4775 -> 0775 (init.qcom.modem_links.sh) OSCAR ICS �������� -> init.qcom.rc ���� SUID bit ���ŵǾ� ���� // ������  !! 
 */
#define FEATURE_DATA_FOR_CTS_TEST

/* 2012/02/01 by kwanghee
    Not support IPv6 type DNS Query
    Ignore test connection for disconnection problem
    getaddrinfo.c
*/
#define FEATURE_PS_NOT_SUPPORT_IPV6_DNS_QUERY

/* 2012/06/04 by kwanghee
    system.prop
*/
#define FEATURE_PS_CHANGE_MTU


/* 2011/02/07 by kwanghee
    for Disable DUN
*/
#ifdef FEATURE_SKY_CP_NV_ACCESS_WITH_QMI
#define FEATURE_PS_DISABLE_DUN
#endif

/* 2011/06/25 by kwanghee
    for Disable CNE 

*/
#define FEATURE_PS_DISABLE_CNE

/* 2011.11.24 Yi Dongseok
 Fix the problem that data and WIFI icon displayed side by side
 notify SERVICE_TYPE_DEFAULT connected one more */
//#define FEATURE_NOTIFY_SERVICE_TYPE_DEFAULT_ONE_MORE

/* 2011/11/28 Yi Dongseok */
#define FEATURE_PS_APN_TYPES

/* 2011/11/28 Yi Dongseok */
#ifdef FEATURE_PS_APN_TYPES
#define FEATURE_PS_ENTITLEMENT
#endif /* FEATURE_PS_APN_TYPES */

/* 2012/01/31 by kwanghee 
   for AlwaysOn Settings
*/
#define FEATURE_PS_ALWAYSON


// 2011/12/02 Yi Dongseok
// change dhcp lease time 1h -> 24h for tethering
#define FEATURE_TETHERING_DHCP_LEASE_TIME
/* 2012/01/31 by kwanghee 
   for debugging, will be deleted.
*/
#define FEATURE_PS_DEBUG_TEMP

/* 2012/02/27 by kwanghee 
   Whenever data was disabled/enabled in easysetting, cannot update ui  in CallSetting.
*/
#define FEATURE_PS_UPDATE_MOBILE_DATA_IN_CALLSETTINGS

/* 2012.03.05 msseo
     Domestic roaming feature migration : domestic roaming�� ���?roaming false�� ó���Ͽ� data service �����ϵ��� ��.
*/
#define FEATURE_PS_DOMESTIC_ROAMING

/* 2012.03.05 msseo
     Acitng HPLMN feature migration : SIMRecords���� Acting HPLMN �о��?
*/
#define FEATURE_PS_ACTING_HPLMN

/* 2012.03.05 msseo
     PS attach �ÿ� attached icon �����ֵ��� �߰�
*/
#define FEATURE_PS_ATTACHED_ICON

/* 2012/04/02 by kwanghee 
  for adding network type for hspa+
*/
#define FEATURE_PS_ADD_NETWORK_TYPE_FOR_HSPAP


/* 2012/04/02 by kwanghee 
  for prevent to send mms toward secondary dns address
  Qualcomm original source code have bug when writePidDns excuted in ConnecitivityService.java
*/
#define FEATURE_PS_WRITE_PID_DNS_BUF_FIX

/* 2012/05/24 Yi Dongseok
  Disable current data system
*/
#define FEATURE_PS_DISABLE_CURRENT_DATA_SYSTEM

/* 
 - Phone Interface�� ���� ���ϴ� APP�� ���Ͽ� AIDL�� �߰�
 - aidl ���� : ISkyDataConnection.aidl
 - �������̽� ���� : MMDataConnectionTracker.java
 - �߰� ���� ���� : DataPhone.java, Phone.java , SkyDataConInterfaceManager.java
 - aidl ���� �߰� : service_manager.c�� .aidl �߰�
 - make ���� ���� : android/framework/base/Android.mk ����
 - telephony/java/com/android/internal/telephony/ISkyDataConnection.aidl �߰�
*/
#define FEATURE_ISKY_DATA_CONNECTION


/*
- datausage �޴����� background data ���� �� for loop �� ���� UID ���� ip table �� set �� �־� 
   app ���� �ð� �� ���� ���� anr �߻� �� background data ���� ���� �� booting �� system ���� 
   anr �߻��ϴ� ���� ����   =>�� UID ���� event �� ó���ǵ��� ��.
- android_filesystem_config.h  �� Define �� UID �� system UID �� ����. 
- system/bin/iptables �� system �������� �Ǿ� ������ ip6tables �� shell �� �Ǿ� �վ� system ���� ����.
   -NetworkPolicyManagerService.java
*/
#define FEATURE_SKY_DS_BACKGROUND_RESTRICT_BUG_FIX

/*
- system/bin/iptables �� system �������� �Ǿ� ������ ip6tables �� shell �� �Ǿ� �վ� system ���� ����.
   -android_filesystem_config.h
*/

#define FEATURE_SKY_DS_IP6TABLE_UID_BUG_FIX

#define FEATURE_SKY_DS_FAST_DORMANCY

/* 
 - startUsingNetworkFeature���� Reconnect ȣ���?Fail�� �߻��Ͽ��� Phone.APN_REQUEST_STARTED�� �����Ͽ� Application���� ȥ���� ������
 - reconnect ���н� APN_REQUEST_FAILED�� �����ϵ��� ����
*/

#define FEATURE_SKY_DS_BUG_FIX_STARTUSINGNETWORKFEATURE

/*
 - �����ͷι� üũ �� �˾����� ���� off �ǰ� Ȧ�� �����Ͽ� �˾� ���?���ý� üũ���� �ʴ� ���� ����
*/
#define FEATURE_SKY_DS_FIX_ROAM_CHECK_UI_BUG

/*
 - efs easer �� ���� data ���� �� preferred apn ����ϸ�?data �� �����ϴ� ���� ���� from ����
*/
#define FEATRUE_SKY_SET_PREFERAPN_BUG_FIX

/*
- data registration statue query �� fail �߻��ϸ� data service state �� no service, radio tech �� none ���� ó���Ǵ� ������ 
   ���� ���� newSS �� �����Ͽ� ���� response fail �߻��� ���� �� �����ϵ��� ��. 
- GsmServiceStateTracker.java
*/
#define FEATURE_SKY_DS_DATA_REGISTRATION_QUERY_FAIL_RECOVERY

/*
-  usb tethering/wifi hotspot �� google dns ���� �������?�Ϻ� ����Ʈ �������?�ʴ� ���� 
- ConnectivityService.java  tethering.java 
*/
#define FEATURE_SKY_DS_SET_TETHERED_DNS
/*
  Park.kwanghee added 20120329
  tethering.java ���� addUpstreamV6Interface()/ removeUpstreamV6Interface() �� 
  add/remove �Ҷ� NetworkManagementService ���� IllegalStateException �� throw �ϴµ�
  �ش� �Լ��� catch ������ RemoteException�� catch �ؼ� exception ó������ �ʰ� ������ ���޵Ǹ鼭 �߻��� ���� 
  from ����.
*/
#define FEATURE_SKY_DS_EXCEPTION_CATCH_BUG_FIX

#define FEATURE_SKY_DS_SYNC_CS_SERVICE_STATE

#define FEATURE_SKY_DS_SET_TCPBUF_IN_RAT_CHANGE

/*
 added by park.kwanghee
 wifi/3G icon appeared when thering is working.
 Tethering on -> data off -> data on -> wifi on
*/
#define FEATURE_SKY_DS_TETHERED_BUG_FIX

#define FEATURE_SKY_DS_ICON_NO_SRV_CR347576

#define FEATURE_SKT_DS_RESUME_DOWNLOAD_FOR_WIFI_TO_DATA_CHANGE

#define FEATURE_SKY_DS_SBA_1045_CR350813

#define FEATURE_SKY_DS_QOS_DISABLE

/* 2012.05.10 Yi Dongseok 
 * AT commands for last and total data usage
 */
#define FEATURE_PS_ATCMD_DATA_USAGE

/* 2012.06.05 msseo
    2G voice �� �� NetworkInfo�� isAvailable()�� false�� ���ϵǴ� ���� ����
    Data suspend �Ǵ��� network availalbe ���� ����
*/
#define FEATURE_PS_DATA_ALLOWED_CONDITION

/***************************************************************************
                                 SIM
****************************************************************************/
/*ygkim 2012.1.3 PIN retry flag
SIM State change ������ SIM Retry ������ �����ؼ� ����.
*/
#define FEATURE_PS_PIN_RETRY_INIT
/* ygkim 2012.1.3  PS Card Type
GingerBread ���� OS������ Android UICC Manager������  ���� �Ѵ�.
*/
#define FEATURE_PS_CARD_TYPE
/*ygkim 2012.1.3 virtual sim flag
SIM State Change ������ Virtual sim ������ �����ؼ� �����Ѵ�.
SIM Manager ���� �� Factory Command �������� ECC List handling�� �̿� 
*/
#define FEATURE_PS_IS_VIRTUAL_SIM
/*ygkim 2012.1.3 Sim State structure
Android �� Qcril ������ SIM State Structure ���� �� ���� 
*/
#define FEATURE_PS_ILLEGAL_SIM_STATE_MISMATCH
/*ygkim 2012.1.3 Perso Ready state
MSC 10776 testcase �������� 
Android SIM Ready Delay ���� ���� 
Modem�� Ready����������, ���� ������ Android�� Not Ready�� ���� 
*/
#define FEATURE_EARLY_APP_STATE_READY

/*ygkim 2012.5.18  Card Power down 
set Phone booting Sequence without Card power down action. 
1) ~1045 Patch Source: this feature Disable
2) 1048 Patch Source ~ 1053,~ : this feature Enabled 
*/
#define FEATURE_QMI_NO_CARD_POWER_DOWN_IN_AIRPLANE 

/*<---Start UICC Debug menu handling */
/*ygkim 2012.1.3 Debug menu interface
Android OS ���� IMPU ���� �о� ���̴� interface ���� 
*/
#define FEATURE_IMPU_READ
/*ygkim 2012.1.3 Debug menu interface
Android OS���� ISIM ���� �о� �帵�� interface ���� 
*/
#define FEATURE_ISIM_READ
/*<---End UICC Debug menu handling  */

/*QE   */
/*ygkim 2012.1.3 Qcril ����ȭ 
Qualcomm���� Buff size�� 255�� ���� ��Ŵ. MDM9200:50 -->Pantech:100 -->Q8960:255
*/

/*ygkim 2012.5.18 Card Power down
Q8960: airplane on /off is handling without Card Power down/up action 
1)~1045 Patch Socure: This feature Enabled
2)1048~ 1053,~:this feature Enabled but code is modified
*/
#define FEATURE_RADIO_POWER_WITHOUT_CARD_PWDL

/*ygkim 2012.2.27 Phone power on without No Card Power down 
Q8960 ���� APM flag handling�� qcril_qmi_nas_is_apm_enabled()�� �̿��ϰ� ���� ��. 
AT&T ��������  Radio on/off�� ���?���� Modem booting �� ���� �ϴ� Card booting �� �̿� �Ѵ�. 
*/
#define FEAURE_APM_DISABLED

/*ygkim 2012.2.27 Limited Card error 
���� ���� Card Error ���°� �ƴѴ� Card error event�� trigger  �Ǵ� ���?android interface���� check �ؼ�
event �� ���� �ϵ��� ����. 
*/
#define FEAURE_LIMITED_CARD_ERROR_TRIGGER

/* HNLEE 2012.03.07
    Virtual SIM ���ǿ� ICCID ���� ������ ����ϱ�?���� �����ϴ� hasIccCard�� return ���� true�� �ö����?���� ����
    No sim, Virtual Sim ���¿����� hasIccCard ���� false�� �����Ͽ� ICCID�� null�� ó���ϰ� ��
*/
#define FEATURE_PS_VIRTUAL_SIM_CHECK

/*ygkim 2012.03.26  
Andorid ���� ������ STK RIL Ready ���� �� First proactive command(SETUP) ������ ���� ���?�Ǵ� RESEND timer(5sec)�� ����
5sec delay ���� �ٷ� �������� ����.(0.001�� �� ���� )
*/
#define FEATURE_PS_CHG_RESEND_TIMER

/***************************************************************************
                                 SIM-WIFI
****************************************************************************/


#endif //CUST_PS_RIL_H

