#ifndef GtzTft_h
#define GtzTft_h
#include "Arduino.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

Adafruit_ILI9341 GtzTft = Adafruit_ILI9341(tftChipSelectPin, tftDataCommandPin, tftResetPin);

void gtzTftDebug()
{
  uint8_t x = GtzTft.readcommand8(ILI9341_RDMODE);
  Serial.print("Display Power Mode: 0x");
  Serial.println(x, HEX);
  x = GtzTft.readcommand8(ILI9341_RDMADCTL);
  Serial.print("MADCTL Mode: 0x");
  Serial.println(x, HEX);
  x = GtzTft.readcommand8(ILI9341_RDPIXFMT);
  Serial.print("Pixel Format: 0x");
  Serial.println(x, HEX);
  x = GtzTft.readcommand8(ILI9341_RDIMGFMT);
  Serial.print("Image Format: 0x");
  Serial.println(x, HEX);
  x = GtzTft.readcommand8(ILI9341_RDSELFDIAG);
  Serial.print("Self Diagnostic: 0x");
  Serial.println(x, HEX);
}

// Custom Screen
unsigned long printText(String message)
{
  GtzTft.fillScreen(ILI9341_WHITE);
  GtzTft.setTextColor(ILI9341_WHITE);
  GtzTft.setTextSize(1);
  unsigned long start = micros();
  GtzTft.setCursor(0, 0);
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.setTextColor(0x00BD);
  GtzTft.setTextSize(4);
  GtzTft.print(" ");
  GtzTft.print(message);
  return micros() - start;
}

unsigned long printWelcome()
{
  GtzTft.fillScreen(ILI9341_WHITE);
  GtzTft.setTextColor(ILI9341_WHITE);
  GtzTft.setTextSize(1);
  unsigned long start = micros();
  GtzTft.setCursor(0, 0);
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.setTextColor(0x7BEF);
  GtzTft.setTextSize(3);
  GtzTft.print("    ");
  GtzTft.println("Welcome to");
  GtzTft.println();
  GtzTft.setTextColor(0x558B);
  GtzTft.setTextSize(4);
  GtzTft.print(" ");
  GtzTft.println("Guitar Zeed");
  GtzTft.setTextColor(0xAE92);
  GtzTft.setTextSize(3);
  GtzTft.print(" ");
  GtzTft.println("Musical School");
  GtzTft.println();
  GtzTft.setTextColor(0x0000);
  GtzTft.setTextSize(2);
  GtzTft.print(" ");
  GtzTft.print("> Please tap your card. <");
  return micros() - start;
}

unsigned long printProcessComplete()
{
  GtzTft.fillScreen(ILI9341_WHITE);
  GtzTft.setTextColor(ILI9341_WHITE);
  GtzTft.setTextSize(1);
  unsigned long start = micros();
  GtzTft.setCursor(0, 0);
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.setTextColor(0x7BEF);
  GtzTft.setTextSize(3);
  GtzTft.print(" ");
  GtzTft.println("Your process is");
  GtzTft.println();
  GtzTft.setTextColor(0x558B);
  GtzTft.setTextSize(4);
  GtzTft.print(" ");
  GtzTft.print("Complete");
  return micros() - start;
}

unsigned long printProcessError()
{
  GtzTft.fillScreen(ILI9341_WHITE);
  GtzTft.setTextColor(ILI9341_WHITE);
  GtzTft.setTextSize(1);
  unsigned long start = micros();
  GtzTft.setCursor(0, 0);
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.setTextColor(0x7BEF);
  GtzTft.setTextSize(3);
  GtzTft.print(" ");
  GtzTft.println("Your process is");
  GtzTft.println();
  GtzTft.setTextColor(0x0000);
  GtzTft.setTextSize(4);
  GtzTft.print(" ");
  GtzTft.print("Error!");
  return micros() - start;
}

unsigned long printThankYou()
{
  GtzTft.fillScreen(ILI9341_WHITE);
  GtzTft.setTextColor(ILI9341_WHITE);
  GtzTft.setTextSize(1);
  unsigned long start = micros();
  GtzTft.setCursor(0, 0);
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.println();
  GtzTft.setTextColor(0x00BD);
  GtzTft.setTextSize(4);
  GtzTft.print(" ");
  GtzTft.print("Thank you");
  return micros() - start;
}

unsigned long printStudent(String studentName, float currentHour, float previousHour, float oldestHour, String studentStatus, String operation, String operationMessage, String subCode)
{
  GtzTft.fillScreen(ILI9341_WHITE);
  GtzTft.setTextColor(ILI9341_WHITE);
  GtzTft.setTextSize(1);
  unsigned long start = micros();
  GtzTft.setCursor(0, 0);
  GtzTft.println();
  GtzTft.setTextColor(0x0000);
  GtzTft.setTextSize(3);
  GtzTft.print(" ");
  GtzTft.println(studentName);
  GtzTft.println();
  GtzTft.setTextColor(0x7BEF);
  GtzTft.setTextSize(2);
  GtzTft.print(" ");
  GtzTft.print("Current       ");
  GtzTft.print(currentHour);
  GtzTft.println("  hr.");
  GtzTft.println();
  GtzTft.print(" ");
  GtzTft.print("Last month    ");
  GtzTft.setTextColor((previousHour > 0) ? 0xFDE7 : 0x7BEF);
  GtzTft.print(previousHour);
  GtzTft.setTextColor(0x7BEF);
  GtzTft.println("  hr.");
  GtzTft.println();
  GtzTft.print(" ");
  GtzTft.print("2 months ago  ");
  GtzTft.setTextColor((oldestHour > 0) ? 0xF803 : 0x7BEF);
  GtzTft.print(oldestHour);
  GtzTft.setTextColor(0x7BEF);
  GtzTft.println("  hr.");
  GtzTft.println();
  GtzTft.print(" ");
  GtzTft.print("Status: ");
  GtzTft.setTextColor((studentStatus == "Normal") ? 0x00BD : 0xF801);
  GtzTft.println(studentStatus);
  GtzTft.println();
  GtzTft.setTextColor(0x0000);
  GtzTft.print(" ");
  GtzTft.print(operation);
  GtzTft.print(" ");
  GtzTft.setTextColor((operationMessage == "Add MC") ? 0x6993 : 0x059D);
  GtzTft.print(operationMessage);
  GtzTft.setTextColor(0x0000);
  GtzTft.print(" ");
  GtzTft.print(subCode);
  return micros() - start;
}

#endif