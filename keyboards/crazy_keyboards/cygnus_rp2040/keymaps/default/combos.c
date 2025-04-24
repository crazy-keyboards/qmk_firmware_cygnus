#include QMK_KEYBOARD_H

enum combos {
  EN_LANG,
  RU_LANG,
};

const uint16_t PROGMEM en_lang_combo[] = {KC_A, KC_Z, COMBO_END};
const uint16_t PROGMEM ru_lang_combo[] = {KC_SCLN, KC_SLSH, COMBO_END};

combo_t key_combos[] = {
  [EN_LANG] = COMBO(en_lang_combo, LCTL(LSFT(KC_1))),
  [RU_LANG] = COMBO(ru_lang_combo, LCTL(LSFT(KC_2))),
};