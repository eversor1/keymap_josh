#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = KEYMAP(ESC,   1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, \
                     TAB,   Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, HOME, END, \
  		     FN0,   A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, ENT,  PGUP, \
      		     LSFT,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, RSFT, UP,   PGDN, \
    		     LCTL, LGUI, LALT,                  SPC,                     GRV, DELETE, LEFT, DOWN, RGHT),

	[1] = KEYMAP(ESC,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11, F12, BSPC, \
  		     TAB,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 7,    8,    9,    TRNS, TRNS, INS, MSTP, MPLY, \
  		     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 4,    5,    6, TRNS, TRNS, TRNS, MSEL, \
  		     LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 1,    2,    3, TRNS, RSFT, VOLU, PAUS, \
  		     RCTL, APP, RALT,                  SPC,                     BSLS, MUTE, MPRV, VOLD, MNXT) 
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)  // to Fn overlay
};

