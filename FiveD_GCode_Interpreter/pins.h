#ifndef PINS_H
#define PINS_H

#if MOTHERBOARD == 0

#error The Arduino cannot run the 5D GCode interpreter

/****************************************************************************************
* Arduino pin assignment - left here as they might be useful
*
****************************************************************************************/

#define X_STEP_PIN 2
#define X_DIR_PIN 3
#define X_MIN_PIN 4
#define X_MAX_PIN 9

#define Y_STEP_PIN 10
#define Y_DIR_PIN 7
#define Y_MIN_PIN 8
#define Y_MAX_PIN 13

#define Z_STEP_PIN 19
#define Z_DIR_PIN 18
#define Z_MIN_PIN 17
#define Z_MAX_PIN 16

#define BASE_HEATER_PIN   -1
#define POWER_SUPPLY_PIN -1

//extruder pins
#define EXTRUDER_0_MOTOR_SPEED_PIN  11
#define EXTRUDER_0_MOTOR_DIR_PIN    12
#define EXTRUDER_0_HEATER_PIN       6
#define EXTRUDER_0_FAN_PIN          5
#define EXTRUDER_0_TEMPERATURE_PIN  0  // Analogue input
#define EXTRUDER_0_VALVE_DIR_PIN             16       //NB: Conflicts with Max Z!!!!
#define EXTRUDER_0_VALVE_ENABLE_PIN          15 
#define EXTRUDER_0_STEP_ENABLE_PIN  5 // 5 - NB conflicts with the fan; set -ve if no stepper
#define EXTRUDER_0_LOW_HEAT         64
#define EXTRUDER_0_HIGH_HEAT        255

/****************************************************************************************
* Sanguino/RepRap Motherboard with direct-drive extruders
*
****************************************************************************************/
#elif MOTHERBOARD == 1

#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define USE_EXTRUDER_CONTROLLER false

#define X_STEP_PIN 15
#define X_DIR_PIN 18
#define X_MIN_PIN 20
#define X_MAX_PIN 21
#define X_ENABLE_PIN 19

#define Y_STEP_PIN 23
#define Y_DIR_PIN 22
#define Y_MIN_PIN 24
#define Y_MAX_PIN 26
#define Y_ENABLE_PIN 19

#define Z_STEP_PIN 29
#define Z_DIR_PIN 30
#define Z_MIN_PIN 2
#define Z_MAX_PIN 1
#define Z_ENABLE_PIN 31

#define BASE_HEATER_PIN   -1
#define POWER_SUPPLY_PIN  -1

#define PS_EN_PIN 10

//extruder pins
#define EXTRUDER_0_MOTOR_SPEED_PIN   12 // E STEP
#define EXTRUDER_0_MOTOR_DIR_PIN     16 // E DIR
#define EXTRUDER_0_HEATER_PIN        14
#define EXTRUDER_0_FAN_PIN           -1
#define EXTRUDER_0_TEMPERATURE_PIN    4    // Analogue input
#define EXTRUDER_0_VALVE_DIR_PIN     -1
#define EXTRUDER_0_VALVE_ENABLE_PIN  -1  // Valve needs to be redesigned not to need this
#define EXTRUDER_0_STEP_ENABLE_PIN    3  // 3 - Conflicts with the fan; set -ve if no stepper

#define EXTRUDER_0_LOW_HEAT          64
#define EXTRUDER_0_HIGH_HEAT         255


#define EXTRUDER_1_MOTOR_SPEED_PIN   -1
#define EXTRUDER_1_MOTOR_DIR_PIN     -1
#define EXTRUDER_1_HEATER_PIN        -1
#define EXTRUDER_1_FAN_PIN           -1
#define EXTRUDER_1_TEMPERATURE_PIN   -1  // Analogue input
#define EXTRUDER_1_VALVE_DIR_PIN     -1
#define EXTRUDER_1_VALVE_ENABLE_PIN  -1  // Valve needs to be redesigned not to need this 
#define EXTRUDER_1_STEP_ENABLE_PIN   -1  // 7 - Conflicts with the fan; set -ve if no stepper
#define EXTRUDER_1_LOW_HEAT         64
#define EXTRUDER_1_HIGH_HEAT        255


/****************************************************************************************
* RepRap Motherboard with RS485 extruders
*
****************************************************************************************/

#elif MOTHERBOARD == 2

#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define USE_EXTRUDER_CONTROLLER true

//x axis pins
#define X_STEP_PIN      15
#define X_DIR_PIN       18
#define X_ENABLE_PIN    19
#define X_MIN_PIN       20
#define X_MAX_PIN       21

//y axis pins
#define Y_STEP_PIN      23
#define Y_DIR_PIN       22
#define Y_ENABLE_PIN    24
#define Y_MIN_PIN       25
#define Y_MAX_PIN       26

//z axis pins
#define Z_STEP_PIN      27
#define Z_DIR_PIN       28
#define Z_ENABLE_PIN    29
#define Z_MIN_PIN       30
#define Z_MAX_PIN       31

#define BASE_HEATER_PIN   -1
#define POWER_SUPPLY_PIN -1

//our pin for debugging.
#define DEBUG_PIN        0

//our SD card pins
#define SD_CARD_WRITE    2
#define SD_CARD_DETECT   3
#define SD_CARD_SELECT   4

//our RS485 pins
#define TX_ENABLE_PIN	12
#define RX_ENABLE_PIN	13

//pin for controlling the PSU.
#define PS_ON_PIN       14

/****************************************************************************************
* Arduino Mega pin assignment
*
****************************************************************************************/

#elif MOTHERBOARD == 3

#define USE_EXTRUDER_CONTROLLER false


#define X_STEP_PIN 22
#define X_DIR_PIN 23
#define X_MIN_PIN 2
#define X_MAX_PIN 3
#define X_ENABLE_PIN 24

#define Y_STEP_PIN 25
#define Y_DIR_PIN 26
#define Y_MIN_PIN 18
#define Y_MAX_PIN 19
#define Y_ENABLE_PIN 27

#define Z_STEP_PIN 28
#define Z_DIR_PIN 29
#define Z_MIN_PIN 20
#define Z_MAX_PIN 21
#define Z_ENABLE_PIN 30

#define BASE_HEATER_PIN   -1
#define POWER_SUPPLY_PIN -1


//extruder pins
#define EXTRUDER_0_MOTOR_SPEED_PIN   4
#define EXTRUDER_0_MOTOR_DIR_PIN     31
#define EXTRUDER_0_HEATER_PIN        6
#define EXTRUDER_0_FAN_PIN           -1
#define EXTRUDER_0_TEMPERATURE_PIN  0    // 57 Analogue input 3
#define EXTRUDER_0_VALVE_DIR_PIN     -1
#define EXTRUDER_0_VALVE_ENABLE_PIN  -1  // Valve needs to be redesigned not to need this
#define EXTRUDER_0_STEP_ENABLE_PIN  (signed int)-1
#define EXTRUDER_0_LOW_HEAT         110
#define EXTRUDER_0_HIGH_HEAT        255

#define EXTRUDER_1_MOTOR_SPEED_PIN   -1
#define EXTRUDER_1_MOTOR_DIR_PIN    -1
#define EXTRUDER_1_HEATER_PIN        -1
#define EXTRUDER_1_FAN_PIN           -1
#define EXTRUDER_1_TEMPERATURE_PIN  -1  // Analogue input
#define EXTRUDER_1_VALVE_DIR_PIN    -1
#define EXTRUDER_1_VALVE_ENABLE_PIN -1   // Valve needs to be redesigned not to need this 
#define EXTRUDER_1_STEP_ENABLE_PIN  (signed int)-1  // 7 - Conflicts with the fan; set -ve if no stepper
#define EXTRUDER_1_LOW_HEAT         64
#define EXTRUDER_1_HIGH_HEAT        255

/****************************************************************************************
* Duemilanove w/ ATMega328P pin assignment
*
****************************************************************************************/

#elif MOTHERBOARD == 4

#ifndef __AVR_ATmega328P__
#error Oops!  Make sure you have 'Arduino Duemilanove w/ ATMega328' selected from the 'Tools -> Boards' menu.
#endif

#define USE_EXTRUDER_CONTROLLER false

#define X_STEP_PIN 19
#define X_DIR_PIN 18
#define X_MIN_PIN 17
#define X_MAX_PIN -1
#define X_ENABLE_PIN -1

#define Y_STEP_PIN 10
#define Y_DIR_PIN 7
#define Y_MIN_PIN 8
#define Y_MAX_PIN -1
#define Y_ENABLE_PIN -1

#define Z_STEP_PIN 13
#define Z_DIR_PIN 3
#define Z_MIN_PIN 4
#define Z_MAX_PIN -1
#define Z_ENABLE_PIN -1

#define BASE_HEATER_PIN   1
#define POWER_SUPPLY_PIN 16

//extruder pins
#define EXTRUDER_0_MOTOR_SPEED_PIN   11
#define EXTRUDER_0_MOTOR_DIR_PIN     12
#define EXTRUDER_0_HEATER_PIN        6
#define EXTRUDER_0_FAN_PIN           5
#define EXTRUDER_0_TEMPERATURE_PIN  0   // Analogue input
#define EXTRUDER_0_VALVE_DIR_PIN     -1
#define EXTRUDER_0_VALVE_ENABLE_PIN  -1  // Valve needs to be redesigned not to need this
#define EXTRUDER_0_STEP_ENABLE_PIN  2  // 3 - Conflicts with the fan; set -ve if no stepper
#define EXTRUDER_0_LOW_HEAT         64
#define EXTRUDER_0_HIGH_HEAT        255

#define EXTRUDER_1_MOTOR_SPEED_PIN   -1
#define EXTRUDER_1_MOTOR_DIR_PIN    -1
#define EXTRUDER_1_HEATER_PIN        -1
#define EXTRUDER_1_FAN_PIN           -1
#define EXTRUDER_1_TEMPERATURE_PIN  -1  // Analogue input
#define EXTRUDER_1_VALVE_DIR_PIN    -1
#define EXTRUDER_1_VALVE_ENABLE_PIN -1   // Valve needs to be redesigned not to need this 
#define EXTRUDER_1_STEP_ENABLE_PIN  -1  // 7 - Conflicts with the fan; set -ve if no stepper
#define EXTRUDER_1_LOW_HEAT         64
#define EXTRUDER_1_HIGH_HEAT        255


#else

#error Unknown MOTHERBOARD value in parameters.h

#endif

#endif
