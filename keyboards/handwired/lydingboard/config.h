#ifndef CONFIG_H
#define CONFIG_H

// #include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Handmade
#define PRODUCT         LydingBoard
#define DESCRIPTION     QMK keyboard firmware for LydingBoard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 20

/* key matrix pins */
// D4, D2, D3, C3, C4, C6, C7, C5, D1, C0, B0, B1, B3, B2, D5, D6, C1, C2, A5, B19
#define MATRIX_COL_PINS { TEENSY_PIN6, TEENSY_PIN7, TEENSY_PIN8, TEENSY_PIN9, TEENSY_PIN10, TEENSY_PIN11, TEENSY_PIN12, TEENSY_PIN13, TEENSY_PIN14, TEENSY_PIN15, TEENSY_PIN16, TEENSY_PIN17, TEENSY_PIN18, TEENSY_PIN19, TEENSY_PIN20, TEENSY_PIN21, TEENSY_PIN22, TEENSY_PIN23, TEENSY_PIN24, TEENSY_PIN25 }
// B16, B17, D0, A12, A13, D7
#define MATRIX_ROW_PINS { TEENSY_PIN0, TEENSY_PIN1, TEENSY_PIN2, TEENSY_PIN3, TEENSY_PIN4, TEENSY_PIN5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
//#define BACKLIGHT_PIN
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

//#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
