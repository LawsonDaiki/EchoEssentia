#include <pgmspace.h>

#ifndef SECRETS
#define SECRETS

/*
 #########################################################################################
 # MUDAR AQUI
 #########################################################################################
*/
#define WIFI_SSID "Choco"
#define WIFI_PASSWORD "chocopan"

#define DEVICE_ID "a6aef30e-2145-41af-8100-79259bad0b59"

// Copy contents from CA certificate here ▼
static const char cacert[] PROGMEM = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDdzCCAl+gAwIBAgIEAgAAuTANBgkqhkiG9w0BAQUFADBaMQswCQYDVQQGEwJJ\n" \
"RTESMBAGA1UEChMJQmFsdGltb3JlMRMwEQYDVQQLEwpDeWJlclRydXN0MSIwIAYD\n" \
"VQQDExlCYWx0aW1vcmUgQ3liZXJUcnVzdCBSb290MB4XDTAwMDUxMjE4NDYwMFoX\n" \
"DTI1MDUxMjIzNTkwMFowWjELMAkGA1UEBhMCSUUxEjAQBgNVBAoTCUJhbHRpbW9y\n" \
"ZTETMBEGA1UECxMKQ3liZXJUcnVzdDEiMCAGA1UEAxMZQmFsdGltb3JlIEN5YmVy\n" \
"VHJ1c3QgUm9vdDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKMEuyKr\n" \
"mD1X6CZymrV51Cni4eiVgLGw41uOKymaZN+hXe2wCQVt2yguzmKiYv60iNoS6zjr\n" \
"IZ3AQSsBUnuId9Mcj8e6uYi1agnnc+gRQKfRzMpijS3ljwumUNKoUMMo6vWrJYeK\n" \
"mpYcqWe4PwzV9/lSEy/CG9VwcPCPwBLKBsua4dnKM3p31vjsufFoREJIE9LAwqSu\n" \
"XmD+tqYF/LTdB1kC1FkYmGP1pWPgkAx9XbIGevOF6uvUA65ehD5f/xXtabz5OTZy\n" \
"dc93Uk3zyZAsuT3lySNTPx8kmCFcB5kpvcY67Oduhjprl3RjM71oGDHweI12v/ye\n" \
"jl0qhqdNkNwnGjkCAwEAAaNFMEMwHQYDVR0OBBYEFOWdWTCCR1jMrPoIVDaGezq1\n" \
"BE3wMBIGA1UdEwEB/wQIMAYBAf8CAQMwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3\n" \
"DQEBBQUAA4IBAQCFDF2O5G9RaEIFoN27TyclhAO992T9Ldcw46QQF+vaKSm2eT92\n" \
"9hkTI7gQCvlYpNRhcL0EYWoSihfVCr3FvDB81ukMJY2GQE/szKN+OMY3EU/t3Wgx\n" \
"jkzSswF07r51XgdIGn9w/xZchMB5hbgF/X++ZRGjD8ACtPhSNzkE1akxehi/oCr0\n" \
"Epn3o0WC4zxe9Z2etciefC7IpJ5OCBRLbf1wbWsaY71k5h+3zvDyny67G7fyUIhz\n" \
"ksLi4xaNmjICq44Y3ekQEe5+NauQrz4wlHrQMz2nZQ/1/I6eYs9HRCwBXbsdtTLS\n" \
"R9I4LtD+gdwyah617jzV/OeBHRnDJELqYzmp\n" \
"-----END CERTIFICATE-----\n";

// Copy contents from cert.pem here ▼
static const char client_cert[] PROGMEM = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDCTCCAfGgAwIBAgIUYijEbg4ZW4Ur0Kg8T7hEptKNCP8wDQYJKoZIhvcNAQEL\n" \
"BQAwFDESMBAGA1UEAwwJbG9jYWxob3N0MB4XDTIwMTAwMjE3NTQ0N1oXDTIxMTAw\n" \
"MjE3NTQ0N1owFDESMBAGA1UEAwwJbG9jYWxob3N0MIIBIjANBgkqhkiG9w0BAQEF\n" \
"AAOCAQ8AMIIBCgKCAQEAyWbmOX7uYeMxMOZCaFMLyPBp/LRswG7mgZTFg+8/gqp1\n" \
"1sJBumZml6YdQeBwnLVaHTdI9YogtMQ4x3o5/ciEOxOYpkjYUHdE/uAZxP8liEcr\n" \
"xlqw0giuFCLqIA3ojtlay1bDOU8lagZP8lUVgakVwFsVNsR49iCZaAviXsRj3DUk\n" \
"LNB9KeJV0jaNhjmQJh0mA70LrXo0DAL6v1LA/jFyd/wYgbTCOlBvJ04hWzfpz6dv\n" \
"/j3Slbe9pbdYZHk5++nq1imTPMMzxJ8JoVaXe4kwlynwr0VXeAwPvCQWWPncoHbk\n" \
"CBnoH+FCr9EU6rw0lcL0TCj2ZFJZ0n6pmYcN62j0ywIDAQABo1MwUTAdBgNVHQ4E\n" \
"FgQU6rFUZlyeP6s3iaZ0jfSiU4z4cMkwHwYDVR0jBBgwFoAU6rFUZlyeP6s3iaZ0\n" \
"jfSiU4z4cMkwDwYDVR0TAQH/BAUwAwEB/zANBgkqhkiG9w0BAQsFAAOCAQEArYUn\n" \
"5/yLVUCnykwN9nuS/81aGlJclsCBgjE4BxGJNgwVbxck7fWxJgLxEqN5JiaODI0c\n" \
"Ch8YX1qANoNGdzZZ74P/kAUVh6+Z1hvBtwLfDQZBlOR58f8a0yRc9yUQP3ptsnH7\n" \
"v84OXOLUICHSx8TGz/F6r+zO+q5A9+vr+YftsZOts7pTSZKPVKK7h0NfAgPsrSWR\n" \
"ML28A/DCfTyCEU2+1tV/OXk37WLrcX5s/aB0zibSAJTfmTFvYNMc9PNy1nyj4bB5\n" \
"i2vglrIpVCJ7bjihzLhkHPDmuWQFrrd2NJK939sDdzea+NPAugD0vTf73U6MuHY8\n" \
"8Vnho1NEzMgYi8bCdQ==\n" \
"-----END CERTIFICATE-----\n";

// Copy contents from  key.pem here ▼
static const char privkey[] PROGMEM = \
"-----BEGIN PRIVATE KEY-----\n" \
"MIIEvgIBADANBgkqhkiG9w0BAQEFAASCBKgwggSkAgEAAoIBAQDJZuY5fu5h4zEw\n" \
"5kJoUwvI8Gn8tGzAbuaBlMWD7z+CqnXWwkG6ZmaXph1B4HCctVodN0j1iiC0xDjH\n" \
"ejn9yIQ7E5imSNhQd0T+4BnE/yWIRyvGWrDSCK4UIuogDeiO2VrLVsM5TyVqBk/y\n" \
"VRWBqRXAWxU2xHj2IJloC+JexGPcNSQs0H0p4lXSNo2GOZAmHSYDvQutejQMAvq/\n" \
"UsD+MXJ3/BiBtMI6UG8nTiFbN+nPp2/+PdKVt72lt1hkeTn76erWKZM8wzPEnwmh\n" \
"Vpd7iTCXKfCvRVd4DA+8JBZY+dygduQIGegf4UKv0RTqvDSVwvRMKPZkUlnSfqmZ\n" \
"hw3raPTLAgMBAAECggEAV/IxEmZVHjWhY2MJGJk7CjHBdnIrExTaXzdh0K0GpL5e\n" \
"2rrVDNpubkZBfGTPh/7BLQTZPS9l/Mm6qZC8BhArfcie3e3tV6XdYRbm6dkowIuj\n" \
"l+g+Ulkr+usMJZctOEO9nBF1Cm9/PP8opf91drspHmgnqVS+JWwy0PZvkUZc/OkI\n" \
"jHoKonWZIR2yQOyMKaLRE8u9/e6eMGBVxy84eBygtngTcvgc+oJhTOLMWouXd1XZ\n" \
"URIZhHyjv5bajgjwXiU/pVSWFOWlqOdLsFEE3zqJkB5gqHG5hOzLa2APaH8A77iX\n" \
"Q7yen3VUG86iWwLgnr5sF8dYy7XnHIWu7oXRnMnkAQKBgQD5FJEbeJN/VDb6Kt65\n" \
"EJdxweVSxrdgZymIfLQUqp3v21HGIJ1LMwhve/kr/ogaJzOg9w6JTj5lWEZdt4S3\n" \
"Lce55ptz6ppXajFobXMIJK69mB4IgO0qljSudM+uyXlSXHhRdbY0KXIHEqI61HfF\n" \
"tPR6Wle+yBLnW9xlceRehwqJywKBgQDO/z+xlq8vBw17gLi9TT5UyUTbuEsHUlmd\n" \
"as/EygoefCsi9Y3Cd/ISGngIAptcoSi3C85G4GdKfR1yEjQy4IvyHahkL/j/bqd7\n" \
"viSZsiM9bNxq8BS1lIzTZxvF5NsJexo5FDTX+eff6c2GN8ihvsTTYQyy+eHaUOCH\n" \
"/rr2N2nhAQKBgDcxQX4u17AtPwlsGnIzpPtGFcSj19p6wY9G4rh5ngmaNaKLc49I\n" \
"PaRGek4vVoVFDoGqfQQb3GOkjeMSWUwlzs34tZWX9J9OHqifKBAz4KyOWolT2DnJ\n" \
"kt7db2+xoTqI1vhl9vvT+zpp/JzAm9GpaUr7Xdoeh2HQzyODezEfB0zFAoGBAMun\n" \
"yCPSTDNprfMn1xqwh7Xle/DtJixi8jZ1o0tLOJ97rPktPLbrSehT0GqZHgAJs0Q8\n" \
"wktrd1SLOlBD5sVztVyVn1pK9KFjXjbaAaqR4CgMFeTEpqtsJw3LMUEHhBWU31zv\n" \
"K3qermrX3lTCR4wTZBVQM61XOsWPswk6LvoV1P8BAoGBAOJtMAnhp7oSiZqGVhV5\n" \
"K1GtcHfLUjW5fv8j3yWgOwYjMXufOAu0xU9zcPd4q+C9APLaIadxO/0Bg22jLFBr\n" \
"6Eu0Az/IskdSREC5Bs5zNlzPFbwyDVakyXAFJvokONmOp9z0QcipSxYVWN3BeKji\n" \
"ar2sW9ym25APTkgSEC1bFqY+\n" \
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