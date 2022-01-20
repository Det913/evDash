#pragma once

#include <BLEDevice.h>

#define APP_VERSION "v2.6.2"
#define APP_RELEASE_DATE "2021-12-27"

// TFT COLORS FOR TTGO

#define TFT_BLACK 0x0000     /*   0,   0,   0 */
#define TFT_NAVY 0x000F      /*   0,   0, 128 */
#define TFT_DARKGREEN 0x03E0 /*   0, 128,   0 */
#define TFT_DARKCYAN 0x03EF  /*   0, 128, 128 */
#define TFT_MAROON 0x7800    /* 128,   0,   0 */
#define TFT_PURPLE 0x780F    /* 128,   0, 128 */
#define TFT_OLIVE 0x7BE0     /* 128, 128,   0 */

#ifdef BOARD_TTGO_T4
#define TFT_LIGHTGREY 0xD69A /* 211, 211, 211 */
#endif                       // BOARD_TTGO_T4

#define TFT_DARKGREY 0x7BEF                 /* 128, 128, 128 */
#define TFT_BLUE 0x001F                     /*   0,   0, 255 */
#define TFT_GREEN 0x07E0                    /*   0, 255,   0 */
#define TFT_CYAN 0x07FF                     /*   0, 255, 255 */
#define TFT_RED 0xF800                      /* 255,   0,   0 */
#define TFT_MAGENTA 0xF81F                  /* 255,   0, 255 */
#define TFT_YELLOW 0xFFE0                   /* 255, 255,   0 */
#define TFT_WHITE 0xFFFF                    /* 255, 255, 255 */
#define TFT_ORANGE 0xFDA0                   /* 255, 180,   0 */
#define TFT_GREENYELLOW 0xB7E0              /* 180, 255,   0 */
#define TFT_PINK 0xFC9F /* 255, 192, 203 */ // Lighter pink, was 0xFC9F
#define TFT_BROWN 0x9A60                    /* 150,  75,   0 */
#define TFT_GOLD 0xFEA0                     /* 255, 215,   0 */
#define TFT_SILVER 0xC618                   /* 192, 192, 192 */
#define TFT_SKYBLUE 0x867D                  /* 135, 206, 235 */
#define TFT_VIOLET 0x915C                   /* 180,  46, 226 */

#define TFT_DEFAULT_BK 0x0000 // 0x38E0
#define TFT_TEMP 0x0000       // NAVY
#define TFT_GREENYELLOW 0xB7E0
#define TFT_DARKRED 0x3800    /* 128,   0,   0 */
#define TFT_DARKRED2 0x1800   /* 128,   0,   0 */
#define TFT_DARKGREEN2 0x01E0 /* 128,   0,   0 */

// COLDGATE COLORS
#define TFT_GRAPH_COLDGATE0_5 0x4208
#define TFT_GRAPH_COLDGATE5_14 0x6000
#define TFT_GRAPH_COLDGATE15_24 0x0008
#define TFT_GRAPH_OPTIMAL25 0x0200
#define TFT_GRAPH_RAPIDGATE35 0x8300

// SIM800L
#define SIM800L_SND_TIMEOUT 4  // Send data timeout in seconds
#define SIM800L_RCV_TIMEOUT 5  // Receive data timeout in seconds
#define SIM800L_INT_BUFFER 768 // Internal buffer
#define SIM800L_RCV_BUFFER 128 // Receive buffer

// SLEEP MODE
#define SLEEP_MODE_OFF 0
#define SLEEP_MODE_SCREEN_ONLY 1
#define SLEEP_MODE_DEEP_SLEEP 2
#define SLEEP_MODE_SHUTDOWN 3

#define ABRP_API_KEY "b8992aa2-cec6-43a9-8561-32499cf98ceb"

typedef enum
{
  // Top level menu
  MENU_NO_MENU = -1,
  MENU_TOP_LEVEL = 0,
  MENU_VEHICLE_TYPE = 1,
  MENU_ADAPTER_BLE_SELECT = 2,
  MENU_OTHERS,
  MENU_UNITS,
  MENU_ADAPTER_TYPE,
  MENU_FACTORY_RESET = 8,
  MENU_SAVE_SETTINGS,
  MENU_APP_VERSION,
  MENU_MEMORY_USAGE,
  MENU_SHUTDOWN,
  MENU_CAR_COMMANDS,
  //
  VEHICLE_TYPE_TOP = 100,
  VEHICLE_TYPE_ENIRO_2020_64,
  VEHICLE_TYPE_ENIRO_2020_39,
  VEHICLE_TYPE_ESOUL_2020_64,
  VEHICLE_TYPE_IONIQ_2018_28,
  VEHICLE_TYPE_KONA_2020_64,
  VEHICLE_TYPE_KONA_2020_39,
  VEHICLE_TYPE_HYUNDAI_IONIQ5_58,
  VEHICLE_TYPE_HYUNDAI_IONIQ5_72,
  VEHICLE_TYPE_HYUNDAI_IONIQ5_77,
  VEHICLE_TYPE_VW_ID3_2021_45,
  VEHICLE_TYPE_VW_ID3_2021_58,
  VEHICLE_TYPE_VW_ID3_2021_77,
  VEHICLE_TYPE_ZOE_22_DEV,
  VEHICLE_TYPE_BMWI3_2014_22,
  VEHICLE_TYPE_PEUGEOT_E208,
  VEHICLE_TYPE_DEBUG_OBD_KIA,

  // menu others
  MENU_OTHER_TOP = 300,
  MENU_WIFI,
  MENU_NTP = 303,
  MENU_SDCARD,
  MENU_SCREEN_ROTATION,
  MENU_DEFAULT_SCREEN,
  MENU_SCREEN_BRIGHTNESS,
  MENU_PREDRAWN_GRAPHS,
  MENU_REMOTE_UPLOAD,
  MENU_HEADLIGHTS_REMINDER,
  MENU_SLEEP_MODE,
  MENU_GPS,
  MENU_SERIAL_CONSOLE,
  MENU_DEBUG_LEVEL,
  MENU_VOLTMETER,
  MENU_TIMEZONE,
  MENU_DAYLIGHT_SAVING,
  MENU_SPEED_CORRECTION,
  MENU_RHD,
  MENU_CURRENT_TIME,

  // menu unit
  MENU_UNIT_TOP = 400,
  MENU_DISTANCE_UNIT,
  MENU_TEMPERATURE_UNIT,
  MENU_PRESSURE_UNIT,

  // MENU_ADAPTER_TYPE
  MENU_ADAPTER_TYPE_TOP = 500,
  MENU_ADAPTER_BLE4,
  MENU_ADAPTER_CAN,
  MENU_ADAPTER_BT3,
  MENU_ADAPTER_THREADING,
  MENU_ADAPTER_LOAD_TEST_DATA,

  // menu wifi
  MENU_WIFI_TOP = 3010,
  MENU_WIFI_ENABLED,
  MENU_WIFI_SSID,
  MENU_WIFI_PASSWORD,
  MENU_WIFI_SSID2,
  MENU_WIFI_PASSWORD2,
  MENU_WIFI_NTP,
  MENU_WIFI_ACTIVE,
  MENU_WIFI_IPADDR,

  // menu sdcard
  MENU_SDCARD_TOP = 3040,
  MENU_SDCARD_ENABLED,
  MENU_SDCARD_AUTOSTARTLOG,
  MENU_SDCARD_MOUNT_STATUS,
  MENU_SDCARD_REC,
  MENU_SDCARD_SETTINGS_SAVE,
  MENU_SDCARD_SETTINGS_RESTORE,
  MENU_SDCARD_INTERVAL,

  // menu default screen
  DEFAULT_SCREEN_TOP = 3060,
  DEFAULT_SCREEN_AUTOMODE,
  DEFAULT_SCREEN_BASIC_INFO,
  DEFAULT_SCREEN_SPEED,
  DEFAULT_SCREEN_BATT_CELL,
  DEFAULT_SCREEN_CHG_GRAPH,
  DEFAULT_SCREEN_HUD,

  // menu remote upload
  MENU_REMOTE_UPLOAD_TOP = 3090,
  MENU_REMOTE_UPLOAD_UART,
  MENU_REMOTE_UPLOAD_TYPE,
  MENU_REMOTE_UPLOAD_API_INTERVAL,
  MENU_REMOTE_UPLOAD_ABRP_INTERVAL,

  // menu sleep
  MENU_SLEEP_TOP = 3110,
  MENU_SLEEP_MODE_MODE,
  MENU_SLEEP_MODE_WAKEINTERVAL,
  MENU_SLEEP_MODE_SHUTDOWNHRS,

  // menu voltmeter
  MENU_VOLTMETER_TOP = 3150,
  MENU_VOLTMETER_ENABLED,
  MENU_VOLTMETER_SLEEP,
  MENU_VOLTMETER_INFO,
  MENU_VOLTMETER_SLEEPVOL,
  MENU_VOLTMETER_WAKEUPVOL,
  MENU_VOLTMETER_CUTOFFVOL,

  // distance unit menu
  DISTANCE_UNIT_TOP = 4010,
  DISTANCE_UNIT_KM,
  DISTANCE_UNIT_MI,

  // temperature unit menu
  TEMPERATURE_UNIT_TOP = 4020,
  TEMPERATURE_UNIT_CEL,
  TEMPERATURE_UNIT_FAR,

  // presure unit menu
  PRESURE_UNIT_TOP = 4030,
  PRESURE_UNIT_BAR,
  PRESURE_UNIT_PSI,

  // BLE unit menu
  LIST_OF_BLE_DEV = 9999,
  LIST_OF_BLE_DEV_TOP,
  LIST_OF_BLE_1,
  LIST_OF_BLE_2,
  LIST_OF_BLE_3,
  LIST_OF_BLE_4,
  LIST_OF_BLE_5,
  LIST_OF_BLE_6,
  LIST_OF_BLE_7,
  LIST_OF_BLE_8,
  LIST_OF_BLE_9,
  LIST_OF_BLE_10,

  // car commands menu
  MENU_CAR_COMMANDS_TOP = 12000,

  // menu last (no menu)
  MENU_LAST
} MENU_ID;

// MENU ITEM
typedef struct
{
  MENU_ID id;
  MENU_ID parentId;
  MENU_ID targetParentId;
  char title[50];
  char obdMacAddress[20];
  char serviceUUID[40];
} MENU_ITEM;
