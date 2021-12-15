#ifndef WiFiServer_H
#define WiFiServer_H

#include <Arduino.h>
#include <ESP8266WiFi.h>

//
// If a requested paramter is not found, this is what is returned
//
#define PARAMNOTFOUND "XxXxXxX"

void wifiServerStart();
bool serverRequestReceived();
void serverSendPage(String[], String[], int, String);
void serverSendPage(String[], String[], int);
void serverSendPage(String);
void serverSendPage();
void serverSendRedirect (String);
String uriRequested ();
String pageRequested ();
String giveURLParam (String);
bool pageSettings (String);

#endif