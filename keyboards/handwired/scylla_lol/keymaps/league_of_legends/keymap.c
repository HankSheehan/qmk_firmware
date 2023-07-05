#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    
 * |   1  |   2  |   3  |   4  |   5  |   6  |
 * |------+------+------+------+------+------| 
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |               
 * |------+------+------+------+------+------|  
 * | ESC  |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+------|  
 * | LWIN |   Z  |   X  |   C  |   V  |   B  |
 * `-----------------------------------------/  
 *                             |      |SPACE | LCTL |     
 *                             |      |      |      |   
 *                             `--------------------|
 *                                    | LSFT | LALT |   
 *                                    |      |      | 
 *                                    `-------------/
 */

 [0] = LAYOUT(
  KC_1,     KC_2,   KC_3,    KC_4,    KC_5,    KC_6,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,
  KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,
  KC_LWIN,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,
                                      KC_LCTL, KC_SPC,  KC_LALT,
                                               KC_LSFT, KC_GRV
  )
};