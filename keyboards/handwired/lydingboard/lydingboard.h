#pragma once

#include "quantum.h"

/* LAYOUT
 *       ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
 *       │   │   │   │   │   │   │ │   │   │   │   │ │   │   │   │   │
 *       └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘
 * ┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐  ┌───┬───┬───┬───┐
 * │   │ │   │   │   │   │   │   │   │   │   │   │   │   │   │       │  │   │   │   │   │
 * ├───┤ ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤  ├───┼───┼───┼───┤
 * │   │ │1.5U │   │   │   │   │   │   │   │   │   │   │   │   │     │  │   │   │   │   │
 * ├───┤ ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │  ├───┼───┼───┼───┤
 * │   │ │1.75U │   │   │   │   │   │   │   │   │   │   │   │   │    │  │   │   │   │   │
 * ├───┤ ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤  ├───┼───┼───┤   │
 * │   │ │1.25│   │   │   │   │   │   │   │   │   │   │   │2.75U     │  │   │   │   │   │
 * ├───┤ ├────┼───┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┼───┴┬────┬────┤  ├───┼───┼───┼───┘
 * │   │ │1.25│   │1.25│1.25│                         │1.25│1.25│1.25│  │   │   │   │
 * └───┘ └────┴───┴────┴────┴─────────────────────────┴────┴────┴────┘  └───┴───┴───┘
 */

// LAYOUT for all possible switch positions on a KBD75
#define LAYOUT( \
                K002,       K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K115, K116, K117, K118, K119, \
    K200, K201,       K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214,       K216, K217, K218, K219, \
    K300, K301,       K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, K318, \
    K400, K401, K402, K403, K404,       K406, K407, K408, K409, K410, K411, K412, K413,       K415, K416, K417, K418, K419, \
    K500, K501, K502, K503,       K505,                         K510,             K513, K514, K515  K516, K517, K518, \
) { \
    { KC_NO, KC_NO, K002,  KC_NO, K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  KC_NO, KC_NO, KC_NO, KC_NO }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  KC_NO, K115,  K116,  K117,  K118,  K119  }, \
    { K200,  K201,  KC_NO, K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  KC_NO, K216,  K217,  K218,  K219  }, \
    { K300,  K301,  KC_NO, K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  K317,  K318,  KC_NO }, \
    { K400,  K401,  K402,  K403,  K404,  KC_NO, K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  KC_NO, K415,  K416,  K417,  K418,  K419  }, \
    { K500,  K501,  K502,  K503,  KC_NO, K505,  KC_NO, KC_NO, KC_NO, KC_NO, K510,  KC_NO, KC_NO, K513,  K514,  K515,  K516,  K517,  K518,  KC_NO }  \
}

