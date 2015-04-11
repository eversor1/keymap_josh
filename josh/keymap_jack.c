#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Josh Atomic */
  ESC,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC,
  TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, HOME, END,
  FN0,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, ENT,  PGUP,
  LSFT,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT, UP,   PGDN,
  LCTL, LGUI, LALT,                  SPC,                     GRV, DELETE, LEFT, DOWN, RGHT),
[1] = KEYMAP( /* Josh Raise */
  ESC,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11, F12, BSLS,
  TAB,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
  LCTL, LGUI, LALT,                  SPC,                     GRV, DELETE, LEFT, DOWN, RGHT),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};
