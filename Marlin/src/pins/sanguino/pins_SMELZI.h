#ifndef BOARD_NAME
  #define BOARD_NAME "MKS SMelzi"
#endif

//
// Limit Switches
//
#define X_STOP_PIN 18
#define Y_STOP_PIN 19
#define Z_STOP_PIN 20

//
// Steppers
//
#define X_STEP_PIN 15
#define X_DIR_PIN 21

#define Y_STEP_PIN 22
#define Y_DIR_PIN 23

#define Z_STEP_PIN 3
#define Z_DIR_PIN 2

#define E0_STEP_PIN 1
#define E0_DIR_PIN 0

#define X_ENABLE_PIN 14
#define Y_ENABLE_PIN 14
#define Z_ENABLE_PIN 26
#define E0_ENABLE_PIN 14

//
// Temperature Sensors
//
#define TEMP_0_PIN 7   // Analog Input (pin 24 extruder)
//#define TEMP_BED_PIN 6   // Analog Input (pin 25 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN 13 // (extruder)
//#define HEATER_BED_PIN 12 // (bed)
#define FAN_PIN 4 //(turbo fan)

//
// Misc. Functions
//
#define PS_ON_PIN 17
#define DOGLCD_A0 27
#define BTN_ENC 28
#define DOGLCD_CS 29
#define BEEPER_PIN 30
#define SDSS 31
#define BTN_EN1 10
#define BTN_EN2 11

//#define AVR_SCK_PIN  7
//#define AVR_MISO_PIN 6
//#define AVR_MOSI_PIN 5
//#define AVR_SS_PIN   4

