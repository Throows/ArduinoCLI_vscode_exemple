#include "Application.h"
#include <Arduino.h>

Application::Application(/* args */)
{
}

Application::~Application()
{
}

void Application::writeText(const char* text)
{
    Serial.println(text);
}