#include "WIFI.h"
#include "Server.h"
#include "MQTT.h"

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  WIFI_init(false);
  server_init();
  MQTT_init();
  mqtt_cli.publish("esp8266/state", ("hello from" + id().c_str()));
  mqtt_cli.subscribe("esp8266/cmd");
}

void loop()
{
  server.handleClient();
}