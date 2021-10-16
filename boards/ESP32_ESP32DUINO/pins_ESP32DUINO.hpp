/**
 * @brief a pins configuration file for an ESP32-based OAT.
 */

#pragma once


// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef RA_STEP_PIN
    #define RA_STEP_PIN 26  // STEP
#endif
#ifndef RA_DIR_PIN
    #define RA_DIR_PIN 16  // DIR
#endif
#ifndef RA_EN_PIN
    #define RA_EN_PIN 12  // Enable
#endif
#ifndef RA_DIAG_PIN
    #define RA_DIAG_PIN -1  // only needed for autohome function
#endif
#ifndef RA_MS0_PIN
    #define RA_MS0_PIN -1
#endif
#ifndef RA_MS1_PIN
    #define RA_MS1_PIN -1
#endif
#ifndef RA_MS2_PIN
    #define RA_MS2_PIN -1
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef RA_SERIAL_PORT_TX
    #define RA_SERIAL_PORT_TX 4  // SoftwareSerial TX port
#endif
#ifndef RA_SERIAL_PORT_RX
    #define RA_SERIAL_PORT_RX 49  // SoftwareSerial RX port
#endif
#ifndef RA_DRIVER_ADDRESS
    #define RA_DRIVER_ADDRESS 0b00  // Set by MS1/MS2. LOW/LOW in this case
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef DEC_STEP_PIN
    #define DEC_STEP_PIN 25  // STEP
#endif
#ifndef DEC_DIR_PIN
    #define DEC_DIR_PIN 27  // DIR
#endif
#ifndef DEC_EN_PIN
    #define DEC_EN_PIN 12  // Enable
#endif
#ifndef DEC_DIAG_PIN
    #define DEC_DIAG_PIN -1  // only needed for autohome function
#endif
#ifndef DEC_MS0_PIN
    #define DEC_MS0_PIN -1
#endif
#ifndef DEC_MS1_PIN
    #define DEC_MS1_PIN -1
#endif
#ifndef DEC_MS2_PIN
    #define DEC_MS2_PIN -1
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef DEC_SERIAL_PORT_TX
    #define DEC_SERIAL_PORT_TX 4  // SoftwareSerial TX port
#endif
#ifndef DEC_SERIAL_PORT_RX
    #define DEC_SERIAL_PORT_RX 49  // SoftwareSerial RX port
#endif
#ifndef DEC_DRIVER_ADDRESS
    #define DEC_DRIVER_ADDRESS 0b01  // Set by MS1/MS2 (MS1 HIGH, MS2 LOW)
#endif

#define SW_SERIAL_UART 1
#ifndef UART_CONNECTION_TEST_TXRX
    #define UART_CONNECTION_TEST_TXRX 1
#endif

// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef ALT_STEP_PIN
    #define ALT_STEP_PIN 17  // STEP
#endif
#ifndef ALT_DIR_PIN
    #define ALT_DIR_PIN 14  // DIR
#endif
#ifndef ALT_EN_PIN
    #define ALT_EN_PIN 12  // Enable
#endif
#ifndef ALT_DIAG_PIN
    #define ALT_DIAG_PIN -1  // only needed for autohome function
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef AZ_STEP_PIN
    #define AZ_STEP_PIN 19  // STEP
#endif
#ifndef AZ_DIR_PIN
    #define AZ_DIR_PIN 18  // DIR
#endif
#ifndef AZ_EN_PIN
    #define AZ_EN_PIN 12  // Enable
#endif
#ifndef AZ_DIAG_PIN
    #define AZ_DIAG_PIN -1  // only needed for autohome function
#endif
