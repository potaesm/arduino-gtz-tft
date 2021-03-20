#ifndef GtzTft_h
#define GtzTft_h
#include "Arduino.h"
#include "TFT_eSPI.h"

TFT_eSPI GtzTft = TFT_eSPI();

// Custom Screen
unsigned long printText(String message)
{
  GtzTft.fillScreen(TFT_WHITE);
  GtzTft.setTextColor(TFT_WHITE);
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
  GtzTft.fillScreen(TFT_WHITE);
  GtzTft.setTextColor(TFT_WHITE);
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
  GtzTft.fillScreen(TFT_WHITE);
  GtzTft.setTextColor(TFT_WHITE);
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
  GtzTft.fillScreen(TFT_WHITE);
  GtzTft.setTextColor(TFT_WHITE);
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
  GtzTft.fillScreen(TFT_WHITE);
  GtzTft.setTextColor(TFT_WHITE);
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
  GtzTft.fillScreen(TFT_WHITE);
  GtzTft.setTextColor(TFT_WHITE);
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