



// Settings
#include "settings.h"

#if defined(ARDUINO_M5Stick_C_Plus)
  #if USE_LCD_FLIP
    #define LCD_ROT 1
  #else
    #define LCD_ROT 3
  #endif
  #define LCD_WIDTH 240
  #define LCD_HEADER_OFFSET 0
  #define LCD_HEADER_HEIGHT 22
  #define LCD_HEADER_TEXT_FONT 2
  #define LCD_HEADER_TEXT_SIZE 1
  #define LCD_HEADER_TEXT_OFFSET 3
  #define LCD_HEADER_TEXT_LEFT_OFFSET 4
  #define LCD_HEADER_MEASURE_TEXT "!! MEASURING - DO NOT MOVE !!"
  #define LCD_HEADER_MEASURE_TEXT_LEFT_OFFSET 20
  #define LCD_HEADER_BATT_LEFT_OFFSET 155
  #define LCD_HEADER_BATT_TEXT_LEFT_OFFSET 10
  #define LCD_MAIN_OFFSET (LCD_HEADER_OFFSET + LCD_HEADER_HEIGHT)
  #define LCD_MAIN_HEIGHT 91
  #define LCD_MAIN_TEXT "HTLAB.NET\n          Tesla Coil Tuner"
  #define LCD_MAIN_TEXT_FONT 4
  #define LCD_MAIN_TEXT_SIZE 1
  #define LCD_MAIN_TEXT_OFFSET 23
  #define LCD_MAIN_TEXT_LEFT_OFFSET 10
  #define LCD_FOOTER_OFFSET (LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT)
  #define LCD_FOOTER_HEIGHT 22
  #define LCD_FOOTER_TEXT_FONT 2
  #define LCD_FOOTER_TEXT_SIZE 1
  #define LCD_FOOTER_TEXT_OFFSET 3
  #define LCD_FOOTER_TEXT_LEFT_OFFSET 12
  #define LCD_RESULT_OFFSET (LCD_HEADER_OFFSET + LCD_HEADER_HEIGHT) + 20
  #define LCD_RESULT_LEFT_OFFSET 30
  #define LCD_RESULT_WIDTH 180
  #define LCD_RESULT_HEIGHT 50
  #define LCD_RESULT_MAIN_TEXT_FONT 2
  #define LCD_RESULT_MAIN_TEXT_SIZE 2
  #define LCD_RESULT_MAIN_TEXT_OFFSET 1
  #define LCD_RESULT_MAIN_TEXT_LEFT_OFFSET 15
  #define LCD_RESULT_SUB_TEXT_FONT 2
  #define LCD_RESULT_SUB_TEXT_SIZE 1
  #define LCD_RESULT_SUB_TEXT_OFFSET 30
  #define LCD_RESULT_SUB_TEXT_LEFT_OFFSET 15
#elif defined(ARDUINO_M5Stick_C)
  #if USE_LCD_FLIP
    #define LCD_ROT 1
  #else
    #define LCD_ROT 3
  #endif
  #define LCD_WIDTH 160
  #define LCD_HEADER_OFFSET 0
  #define LCD_HEADER_HEIGHT 10
  #define LCD_HEADER_TEXT_FONT 1
  #define LCD_HEADER_TEXT_SIZE 1
  #define LCD_HEADER_TEXT_OFFSET 1
  #define LCD_HEADER_TEXT_LEFT_OFFSET 2
  #define LCD_HEADER_MEASURE_TEXT "!MEASURING - DO NOT MOVE!"
  #define LCD_HEADER_MEASURE_TEXT_LEFT_OFFSET 4
  #define LCD_HEADER_BATT_LEFT_OFFSET 100
  #define LCD_HEADER_BATT_TEXT_LEFT_OFFSET 4
  #define LCD_MAIN_OFFSET (LCD_HEADER_OFFSET + LCD_HEADER_HEIGHT)
  #define LCD_MAIN_HEIGHT 60
  #define LCD_MAIN_TEXT "HTLAB.NET\n        Coil Tuner"
  #define LCD_MAIN_TEXT_FONT 4
  #define LCD_MAIN_TEXT_SIZE 1
  #define LCD_MAIN_TEXT_OFFSET 7
  #define LCD_MAIN_TEXT_LEFT_OFFSET 4
  #define LCD_FOOTER_OFFSET (LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT)
  #define LCD_FOOTER_HEIGHT 10
  #define LCD_FOOTER_TEXT_FONT 1
  #define LCD_FOOTER_TEXT_SIZE 1
  #define LCD_FOOTER_TEXT_OFFSET 1
  #define LCD_FOOTER_TEXT_LEFT_OFFSET 2
  #define LCD_RESULT_OFFSET (LCD_HEADER_OFFSET + LCD_HEADER_HEIGHT) + 5
  #define LCD_RESULT_LEFT_OFFSET 0
  #define LCD_RESULT_WIDTH 160
  #define LCD_RESULT_HEIGHT 50
  #define LCD_RESULT_MAIN_TEXT_FONT 2
  #define LCD_RESULT_MAIN_TEXT_SIZE 2
  #define LCD_RESULT_MAIN_TEXT_OFFSET 1
  #define LCD_RESULT_MAIN_TEXT_LEFT_OFFSET 2
  #define LCD_RESULT_SUB_TEXT_FONT 2
  #define LCD_RESULT_SUB_TEXT_SIZE 1
  #define LCD_RESULT_SUB_TEXT_OFFSET 30
  #define LCD_RESULT_SUB_TEXT_LEFT_OFFSET 2
#elif defined(ARDUINO_M5Stack_Core_ESP32) || defined(ARDUINO_M5STACK_Core2)
  #if USE_LCD_FLIP
    #define LCD_ROT 3
  #else
    #define LCD_ROT 1
  #endif
  #define LCD_WIDTH 320
  #define LCD_HEADER_OFFSET 0
  #define LCD_HEADER_HEIGHT 20
  #define LCD_HEADER_TEXT_FONT 2
  #define LCD_HEADER_TEXT_SIZE 1
  #define LCD_HEADER_TEXT_OFFSET 2
  #define LCD_HEADER_TEXT_LEFT_OFFSET 10
  #define LCD_HEADER_MEASURE_TEXT "!!!!! MEASURING - DO NOT MOVE !!!!!"
  #define LCD_HEADER_MEASURE_TEXT_LEFT_OFFSET 50
  #define LCD_HEADER_BATT_LEFT_OFFSET 235
  #define LCD_HEADER_BATT_TEXT_LEFT_OFFSET 10
  #define LCD_MAIN_OFFSET (LCD_HEADER_OFFSET + LCD_HEADER_HEIGHT)
  #define LCD_MAIN_HEIGHT 200
  #define LCD_MAIN_TEXT "HTLAB.NET\n       Tesla Coil\n                  Tuner"
  #define LCD_MAIN_TEXT_FONT 4
  #define LCD_MAIN_TEXT_SIZE 2
  #define LCD_MAIN_TEXT_OFFSET 30
  #define LCD_MAIN_TEXT_LEFT_OFFSET 10
  #define LCD_FOOTER_OFFSET (LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT)
  #define LCD_FOOTER_HEIGHT 20
  #define LCD_FOOTER_TEXT_FONT 2
  #define LCD_FOOTER_TEXT_SIZE 1
  #define LCD_FOOTER_TEXT_OFFSET 2
  #define LCD_FOOTER_TEXT_LEFT_OFFSET 10
  #define LCD_RESULT_OFFSET (LCD_HEADER_OFFSET + LCD_HEADER_HEIGHT) + 50
  #define LCD_RESULT_LEFT_OFFSET 10
  #define LCD_RESULT_WIDTH 300
  #define LCD_RESULT_HEIGHT 90
  #define LCD_RESULT_MAIN_TEXT_FONT 4
  #define LCD_RESULT_MAIN_TEXT_SIZE 2
  #define LCD_RESULT_MAIN_TEXT_OFFSET 8
  #define LCD_RESULT_MAIN_TEXT_LEFT_OFFSET 5
  #define LCD_RESULT_SUB_TEXT_FONT 4
  #define LCD_RESULT_SUB_TEXT_SIZE 1
  #define LCD_RESULT_SUB_TEXT_OFFSET 58
  #define LCD_RESULT_SUB_TEXT_LEFT_OFFSET 5
#endif



uint16_t batt_status_now;
uint16_t batt_status_last;
float batt_voltage_now;
float batt_voltage_last;

const uint16_t loop_cnt = 960;
uint16_t result[loop_cnt];
uint32_t result_freq[loop_cnt];
bool executed = false;

uint8_t select_param = 0;
uint32_t param_start;
uint32_t param_step;
uint32_t param_max_step;
uint32_t param_mes_step;
uint8_t param_pass;
uint8_t param_div;

const uint8_t lcd_plot_y_divider = 3300 / LCD_MAIN_HEIGHT;

uint32_t last_time;



// https://github.com/espressif/arduino-esp32/pull/5003
static double ledcChangeFrequency(uint8_t chan, double freq, uint8_t bit_num) {
  return ledcSetup(chan, freq, bit_num);
}
// 



static void sound_startup() {
  #if defined(ARDUINO_M5Stick_C_Plus)
    #if USE_BEEP
      M5.Beep.tone(1000);
      delay(120);
      M5.Beep.tone(2000);
      delay(120);
      M5.Beep.mute();
    #endif
  #endif
}



static void sound_shutdown() {
  #if defined(ARDUINO_M5Stick_C_Plus)
    #if USE_BEEP
      M5.Beep.tone(2000);
      delay(120);
      M5.Beep.tone(1000);
      delay(120);
      M5.Beep.mute();
    #endif
  #endif
}



static void sound_select(bool long_press) {
  #if defined(ARDUINO_M5Stick_C_Plus)
    #if USE_BEEP
      if (long_press) {
        M5.Beep.tone(1000);
        delay(100);
        M5.Beep.tone(2000);
        delay(100);
        M5.Beep.tone(1000);
        delay(100);
        M5.Beep.mute();
      } else {
        M5.Beep.tone(1000);
        delay(100);
        M5.Beep.tone(2000);
        delay(100);
        M5.Beep.mute();
      }
    #endif
  #endif
}



static void sound_done() {
  #if defined(ARDUINO_M5Stick_C_Plus)
    #if USE_BEEP
      M5.Beep.tone(2000);
      delay(100);
      M5.Beep.mute();
      delay(30);
      M5.Beep.tone(2000);
      delay(100);
      M5.Beep.mute();
      delay(30);
      M5.Beep.tone(2000);
      delay(100);
      M5.Beep.mute();
    #endif
  #endif
}



static void measure_start() {
  // LED
  #if USE_LED
    digitalWrite(PIN_LED, LOW);
  #endif
  #if defined(ARDUINO_M5Stick_C_Plus)
    #if USE_BEEP
      M5.Beep.tone(1000);
      delay(100);
      M5.Beep.mute();
    #endif
  #endif
}



static void measure_end() {
  // LED
  #if USE_LED
    digitalWrite(PIN_LED, HIGH);
  #endif
  #if defined(ARDUINO_M5Stick_C_Plus)
    #if USE_BEEP
      M5.Beep.tone(1000);
      delay(100);
      M5.Beep.mute();
      delay(50);
      M5.Beep.tone(1000);
      delay(100);
      M5.Beep.mute();
    #endif
  #endif
}



static double measure_set_frequency(uint8_t chan, double freq) {
  uint8_t bit_num = 1;
  if (freq <= 20000000.0) bit_num++;
  if (freq <= 10000000.0) bit_num++;
  if (freq <= 5000000.0) bit_num++;
  if (freq <= 2500000.0) bit_num++;
  if (freq <= 1250000.0) bit_num++;
  if (freq <= 625000.0) bit_num++;
  if (freq <= 312500.0) bit_num++;
  if (freq <= 156250.0) bit_num++;
  if (freq <= 78125.0) bit_num++;
  if (freq <= 39062.5) bit_num++;
  if (freq <= 19531.25) bit_num++;
  if (freq <= 9765.625) bit_num++;
  if (freq <= 4882.8125) bit_num++;
  if (freq <= 2441.40625) bit_num++;
  if (freq <= 1220.703125) bit_num++;
  ledcChangeFrequency(chan, freq, bit_num);
  ledcWrite(chan, 1 << (bit_num - 1));
}



static uint16_t measure_freq_voltage(uint32_t freq) {
  measure_set_frequency(LEDC_CHANNEL, freq);
  delay(40);
  return analogReadMilliVolts(PIN_ADC_IN);
}



void execute_measure() {
  #if DEBUG_SERIAL
    Serial.println("Execute");
  #endif

  lcd_show_header_measure();
  lcd_show_footer();
  measure_start();

  uint16_t lcd_graph_x = 0;
  uint32_t lcd_graph_y = 0;
  uint8_t lcd_graph_px_cnt = 0;
  const uint8_t lcd_graph_px_max_cnt = loop_cnt / LCD_WIDTH;
  uint8_t measure_step_cnt = 0;
  uint32_t measure_max_voltage = 0;
  #if defined(MEAS_FRANGE_MAXDIFF)
    int16_t result_diff[loop_cnt];
    int16_t result_diff_plus_max = 0;
    int16_t result_diff_minus_max = 0;
  #endif
  uint16_t measure_max_voltage_start = -1;
  uint16_t measure_max_voltage_end = -1;
  uint16_t measure_max_voltage_center = -1;
  uint16_t result_range_start;
  uint16_t result_range_end;
  uint16_t old_graph_x = 0;
  uint32_t old_graph_y = 0;

  int32_t i = 0;
  for (uint32_t freq = param_start; freq <= param_max_step; freq = freq + param_step) {

    // Measure
    if (measure_step_cnt == 0) {
      result[i] = measure_freq_voltage(freq);
      result_freq[i] = freq;
    } else {
      result[i] = result[i - 1];
      result_freq[i] = result_freq[i - 1];
    }
    measure_step_cnt++;
    if (measure_step_cnt == param_mes_step) {
      measure_step_cnt = 0;
    }

    // Record Max Voltage
    if (measure_max_voltage < result[i]) {
      measure_max_voltage = result[i];
    }

    #if defined(MEAS_FRANGE_MAXDIFF)
      // Record Diff
      if (i == 0) {
        result_diff[i] = 0;
      } else {
        result_diff[i] = result[i] - result[i - 1];
      }
      // Record Max Diff
      if (result_diff_plus_max < result_diff[i]) {
        result_diff_plus_max = result_diff[i];
      }
      if (result_diff_minus_max > result_diff[i]) {
        result_diff_minus_max = result_diff[i];
      }
    #endif

    // Show Graph
    lcd_graph_y += result[i];
    if (i == 0) old_graph_y = lcd_graph_y;
    lcd_graph_px_cnt++;
    if (lcd_graph_px_cnt == lcd_graph_px_max_cnt) {
      lcd_plot_graph2(old_graph_x, old_graph_y, lcd_graph_x, lcd_graph_y / lcd_graph_px_max_cnt);
      old_graph_x = lcd_graph_x;
      old_graph_y = lcd_graph_y / lcd_graph_px_max_cnt;
      lcd_graph_px_cnt = 0;
      lcd_graph_y = 0;
      lcd_graph_x++;
    }

    i++;
  }

  // Detect Max Voltage
  for(i = 0; i < loop_cnt; i++) {
    if (result[i] == measure_max_voltage) {
      measure_max_voltage_start = i;
      break;
    }
  }
  for(i = loop_cnt - 1; i >= 0; i--) {
    if (result[i] == measure_max_voltage) {
      measure_max_voltage_end = i;
      break;
    }
  }
  measure_max_voltage_center = measure_max_voltage_start + (measure_max_voltage_end - measure_max_voltage_start) / 2;

  #if defined(MEAS_FRANGE_MAXDIFF)
    // Detect Max Diff
    for(i = 0; i < loop_cnt; i++) {
      if (result_diff[i] == result_diff_plus_max) {
        result_range_start = i;
        break;
      }
    }
    for(i = loop_cnt - 1; i >= 0; i--) {
      if (result_diff[i] == result_diff_minus_max) {
        result_range_end = i;
        break;
      }
    }
  #elif defined(MEAS_FRANGE_FWHM)
    // Detect FWHM
    for (i = 0; i < loop_cnt; i++) {
      if (result[i] >= measure_max_voltage / 2) {
        result_range_start = i;
        break;
      }
    }
    for(i = loop_cnt - 1; i >= 0; i--) {
      if (result[i] >= measure_max_voltage / 2) {
        result_range_end = i;
        break;
      }
    }
  #endif

  // Show Graph Line
  lcd_plot_line_max(measure_max_voltage_center / lcd_graph_px_max_cnt, result[measure_max_voltage_center]);
  lcd_plot_line(result_range_start / lcd_graph_px_max_cnt, result[result_range_start]);
  lcd_plot_line(result_range_end / lcd_graph_px_max_cnt, result[result_range_end]);

  // End
  measure_set_frequency(LEDC_CHANNEL, 0.0);
  measure_end();

  #if DEBUG_SERIAL
    Serial.println("Done");
    Serial.print("Max Voltage: ");
    Serial.println(measure_max_voltage);
    Serial.print("Max Voltage Start: ");
    Serial.println(measure_max_voltage_start);
    Serial.print("Max Voltage Center: ");
    Serial.println(measure_max_voltage_center);
    Serial.print("Max Voltage End: ");
    Serial.println(measure_max_voltage_end);
    Serial.print("result_range_start: ");
    Serial.println(result_range_start);
    Serial.print("result_range_end: ");
    Serial.println(result_range_end);
  #endif

  if (param_pass <= 1) {
    delay(2000);
    lcd_print_result(result_freq[measure_max_voltage_center], result_freq[result_range_start], result_freq[result_range_end]);
    param_select(select_param);
  } else {
    // pass
    delay(1000);
    param_pass--;
    param_step = param_step / param_div;
    param_start = result_freq[measure_max_voltage_center] - (((loop_cnt - 1) * param_step) / 2);
    param_max_step = (loop_cnt - 1) * param_step + param_start;
    lcd_show_main(false);
    lcd_show_footer();
    execute_measure();
  }
}



void execute_select(bool reset) {
  select_param++;
  if (select_param == sizeof(param) / sizeof(*param)) {
    select_param = 0;
  }
  if (reset) {
    select_param = 0;
  }
  param_select(select_param);
}



void param_select(uint8_t select) {
  param_start = param[select][0];
  param_step = param[select][1];
  param_max_step = (loop_cnt - 1) * param_step + param_start;
  param_mes_step = param[select][2];
  param_pass = param[select][3];
  param_div = param[select][4];

  #if DEBUG_SERIAL
    Serial.print("param_start: ");
    Serial.println(param_start);
    Serial.print("param_step: ");
    Serial.println(param_step);
    Serial.print("param_max_step: ");
    Serial.println(param_max_step);
    Serial.print("param_mes_step: ");
    Serial.println(param_mes_step);
  #endif
}



void lcd_init() {
  #if defined (ARDUINO_M5Stick_C_Plus) || defined(ARDUINO_M5Stick_C) || defined(ARDUINO_M5STACK_Core2)
    M5.Axp.SetLDO2(false);
    M5.Lcd.begin();
  #endif

  M5.Lcd.setRotation(LCD_ROT);
  M5.Lcd.fillScreen(LCD_BG_COLOR);

  #if defined (ARDUINO_M5Stick_C_Plus) || defined(ARDUINO_M5Stick_C)
    M5.Axp.ScreenBreath(10);
  #elif defined(ARDUINO_M5STACK_Core2)
    M5.Lcd.setBrightness(128);
  #endif
}



void lcd_show_header(bool show_version) {
  M5.Lcd.fillRect(0, LCD_HEADER_OFFSET, LCD_WIDTH, LCD_HEADER_HEIGHT, LCD_HEADER_COLOR);
  if (show_version) {
    M5.Lcd.setCursor(LCD_HEADER_TEXT_LEFT_OFFSET, LCD_HEADER_OFFSET + LCD_HEADER_TEXT_OFFSET);
    M5.Lcd.setTextFont(LCD_HEADER_TEXT_FONT);
    M5.Lcd.setTextSize(LCD_HEADER_TEXT_SIZE);
    M5.Lcd.setTextColor(LCD_HEADER_TEXT_COLOR);
    M5.Lcd.printf("Version %2.1f ", FW_VERSION);
    #if defined(ARDUINO_M5Stick_C_Plus)
      M5.Lcd.printf("StickC-Plus");
    #elif defined(ARDUINO_M5Stick_C)
      M5.Lcd.printf("StkC");
    #elif defined(ARDUINO_M5Stack_Core_ESP32)
      M5.Lcd.printf("M5Stack Core");
    #endif
  }
}



void lcd_show_header_measure() {
  M5.Lcd.fillRect(0, LCD_HEADER_OFFSET, LCD_WIDTH, LCD_HEADER_HEIGHT, LCD_HEADER_MEASURE_COLOR);
  M5.Lcd.setCursor(LCD_HEADER_MEASURE_TEXT_LEFT_OFFSET, LCD_HEADER_OFFSET + LCD_HEADER_TEXT_OFFSET);
  M5.Lcd.setTextFont(LCD_HEADER_TEXT_FONT);
  M5.Lcd.setTextSize(LCD_HEADER_TEXT_SIZE);
  M5.Lcd.setTextColor(LCD_HEADER_MEASURE_TEXT_COLOR);
  M5.Lcd.printf(LCD_HEADER_MEASURE_TEXT);
}



void lcd_show_header_batt(bool force_update) {
  #if defined(ARDUINO_M5Stack_Core_ESP32)
    batt_voltage_now = M5.Power.getBatteryLevel();
    batt_status_now = M5.Power.isCharging();
  #else
    // Get AXP192 [REG 00H / 01H]
    #if defined(ARDUINO_M5Stick_C_Plus)
      batt_status_now = (((uint16_t)M5.Axp.Read8bit(0x01) << 8) | M5.Axp.Read8bit(0x00));
    #elif defined(ARDUINO_M5Stick_C)
      batt_status_now = (((uint16_t)M5.Axp.GetBatteryChargingStatus() << 8) | M5.Axp.GetInputPowerStatus());
    #endif
    // Get Battery Voltage [%3.2f]
    batt_voltage_now = round(M5.Axp.GetBatVoltage() * 100) / 100;
  #endif
  if ((batt_status_now != batt_status_last) || (batt_voltage_now != batt_voltage_last) || force_update) {
    batt_status_last = batt_status_now;
    batt_voltage_last = batt_voltage_now;
    M5.Lcd.fillRect(LCD_HEADER_BATT_LEFT_OFFSET, LCD_HEADER_OFFSET, LCD_WIDTH - LCD_HEADER_BATT_LEFT_OFFSET, LCD_HEADER_HEIGHT, LCD_HEADER_BATT_COLOR);
    M5.Lcd.setCursor(LCD_HEADER_BATT_LEFT_OFFSET + LCD_HEADER_BATT_TEXT_LEFT_OFFSET, LCD_HEADER_OFFSET + LCD_HEADER_TEXT_OFFSET);
    M5.Lcd.setTextFont(LCD_HEADER_TEXT_FONT);
    M5.Lcd.setTextSize(LCD_HEADER_TEXT_SIZE);
    M5.Lcd.setTextColor(LCD_HEADER_BATT_TEXT_COLOR);
    #if defined(ARDUINO_M5Stack_Core_ESP32)
      if(batt_status_now) {
        M5.Lcd.printf("CHG");
      } else {
        M5.Lcd.printf("BAT");
      }
      M5.Lcd.printf(" %3d%%", (uint8_t)batt_voltage_now);
    #else
      if((batt_status_now >> 14) & 1) {
        // Battery Charging
        M5.Lcd.printf("CHG");
      } else {
        if((batt_status_now >> 4) & 1) {
          // USB
          M5.Lcd.printf("USB");
        } else {
          // Battery
          M5.Lcd.printf("BAT");
        }
      }
      #if USE_BATTERY_PERCENTAGE
        M5.Lcd.printf(" %3d%%", (uint8_t)round((batt_voltage_now - 3.2) * 100));
      #else
        M5.Lcd.printf(" %3.2fV", batt_voltage_now);
      #endif
    #endif
  }
}



void lcd_show_main(bool show_title) {
  M5.Lcd.fillRect(0, LCD_MAIN_OFFSET, LCD_WIDTH, LCD_MAIN_HEIGHT, LCD_MAIN_COLOR);
  if (show_title) {
    M5.Lcd.setCursor(LCD_MAIN_TEXT_LEFT_OFFSET, LCD_MAIN_OFFSET + LCD_MAIN_TEXT_OFFSET);
    M5.Lcd.setTextFont(LCD_MAIN_TEXT_FONT);
    M5.Lcd.setTextSize(LCD_MAIN_TEXT_SIZE);
    M5.Lcd.setTextColor(LCD_MAIN_TEXT_COLOR);
    M5.Lcd.printf(LCD_MAIN_TEXT);
  }
}



void lcd_show_footer() {
  M5.Lcd.fillRect(0, LCD_FOOTER_OFFSET, LCD_WIDTH, LCD_FOOTER_HEIGHT, LCD_FOOTER_COLOR);
  M5.Lcd.setCursor(LCD_FOOTER_TEXT_LEFT_OFFSET, LCD_FOOTER_OFFSET + LCD_FOOTER_TEXT_OFFSET);
  M5.Lcd.setTextFont(LCD_FOOTER_TEXT_FONT);
  M5.Lcd.setTextSize(LCD_FOOTER_TEXT_SIZE);
  M5.Lcd.setTextColor(LCD_FOOTER_TEXT_COLOR);
  #if defined(ARDUINO_M5Stick_C_Plus)
    lcd_print_hz(param_start);
    M5.Lcd.printf(" - ");
    lcd_print_hz(param_max_step);
    M5.Lcd.printf(" @ Step");
    lcd_print_hz(param_mes_step * param_step);
    M5.Lcd.printf(" %dP" ,param_pass);
  #elif defined(ARDUINO_M5Stick_C)
    lcd_print_hz(param_start);
    M5.Lcd.printf("-");
    lcd_print_hz(param_max_step);
    M5.Lcd.printf("@Step");
    lcd_print_hz(param_mes_step * param_step);
    M5.Lcd.printf("%dP" ,param_pass);
  #else
    lcd_print_hz(param_start);
    M5.Lcd.printf(" - ");
    lcd_print_hz(param_max_step);
    M5.Lcd.printf(" @ Step ");
    lcd_print_hz(param_mes_step * param_step);
    M5.Lcd.printf(" %dPass" ,param_pass);
    M5.Lcd.printf(" %dDiv" ,param_div);
  #endif
}



void lcd_print_hz(uint32_t freq) {
  if (freq >= 1000000) {
    M5.Lcd.printf("%2.1fMHz", (double)freq / 1000000.0);
  } else if (freq >= 1000) {
    M5.Lcd.printf("%dkHz", freq / 1000);
  } else {
    M5.Lcd.printf("%dHz", freq);
  }
}



void lcd_plot_graph1(uint16_t x, uint32_t y) {
  M5.Lcd.drawPixel(x, LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT - (y / lcd_plot_y_divider) - 1, LCD_MAIN_GRAPH_COLOR);
}



void lcd_plot_graph2(uint16_t x0, uint32_t y0, uint16_t x1, uint32_t y1) {
  M5.Lcd.drawLine(x0, LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT - (y0 / lcd_plot_y_divider) - 1,
                  x1, LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT - (y1 / lcd_plot_y_divider) - 1,
                  LCD_MAIN_GRAPH_COLOR);
}



void lcd_plot_line(uint16_t x, uint32_t y) {
  M5.Lcd.drawLine(x, LCD_MAIN_OFFSET, x, LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT - 1, LCD_MAIN_GRAPH_LINE_COLOR);
  lcd_plot_graph1(x, y);
}



void lcd_plot_line_max(uint16_t x, uint32_t y) {
  M5.Lcd.drawLine(x, LCD_MAIN_OFFSET, x, LCD_MAIN_OFFSET + LCD_MAIN_HEIGHT - 1, LCD_MAIN_GRAPH_MAX_LINE_COLOR);
  lcd_plot_graph1(x, y);
}



void lcd_print_result(uint32_t freq, uint32_t freq_start, uint32_t freq_end) {
  M5.Lcd.fillRect(LCD_RESULT_LEFT_OFFSET, LCD_RESULT_OFFSET, LCD_RESULT_WIDTH, LCD_RESULT_HEIGHT, LCD_RESULT_COLOR);
  M5.Lcd.setCursor(LCD_RESULT_LEFT_OFFSET + LCD_RESULT_MAIN_TEXT_LEFT_OFFSET, LCD_RESULT_OFFSET + LCD_RESULT_MAIN_TEXT_OFFSET);
  M5.Lcd.setTextFont(LCD_RESULT_MAIN_TEXT_FONT);
  M5.Lcd.setTextSize(LCD_RESULT_MAIN_TEXT_SIZE);
  M5.Lcd.setTextColor(LCD_RESULT_MAIN_TEXT_COLOR);
  if (freq >= 1000000) {
    M5.Lcd.printf("%5.4fMHz", (double)freq / 1000000.0);
  } else if (freq >= 1000) {
    M5.Lcd.printf("%6.3fkHz", (double)freq / 1000.0);
  } else {
    M5.Lcd.printf("%dHz", freq);
  }
  M5.Lcd.setCursor(LCD_RESULT_LEFT_OFFSET + LCD_RESULT_SUB_TEXT_LEFT_OFFSET, LCD_RESULT_OFFSET + LCD_RESULT_SUB_TEXT_OFFSET);
  M5.Lcd.setTextFont(LCD_RESULT_SUB_TEXT_FONT);
  M5.Lcd.setTextSize(LCD_RESULT_SUB_TEXT_SIZE);
  M5.Lcd.setTextColor(LCD_RESULT_SUB_TEXT_COLOR);
  M5.Lcd.printf("Range: ");
  lcd_print_hz(freq_start);
  M5.Lcd.printf(" - ");
  lcd_print_hz(freq_end);
}


void setup() {

  // Initialize System
  #if defined (ARDUINO_M5Stick_C_Plus) || defined(ARDUINO_M5Stick_C) || defined(ARDUINO_M5STACK_Core2)
    M5.begin(false, true, true);
  #else
    M5.begin();
  #endif
  lcd_init();
  param_select(select_param);

  // For IP5306
  #if defined(ARDUINO_M5Stack_Core_ESP32)
    M5.Power.begin();
    M5.Power.setVinMaxCurrent(0x01 << 0); //100mA
    M5.Power.setPowerBoostSet(true);
    M5.Speaker.setVolume(0);
    dacWrite(25, 0);
  #endif

  // Initialize Pins
  pinMode(PIN_PWM_OUT, OUTPUT);
  pinMode(PIN_ADC_IN, ANALOG);
  #if defined(ARDUINO_M5Stick_C_Plus)
    gpio_pulldown_dis(GPIO_NUM_25);
    gpio_pullup_dis(GPIO_NUM_25);
  #endif
  #if USE_LED
    digitalWrite(PIN_LED, HIGH);
    pinMode(PIN_LED, OUTPUT);
    digitalWrite(PIN_LED, HIGH);
  #endif

  // Initialize PWM
  ledcSetup(LEDC_CHANNEL, 0.0, 16); // Initialize [0.0Hz - 16bit]
  ledcAttachPin(PIN_PWM_OUT, LEDC_CHANNEL);

  // Show LCD
  lcd_show_header(true);
  lcd_show_header_batt(false);
  lcd_show_main(true);
  lcd_show_footer();
  #if defined (ARDUINO_M5Stick_C_Plus) || defined(ARDUINO_M5Stick_C) || defined(ARDUINO_M5STACK_Core2)
    M5.Axp.SetLDO2(true);
  #endif

  // Auto Power Off
  last_time = millis();

  // Sound
  sound_startup();
}


void loop() {
  static bool btnB_longPressed = false;
  static uint32_t btnB_baseMs = 0;

  // Show Battery Status
  lcd_show_header_batt(false);

  // Check Power Button
  #if defined(ARDUINO_M5Stick_C_Plus) || defined(ARDUINO_M5Stick_C)
    if (M5.Axp.GetBtnPress() == 2) {
      sound_shutdown();
      M5.Axp.PowerOff();
    }
  #endif

  // Check Buttons
  M5.update();

  // Main Button
  if (M5.BtnA.wasPressed()) {
    last_time = millis();
    lcd_show_header(false);
    lcd_show_main(false);
    executed = true;
    execute_measure();
    lcd_show_header(true);
    lcd_show_header_batt(true);
    last_time = millis();
    sound_done();
  }

  // Sub Button
  if (M5.BtnB.isPressed()) {
    last_time = millis();
    // Long Press
    if (millis() - btnB_baseMs > 1000 && !btnB_longPressed) {
      btnB_longPressed = true;
      execute_select(true);
      lcd_show_footer();
      sound_select(true);
    }
  } else {
    btnB_baseMs = millis();
    if (M5.BtnB.wasReleased()) {
      // Short Press
      if (!btnB_longPressed) {
        execute_select(false);
        if (executed) {
          executed = false;
          lcd_show_main(true);
        }
        lcd_show_footer();
        sound_select(false);
      }
      btnB_longPressed = false;
    }
  }

  // Auto Power Off
  #if USE_AUTO_POWER_OFF
    if((millis() - last_time) > AUTO_POWER_OFF_TIME) {
      // Power Off
      sound_shutdown();
      #if defined(ARDUINO_M5Stack_Core_ESP32)
        M5.Power.deepSleep();
      #else
        M5.Axp.PowerOff();
      #endif
    }
  #endif

  delay(10);

}
