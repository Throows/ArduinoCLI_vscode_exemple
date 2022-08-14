/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
//                      Filename : ArduinoCLI_vscode_exemple                           //
//                          Author : Romain BERTHOULE                                  //
//                              Date : 08/14/22                                        //
//        Desc: This is an exemple of the usage of vscode && Arduino CLI               //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////

#include <Arduino.h>
#include "src/Application.h"

const uint8_t LED_PIN = 13;
uint16_t counter = 0;

Application app;

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    app.writeText("Initialisation Done :");
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
    counter++;
    app.writeText("Counter : ");
    app.writeText(String(counter).c_str());
}