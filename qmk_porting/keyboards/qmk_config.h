#pragma once

//* platform settings
// #define DEBUG       1
// #define DCDC_ENABLE 1
#define Fsys        CLK_SOURCE_PLL_40MHz
// #define LSE_FREQ    32768
// #define CH58xBLE_ROM
#define BLE_TX_NUM_EVENT          4
#define PERIPHERAL_MAX_CONNECTION 2
#define CENTRAL_MAX_CONNECTION    0
#define BLE_BUFF_MAX_LEN          48
// #define BLE_MEMHEAP_SIZE          (1024 * 7)
// #define BLE_BUFF_NUM              10

#include "eeprom_partition_table.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0B91
#define DEVICE_VER   0x0001
#define MANUFACTURER OctocKiesZ
#define PRODUCT      mk01

#define QMK_VERSION    "0.0.1"
#define QMK_BUILDDATE  "Today"
#define QMK_KEYBOARD_H "mk01.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define MATRIX_ROW_PINS      \
    {                        \
        B9, A7, B8, B16, B18 \
    }
#define MATRIX_COL_PINS                                          \
    {                                                            \
        A4, A5, A6, A0, A1, A3, B17, B5, B4, B3, B2, B1, B0, B21 \
    }
#define DIODE_DIRECTION       COL2ROW
#define BOOTMAGIC_LITE_ROW    1
#define BOOTMAGIC_LITE_COLUMN 1

#define FORCE_NKRO
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE

// #define ENCODERS_PAD_A A10
// #define ENCODERS_PAD_B A11

#define WS2812_EN_PIN   B22
#define WS2812_EN_LEVEL 1

#ifdef RGBLIGHT_ENABLE
#define RGBLED_NUM        61
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
// #define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_LIMIT_VAL   128
#define RGBLIGHT_HUE_STEP    20
#define RGBLIGHT_SAT_STEP    20
#define RGBLIGHT_VAL_STEP    20
#define RGBLIGHT_DEFAULT_HUE 191
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 10
#define RGBLIGHT_DEFAULT_SPD 1
#endif

#ifdef RGB_MATRIX_ENABLE
#define WS2812_PWM_DRIVER             1
#define RGBLED_NUM                    61
#define DRIVER_LED_TOTAL              RGBLED_NUM
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#endif

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#include "ble_config.h"

#include "pre_handler.h"