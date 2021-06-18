#ifndef SETTINGS_H
#define SETTINGS_H

// ########## Tuner Settings ##########


// If Use "Board -> ESP32 Arduino -> M5Stick-C"
#define USE_M5STICK_C_PLUS false

// Measuring LED
#define USE_LED true

// Measuring Beep
#define USE_BEEP true

// Auto Power Off
#define USE_AUTO_POWER_OFF true
#define AUTO_POWER_OFF_TIME 10 * 60 * 1000 // ms

// Battery Percentage
#define USE_BATTERY_PERCENTAGE false

// LCD Flip
#define USE_LCD_FLIP false



// Loop Count = 960
// StartHz, StepHz, MeasureStep, Pass, PassStepHzDiv
const uint32_t param[][5] = {
  {1000, 1000, 10, 1, 10},
  {1000, 1000, 10, 2, 10},
  {1000, 1000, 10, 3, 10},
  {1000, 1000, 10, 4, 10},
  {961000, 1000, 10, 1, 10},
  {961000, 1000, 10, 2, 10},
  {961000, 1000, 10, 3, 10},
  {961000, 1000, 10, 4, 10},
  {1921000, 1000, 10, 1, 10},
  {1921000, 1000, 10, 2, 10},
  {1921000, 1000, 10, 3, 10},
  {1921000, 1000, 10, 4, 10},
  {2881000, 1000, 10, 1, 10},
  {2881000, 1000, 10, 2, 10},
  {2881000, 1000, 10, 3, 10},
  {2881000, 1000, 10, 4, 10},
  {3841000, 1000, 10, 1, 10},
  {3841000, 1000, 10, 2, 10},
  {3841000, 1000, 10, 3, 10},
  {3841000, 1000, 10, 4, 10},
  {4801000, 1000, 10, 1, 10},
  {4801000, 1000, 10, 2, 10},
  {4801000, 1000, 10, 3, 10},
  {4801000, 1000, 10, 4, 10},
  {5761000, 1000, 10, 1, 10},
  {5761000, 1000, 10, 2, 10},
  {5761000, 1000, 10, 3, 10},
  {5761000, 1000, 10, 4, 10},
  {6721000, 1000, 10, 1, 10},
  {6721000, 1000, 10, 2, 10},
  {6721000, 1000, 10, 3, 10},
  {6721000, 1000, 10, 4, 10},
  {7681000, 1000, 10, 1, 10},
  {7681000, 1000, 10, 2, 10},
  {7681000, 1000, 10, 3, 10},
  {7681000, 1000, 10, 4, 10},
  {8641000, 1000, 10, 1, 10},
  {8641000, 1000, 10, 2, 10},
  {8641000, 1000, 10, 3, 10},
  {8641000, 1000, 10, 4, 10},
  {9601000, 1000, 10, 1, 10},
  {9601000, 1000, 10, 2, 10},
  {9601000, 1000, 10, 3, 10},
  {9601000, 1000, 10, 4, 10},
};


#define FW_VERSION 0.1





// Use Board -> ESP32 Arduino -> M5Stick-C
// Use Board -> ESP32 Arduino -> M5Stack-Core-ESP32
// Use Board -> ESP32 Arduino -> M5Stack-Core2

// DO NOT USE Board -> M5Stack Arduino ->
// function analogReadMilliVolts()



// https://docs.m5stack.com/en/arduino/arduino_development



// For Debug
#define DEBUG_SERIAL false


#define LCD_BG_COLOR BLACK
#define LCD_HEADER_COLOR BLUE
#define LCD_HEADER_TEXT_COLOR WHITE
#define LCD_HEADER_MEASURE_COLOR RED
#define LCD_HEADER_MEASURE_TEXT_COLOR WHITE
#define LCD_HEADER_BATT_COLOR YELLOW
#define LCD_HEADER_BATT_TEXT_COLOR BLACK
#define LCD_MAIN_COLOR BLACK
#define LCD_MAIN_TEXT_COLOR WHITE
#define LCD_MAIN_GRAPH_COLOR WHITE
#define LCD_MAIN_GRAPH_LINE_COLOR BLUE
#define LCD_MAIN_GRAPH_MAX_LINE_COLOR RED
#define LCD_FOOTER_COLOR RED
#define LCD_FOOTER_TEXT_COLOR WHITE
#define LCD_RESULT_COLOR WHITE
#define LCD_RESULT_MAIN_TEXT_COLOR BLACK
#define LCD_RESULT_SUB_TEXT_COLOR BLACK





//#define TONE_PIN_CHANNEL 0 -> C Plus Beep PWM
#define LEDC_CHANNEL 1 //channel max 15
#define PIN_PWM_OUT 26
#define PIN_ADC_IN 36
#define PIN_LED 10


// Board Settings
#if defined(ARDUINO_M5Stick_C)
  #if USE_M5STICK_C_PLUS
    #include <M5StickCPlus.h>
    #define ARDUINO_M5Stick_C_Plus
  #else
    #include <M5StickC.h>
  #endif
#elif defined(ARDUINO_M5Stick_C_Plus)
  #include <M5StickCPlus.h>
#elif defined(ARDUINO_M5Stack_Core_ESP32)
  #include <M5Stack.h>
#elif defined(ARDUINO_M5STACK_Core2)
  #include <M5Core2.h>
#else
  #error "Unknown board"
#endif




#endif
