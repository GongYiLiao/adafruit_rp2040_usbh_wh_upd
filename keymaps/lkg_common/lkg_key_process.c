// #include "lkg_km_common.h"

#include "lkg_km_common.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
    case QK_MACRO_0: // C-x C-f
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_F)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_1: // C-x C-s
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_S)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_2: // C-x C-b
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_B)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_3: // C-x k ent 
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_K)SS_TAP(X_ENT));
      return false;
    case QK_MACRO_4:  // C-x 0
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_0));
      return false;
    case QK_MACRO_5:  // C-x 1
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_1));
      return false;
    case QK_MACRO_6:  // C-x 2
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_2));
      return false;
    case QK_MACRO_7:  // C-x 3
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_3));
      return false;
    case QK_MACRO_8:  // C-x C-w
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_W)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_9:  // C-x [
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_LBRC)SS_UP(X_LSFT));
      return false;
    case QK_MACRO_10: // C-x ]
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_RBRC)SS_UP(X_LSFT));
      return false;
    case QK_MACRO_11: // C-x 4 b
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_4)SS_TAP(X_B));
      return false;
    case QK_MACRO_12: // C-x 4 d
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_4)SS_TAP(X_D));
      return false;
    case QK_MACRO_13: // C-x ^
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LSFT)SS_TAP(X_6)SS_UP(X_LSFT));
      return false;
    case QK_MACRO_14: // C-x C-p
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_P)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_15: // C-x 0
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_5)SS_TAP(X_0));
      return false;
    case QK_MACRO_16: // C-x 5 1
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_5)SS_TAP(X_1));
      return false;
    case QK_MACRO_17: // C-x 5 2
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_5)SS_TAP(X_2));
      return false;
    case QK_MACRO_18: // C-x C-q
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_Q)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_19: //  C-x C-u
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_U)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_20: // C-x C-l
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_L)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_21: // C-x C-t
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_T)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_22: // C-c X-c
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL)SS_DOWN(X_LCTL)SS_TAP(X_C)SS_UP(X_LCTL));
      return false;
    case QK_MACRO_23: // C-x r s
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_S));
      return false;
    case QK_MACRO_24: // C-x r i
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_I));
      return false;
    case QK_MACRO_25: // (_)
      SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_9)SS_UP(X_LSFT)SS_DOWN(X_LSFT)SS_TAP(X_0)SS_UP(X_LSFT)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_26: // C-x C-r r
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_R));
      return false;
    case QK_MACRO_27: // C-x C-r k
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_K));
      return false;
    case QK_MACRO_28: // C-x C-r o
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_O));
      return false;
    case QK_MACRO_29: // C-x C-r t
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_T));
      return false;
    case QK_MACRO_30: // C-x C-r c
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_C));
      return false;
    case QK_MACRO_31: // C-x c-r y
      SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_X)SS_UP(X_LCTL)SS_TAP(X_R)SS_TAP(X_Y));
      return false;
    case QK_MACRO_32: // {_}
      SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_LBRC)SS_UP(X_LSFT)SS_DOWN(X_LSFT)SS_TAP(X_RBRC)SS_UP(X_LSFT)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_33: // [_]
      SEND_STRING(SS_TAP(X_LBRC)SS_TAP(X_RBRC)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_34: // <_>
      SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_COMM)SS_UP(X_LSFT)SS_DOWN(X_LSFT)SS_TAP(X_DOT)SS_UP(X_LSFT)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_35: // `_`
      SEND_STRING(SS_TAP(X_GRV)SS_TAP(X_GRV)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_36: // %_%
      SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_5)SS_UP(X_LSFT)SS_DOWN(X_LSFT)SS_TAP(X_5)SS_UP(X_LSFT)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_37: // "_"
      SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_QUOT)SS_UP(X_LSFT)SS_DOWN(X_LSFT)SS_TAP(X_QUOT)SS_UP(X_LSFT)SS_TAP(X_LEFT));
      return false;
    case QK_MACRO_38: // '_'
      SEND_STRING(SS_TAP(X_QUOT)SS_TAP(X_QUOT)SS_TAP(X_LEFT));
      return false;
    }
  }

  return true;
};
