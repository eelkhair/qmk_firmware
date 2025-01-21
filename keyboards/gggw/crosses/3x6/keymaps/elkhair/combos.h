#include <header.h>

enum combos {
    WY_TAB,
    DH_CAPS,
    HCOMA_MINS,
    WSPC_VIM,
    FU_QUOTE,
    PL_DQUOTE,
    CCOM_LARR,
    XDOT_FARR,
    GM_EPIP,
    COMD_UNDERS,
    ZDOT_BARR,
};


const uint16_t PROGMEM wy_combo[]     = {KC_W, KC_Y, COMBO_END};
const uint16_t PROGMEM dh_combo[]     = {KC_D, KC_H, COMBO_END};
const uint16_t PROGMEM hcomma_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM wspc_combo[]   = {KC_W, KC_SPC, COMBO_END};
const uint16_t PROGMEM fu_combo[]     = {KC_F, KC_U, COMBO_END};
const uint16_t PROGMEM pl_combo[]     = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM ccom_combo[]   = {KC_C, KC_COMM, COMBO_END};
const uint16_t PROGMEM xdot_combo[]   = {KC_X, KC_DOT, COMBO_END};
const uint16_t PROGMEM gm_combo[]     = {KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM comd_combo[]   = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM zdot_combo[]   = {KC_Z, KC_DOT, COMBO_END};

// clang-format off
//
combo_t key_combos[] = {
    [WY_TAB] = COMBO(wy_combo, KC_TAB),
    [DH_CAPS] = COMBO(dh_combo, CW_TOGG),
    [HCOMA_MINS] = COMBO(hcomma_combo, KC_MINS),
    [WSPC_VIM] = COMBO(wspc_combo, VIMS),
    [FU_QUOTE] = COMBO(fu_combo, KC_QUOT),
    [PL_DQUOTE] = COMBO(pl_combo, S(KC_QUOT)),
    [CCOM_LARR] = COMBO(ccom_combo, LARR),
    [XDOT_FARR] = COMBO(xdot_combo, FARR),
    [GM_EPIP] = COMBO(gm_combo, EPIP),
    [COMD_UNDERS] = COMBO(comd_combo, S(KC_MINS)),
    [ZDOT_BARR] = COMBO(zdot_combo, BARR),
};