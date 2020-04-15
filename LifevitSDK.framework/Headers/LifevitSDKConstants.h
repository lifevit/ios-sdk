//
//  LifevitSDKConstants.h
//  TensiometerSDK
//
//  Created by David Casas on 3/8/17.
//  Copyright © 2017 LifeVit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef LifevitSDKConstants_h
#define LifevitSDKConstants_h


typedef enum TensioBraceletRequest {
    noRequest,startRequest,setSmartwatchConfigRequest,removeBloodPressureRequest, getSmartwatchTimeRequest, getAmbulatoryBloodPressureTimeRequest, getBasicInfoRequest, resetDefaultsRequest, setAmbulatoryBloodPressureTimeRequest, setSmartwatchTimeRequest, stopRequest, getBloodPressureHistoryRequest, returnRequest} TensioBraceletRequest;

#define STATUS_DISCONNECTED -1
#define STATUS_SCANNING 0
#define STATUS_CONNECTING 1
#define STATUS_CONNECTED 2

#define DEEP_SLEEP 0
#define LIGHT_SLEEP 1
#define AT250_LIGHT_SLEEP 3

#define BRACELET_PARAM_HEIGHT 0
#define BRACELET_PARAM_WEIGHT 1
#define BRACELET_PARAM_DATE 2
#define BRACELET_PARAM_TARGET 3
#define BRACELET_PARAM_ACNS 4
#define BRACELET_PARAM_HANDS 5
#define BRACELET_PARAM_FIND_PHONE 6
#define BRACELET_PARAM_HRMONITOR 7
#define BRACELET_PARAM_FIND_DEVICE 8
#define BRACELET_PARAM_ANTILOST 9
#define BRACELET_PARAM_SIT 10
#define BRACELET_PARAM_ALARM0 11
#define BRACELET_PARAM_ALARM1 12

#define BRACELET_HAND_NONE 0
#define BRACELET_HAND_AUTO 1
#define BRACELET_HAND_LEFT 2
#define BRACELET_HAND_RIGHT 3

#define ACNS_CALL 0x0001
#define ACNS_SMS 0x0002
#define ACNS_QQ 0x0004
#define ACNS_WECHAT 0x0008
#define ACNS_FACEBOOK 0x0010
#define ACNS_TWITTER 0x0020
#define ACNS_WHATSAPP 0x0040
#define ACNS_INSTAGRAM 0x0080
#define ACNS_EMAIL 0x0100
#define ACNS_LINE 0x0200
#define ACNS_SKYPE 0x0400

#define DEVICE_HEART 0
#pragma mark - DEPRECATED
//FIXME: PLEASE, CHANGE DEVICE_BRACELET CONSTANT USE TO OTHER DEVICE_BRACELET_* CONSTANT
    #define DEVICE_BRACELET 1
#pragma mark - END DEPRECATED
#define DEVICE_OXIMETER 2
#define DEVICE_THERMOMETER 3
#define DEVICE_WEIGHT_SCALE 4
#define DEVICE_TENSIO_BRACELET 5
#define DEVICE_BRACELET_AT250 6
#define DEVICE_BRACELET_AT500HR 1
#define DEVICE_BABYTHERMOMETER 7
#define DEVICE_BRACELET_AT250_DFU 8
#define DEVICE_PILL_REMINDER 9
#define DEVICE_BRACELET_AT2019 10	

#define DEVICE_TYPES 11

#define GENDER_MALE 0
#define GENDER_FEMALE 1

#define DEFAULT_STRIDE_WIDE_MEN @78
#define DEFAULT_STRIDE_WIDE_WOMEN @70

#define WEIGHTSCALE_UNIT_KG @"kg"
#define WEIGHTSCALE_UNIT_LB @"lb"

#define WEIGHTSCALE_TYPE1 @(1)
#define WEIGHTSCALE_TYPE2 @(2)

#define THERMOMETER_UNIT_CELSIUS @"celsius"
#define THERMOMETER_UNIT_FARENHEIT @"farenheit"

#define THERMOMETER_MODE_ENVIRONMENT 0
#define THERMOMETER_MODE_BABY 1
#define THERMOMETER_MODE_EAR 2
#define THERMOMETER_MODE_FOREHEAD 3

//Medición correcta
#define CODE_OK 0
//Error desconocido
#define CODE_UNKNOWN -1
//"error_bluetooth2"="Señal muy baja";
#define CODE_LOW_SIGNAL -2
//"error_bluetooth3"="Hay ruido en la comunicación";
#define CODE_NOISE -3
//"error_bluetooth4"="Tiempo de inflación demasiado largo";
#define CODE_INFLATION_TIME -4
//"error_bluetooth5"="Resultado anormal";
#define CODE_ABNORMAL_RESULT -5
//"error_bluetooth6"="Por favor, reintente la medición";
#define CODE_RETRY -6
//"error_bluetooth7"="La carga del dispositivo es baja";
#define CODE_LOW_BATTERY -7
//"error_bluetooth8"="No results detected";
#define CODE_NO_RESULTS -8
//"error_bluetooth9"="Too much interference";
#define CODE_TOO_MUCH_INTERFERENCE -9

#define TENSIOBRACELET_ERROR_HAND_HIGH -8
#define TENSIOBRACELET_ERROR_HAND_OK -9
#define TENSIOBRACELET_ERROR_HAND_LOW -10
#define TENSIOBRACELET_ERROR_GENERAL -11
#define TENSIOBRACELET_ERROR_LOW_POWER -12
#define TENSIOBRACELET_ERROR_INCORRECT_HAND_POSITION -13
#define TENSIOBRACELET_ERROR_INCORRECT_POSITION -14
#define TENSIOBRACELET_ERROR_BODY_MOVED -15
#define TENSIOBRACELET_ERROR_TIGHT_WEARING -16
#define TENSIOBRACELET_ERROR_LOOSE_WEARING -17
#define TENSIOBRACELET_ERROR_AIR_LEAKAGE -18
#define TENSIOBRACELET_ERROR_MEASURING_ABORTED -19
#define TENSIOBRACELET_ERROR_TOO_MANY_INTERVALS -20
#define TENSIOBRACELET_ERROR_OVERLAPING_INTERVALS -21


#define PILLREMINDER_REQUEST_SET_DEVICETIME 0
#define PILLREMINDER_REQUEST_GET_DEVICETIME 1
#define PILLREMINDER_REQUEST_SET_DEVICETIMEZONE 2
#define PILLREMINDER_REQUEST_GET_DEVICETIMEZONE 3
#define PILLREMINDER_REQUEST_GET_BATTERYLEVEL 4
#define PILLREMINDER_REQUEST_GET_LATESTSYNCHRONIZATIONTIME 5
#define PILLREMINDER_REQUEST_SET_SUCCESSFULSYNCHRONIZATIONSTATUS 6
#define PILLREMINDER_REQUEST_GET_CLEARSCHEDULEPERFORMANCEHISTORY 7
#define PILLREMINDER_REQUEST_SET_ALARMSSCHEDULE 8
#define PILLREMINDER_REQUEST_GET_ALARMSCHEDULE 9
#define PILLREMINDER_REQUEST_GET_SCHEDULEPERFORMANCEHISTORY 10
#define PILLREMINDER_REQUEST_GET_SCHEDULEPERFORMANCEHISTORY_END 11
#define PILLREMINDER_REQUEST_SET_ALARMDURATION 12
#define PILLREMINDER_REQUEST_SET_ALARMCONFIRMATIONTIME 13
#define PILLREMINDER_REQUEST_GET_CLEARALARMSCHEDULE 14

#define PILLREMINDER_COLOR_NOT_SET -1
#define PILLREMINDER_COLOR_RED 1
#define PILLREMINDER_COLOR_GREEN 2
#define PILLREMINDER_COLOR_BLUE 3
#define PILLREMINDER_COLOR_YELLOW 4
#define PILLREMINDER_COLOR_PURPLE 5

#define PILLREMINDER_STATUS_TAKEN_IGNORED_FIRST_ALARM 0
#define PILLREMINDER_STATUS_TAKEN_IGNORED_SECOND_ALARM 1
#define PILLREMINDER_STATUS_TAKEN_RESPONDED_FIRST_ALARM 2
#define PILLREMINDER_STATUS_TAKEN_RESPONDED_SECOND_ALARM 3

#define THERMOMETERV2_COMMAND_STOP 0x0029
#define THERMOMETERV2_COMMAND_SHUTDOWN 0x0030
#define THERMOMETERV2_COMMAND_CELSIUS 0x0031
#define THERMOMETERV2_COMMAND_FARENHEIT 0x0032
#define THERMOMETERV2_COMMAND_LAST_MEASURE 0x0033
#define THERMOMETERV2_COMMAND_VERSION_NUMBER 0x0034



#define THERMOMETER_ERROR_BODY_TEMPERATURE_HIGH 0
#define THERMOMETER_ERROR_BODY_TEMPERATURE_LOW 1
#define THERMOMETER_ERROR_AMBIENT_TEMPERATURE_HIGH 2
#define THERMOMETER_ERROR_AMBIENT_TEMPERATURE_LOW 3
#define THERMOMETER_ERROR_HARDWARE 4
#define THERMOMETER_ERROR_LOW_VOLTAGE 5


#define THERMOMETER_SUCCESS_UNIT 0xff
//#define THERMOMETER_SUCCESS_HISTORY 0xfe
#define THERMOMETER_SUCCESS_VERSION 0xfd
#define THERMOMETER_SUCCESS_SHUTDOWN 0xfc


#endif /* LifevitSDKConstants_h */
