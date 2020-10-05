#include <pgmspace.h>

#ifndef SECRETS
#define SECRETS

/*
 #########################################################################################
 # MUDAR AQUI
 #########################################################################################
*/
#define WIFI_SSID "wifiname"
#define WIFI_PASSWORD "wifipassword"

#define DEVICE_ID "a6aef30e-2145-41af-8100-79259bad0b59"

// Copy contents from CA certificate here ▼
static const char cacert[] PROGMEM = \
"-----BEGIN CERTIFICATE-----\n" \

"-----END CERTIFICATE-----\n";

// Copy contents from cert.pem here ▼
static const char client_cert[] PROGMEM = \
"-----BEGIN CERTIFICATE-----\n" \

"-----END CERTIFICATE-----\n";

// Copy contents from  key.pem here ▼
static const char privkey[] PROGMEM = \
"-----BEGIN PRIVATE KEY-----\n" \

"-----END PRIVATE KEY-----\n";

/*
#########################################################################################
# ATÉ AQUI
#########################################################################################
*/

// NTP related
#define UTC_TIME_ZONE_BRAZIL_HOURS -3
#define UTC_TIME_ZONE_BRAZIL_SECONDS UTC_TIME_ZONE_BRAZIL_HOURS * 3600
//#define USE_SUMMER_TIME_DST  //uncomment to use DST
#define DST_HOURS 0
#define DST_SECONDS DST_HOURS * 3600
#define CURRENT_TIME_APROXIMATION_AS_EPOCH_SECONDS 1510592825
#define NTP_SERVER_0 "pool.ntp.org"
#define NTP_SERVER_1 "time.nist.gov"

// MQTT related
#define MQTT_BROKER "logicalis-eugeniostg-iothub.azure-devices.net"
#define MQTT_PORT 8883
#define MQTT_USER "logicalis-eugeniostg-iothub.azure-devices.net/" DEVICE_ID "/api-version=2019-03-30"

#define MQTT_SUB_CLOUD_TO_DEVICE_TOPIC "devices/" DEVICE_ID "/messages/devicebound/#"
#define MQTT_SUB_INVOKE_BASE_TOPIC "$iothub/methods/POST/"
#define MQTT_SUB_INVOKE_TOPIC "$iothub/methods/POST/#"

#define MQTT_PUB_INVOKE_REPLY_TOPIC "$iothub/methods/res/{status_code}/?$rid={rid}"
#define MQTT_PUB_DEVICE_TO_CLOUD_TOPIC "devices/" DEVICE_ID "/messages/events/"

// #define USE_ARDUINO_JSON_LIB

#endif
