#ifndef CONFIG_H
#define CONFIG_H

/*************************************************
 *               PROJECT INFO
 *************************************************/

#define PROJECT_NAME        "BLE Workforce Tracking"
#define FIRMWARE_VERSION    "1.0.0"

/*************************************************
 *               GATEWAY SETTINGS
 *************************************************/

// Change ONLY this for Gateway 2 and Gateway 3

#define GATEWAY_ID          "G1"

/*************************************************
 *               BADGE SETTINGS
 *************************************************/

// Number of supported badges

#define MAX_BADGES          5

// Badge names

const String BADGE_NAMES[MAX_BADGES] =
{
  "Employee_001",
  "Employee_002",
  "Employee_003",
  "Employee_004",
  "Employee_005"
};

/*************************************************
 *               WIFI SETTINGS
 *************************************************/

const char* WIFI_SSID     = "Adii";
const char* WIFI_PASSWORD = "12345678";

/*************************************************
 *               MQTT SETTINGS
 *************************************************/

const char* MQTT_SERVER = "broker.hivemq.com";

const uint16_t MQTT_PORT = 1883;

const char* MQTT_TOPIC = "employee_tracking/rssi";

/*************************************************
 *               BLE SETTINGS
 *************************************************/

// Scan duration

#define BLE_SCAN_TIME           1

// Active scanning

#define BLE_ACTIVE_SCAN         true

// BLE Scan Interval

#define BLE_SCAN_INTERVAL       100

// BLE Scan Window

#define BLE_SCAN_WINDOW         99

/*************************************************
 *               RSSI FILTER
 *************************************************/

// Number of samples for Median

#define MEDIAN_WINDOW           5

// EMA alpha

#define EMA_ALPHA               0.30

// Ignore very weak packets

#define RSSI_THRESHOLD         -82

// Ignore tiny fluctuations

#define RSSI_DEADBAND           2

/*************************************************
 *               MQTT PUBLISH
 *************************************************/

// Publish every 1 second minimum

#define PUBLISH_INTERVAL        1000

// Force publish every 5 seconds

#define FORCE_PUBLISH_INTERVAL  5000

/*************************************************
 *               SERIAL DEBUG
 *************************************************/

#define DEBUG_WIFI             true
#define DEBUG_BLE              true
#define DEBUG_FILTER           true
#define DEBUG_MQTT             true

/*************************************************
 *               CALIBRATION MODE
 *************************************************/

// true = Print Raw / Median / EMA

// false = Production mode

#define CALIBRATION_MODE       true

/*************************************************
 *               SIGNAL QUALITY
 *************************************************/

#define RSSI_EXCELLENT        -60
#define RSSI_GOOD             -70
#define RSSI_FAIR             -80
#define RSSI_WEAK             -90

#endif
