#include "planck.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _DEFAULT 0
#define _LSHIFT 1
#define _RSHIFT 2
#define _LRAISE 3
#define _RRAISE 4
#define _LLOWER 5
#define _RLOWER 6


enum planck_keycodes {
	DEFAULT = 0,
	LSHIFT = 1,
	RSHIFT = 2,
	LRAISE = 3,
	RRAISE = 4,
	LLOWER = 5,
	RLOWER = 6,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = {
		{ KC_ESC,	KC_Q,		KC_W,		KC_E,	KC_R,	KC_T,		KC_Y,		KC_U,	KC_I,		KC_O,		KC_P,		KC_BSPC},
		{ KC_TAB,   KC_A,		KC_S,		KC_D,	KC_F,	KC_G,		KC_H,		KC_J,	KC_K,		KC_L,		KC_SCOLON,	KC_ENT },
		{ LSHIFT,	KC_Z,		KC_X,       KC_C,	KC_V,	KC_B,		KC_N,		KC_M,	KC_LPRN,	KC_RPRN,	KC_SLASH,	RSHIFT },
		{ KC_LCTL,	KC_LGUI,	KC_LALT,	LLOWER,	LRAISE,	KC_SPC,		KC_SPC,		RRAISE,	RLOWER,		KC_RALT,	KC_RGUI,	KC_RCTL }
	},

	[_LSHIFT] = {
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_DOT,	KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
	},

	[_RSHIFT] = {
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_DOT,	KC_TRNS, KC_TRNS },
		{ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
	},

	[_LRAISE] = {
		{ KC_NO, KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,			KC_9,			KC_0,		KC_NO },
		{ KC_NO, KC_EXLM,	KC_AT,		KC_HASH,	KC_DLR,		KC_PERC,	KC_CIRC,	KC_AMPR,	KC_ASTR,		KC_MINS,		KC_PLUS,	KC_NO },
		{ KC_NO, KC_GRV,	KC_TILD,	KC_COMM,	KC_DOT,		KC_QUOTE,	KC_DQUO,	KC_NO,		KC_LBRACKET,	KC_RBRACKET,	KC_PIPE,	KC_NO },
		{ KC_NO, KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,		KC_NO,			KC_NO,		KC_NO }
	},

	[_RRAISE] = {
		{ KC_NO, KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,			KC_9,			KC_0,		KC_NO },
		{ KC_NO, KC_EXLM,	KC_AT,		KC_HASH,	KC_DLR,		KC_PERC,	KC_CIRC,	KC_AMPR,	KC_ASTR,		KC_MINS,		KC_PLUS,	KC_NO },
		{ KC_NO, KC_GRV,	KC_TILD,	KC_COMM,	KC_DOT,		KC_QUOTE,	KC_DQUO,	KC_NO,		KC_LBRACKET,	KC_RBRACKET,	KC_PIPE,	KC_NO },
		{ KC_NO, KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,		KC_NO,			KC_NO,		KC_NO }
	},

	[_LLOWER] = {
		{ KC_NO, KC_F1,			KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_NO },
		{ KC_NO, KC_F11,		KC_F12,		KC_UP,		KC_DELETE,	KC_END,		KC_HOME,	KC_PGUP,	KC_PGDN,	KC_UNDS,	KC_EQL,		KC_NO },
		{ KC_NO, KC_PSCREEN,	KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_NO,		KC_NO,		KC_NO,		KC_LCBR,	KC_RCBR,	KC_BSLS,	KC_NO },
		{ KC_NO, KC_NO,			KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_NO }
	},

	[_RLOWER] = {
		{ KC_NO, KC_F1,			KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_NO },
		{ KC_NO, KC_F11,		KC_F12,		KC_UP,		KC_DELETE,	KC_END,		KC_HOME,	KC_PGUP,	KC_PGDN,	KC_UNDS,	KC_EQL,		KC_NO },
		{ KC_NO, KC_PSCREEN,	KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_NO,		KC_NO,		KC_NO,		KC_LCBR,	KC_RCBR,	KC_BSLS,	KC_NO },
		{ KC_NO, KC_NO,			KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_TRNS,	KC_TRNS,	KC_NO,		KC_NO,		KC_NO }
	},
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case LSHIFT:
		if (record->event.pressed) {
			layer_on(_LSHIFT);
			register_code(KC_LSFT);
		}
		else {
			unregister_code(KC_LSFT);
			layer_off(_LSHIFT);

		}
		return false;
		break;
	case RSHIFT:
		if (record->event.pressed) {
			layer_on(_RSHIFT);
			register_code(KC_RSFT);
		}
		else {
			unregister_code(KC_RSFT);
			layer_off(_RSHIFT);
		}
		return false;
		break;
	case LRAISE:
		if (record->event.pressed) {
			layer_on(_LRAISE);
		}
		else {
			layer_off(_LRAISE);
		}
		return false;
		break;
	case RRAISE:
		if (record->event.pressed) {
			layer_on(_RRAISE);
		}
		else {
			layer_off(_RRAISE);
		}
		return false;
		break;
	case LLOWER:
		if (record->event.pressed) {
			layer_on(_LLOWER);
		}
		else {
			layer_off(_LLOWER);
		}
		return false;
		break;
	case RLOWER:
		if (record->event.pressed) {
			layer_on(_RLOWER);
		}
		else {
			layer_off(_RLOWER);
		}
		return false;
		break;
	}
	return true;
}