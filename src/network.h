#ifndef __NETWORK_H
#define __NETWORK_H

#define HSTNM "ssw32-littlefs"
#define MYFS LITTLEFS

#include <Arduino.h>
#include <FS.h>
#include <LittleFS.h> 

#if defined(ESP8266)
  #include <ESP8266WiFi.h>
  #include <ESPAsyncTCP.h>
  #include <ESPAsyncWebServer.h>
#elif defined(ESP32)
  #include <WiFi.h>
  #include <AsyncTCP.h>
  #include <ESPAsyncWebServer.h>
#endif

#include <ESPConnect.h>
#include "config.h"

extern AsyncWebServer server;
extern DNSServer dns_server;
extern boolean server_started;

struct control_callbacks_t {
  void* startTimer();
  void* stopTimer();
  void* resetTimer();
  void* setBrightness(uint8_t brightness);
  void* setMode(uint8_t mode);
};

void initWifi();
void enableWifi(boolean enable);
void resetWifi();
IPAddress getIP();

void startWifiServer();
void stopWifiServer();
void processServer();

#endif // __NETWORK_H
