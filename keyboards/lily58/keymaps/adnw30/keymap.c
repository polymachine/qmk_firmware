#include QMK_KEYBOARD_H


#define CC_COMP OSM(MOD_RALT)
// Left-hand home row mods
#define MOD_I LGUI_T(KC_I)
#define MOD_E LALT_T(KC_E)
#define MOD_A LCTL_T(KC_A)
#define MOD_F5 LGUI_T(KC_F5)
#define MOD_F6 LALT_T(KC_F6)
#define MOD_F7 LCTL_T(KC_F7)
// Right-hand home row mods
#define MOD_T RCTL_T(KC_T)
#define MOD_R LALT_T(KC_R)
#define MOD_N RGUI_T(KC_N)
#define MOD_4 RCTL_T(KC_4)
#define MOD_5 LALT_T(KC_5)
#define MOD_6 RGUI_T(KC_6)
//combos
#define CC_BAK  LCTL(KC_Z)
#define CC_FWD  RCS(KC_Z)
#define CC_CUT  LCTL(KC_X)
#define CC_COP  LCTL(KC_C)
#define CC_PAS  LCTL(KC_V)
// #define CC_CUT LSFT(KC_DEL)
// #define CC_COP LCTL(KC_INS)
// #define CC_PAS LSFT(KC_INS)
enum layer_number {
  _KUQ = 0,
  _SYM,
  _NUM,
  _NAV,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Aus der NEO Welt
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   K  |   U  | Comp |   ,  |   Q  |                    |   V  |   G  |   C  |   L  |   F  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   H  |   I  |   E  |   A  |   O  |-------.    ,-------|   D  |   T  |   R  |   N  |   S  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   X  |   Y  |   .  |   '  |   J  |-------|    |-------|   B  |   P  |   W  |   M  |   Z  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | Esc  | App  |Space | / Shft  /       \ _Sym \  |Space | BkSp | Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_KUQ] = LAYOUT(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_NO,   KC_K,    KC_U,    CC_COMP, KC_COMM, KC_Q,                      KC_V,    KC_G,    KC_C,    KC_L,    KC_F,    KC_NO,
  KC_NO,   KC_H,    MOD_I,   MOD_E,   MOD_A,   KC_O,                      KC_D,    MOD_T,   MOD_R,   MOD_N,   KC_S,    KC_NO,
  KC_NO,   KC_X,    KC_Y,    KC_DOT,  KC_QUOT, KC_J,    KC_NO,   KC_NO,   KC_B,    KC_P,    KC_W,    KC_M,    KC_Z,    KC_NO,
                    KC_ESC,  KC_APP,  KC_SPC,  OSM(MOD_LSFT),    TO(1),   KC_SPC,  KC_BSPC, KC_DEL
),
/* Symbole
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  Esc |   @  | Comp |   $  |   %  |                    |   ^  |   {  |   }  |   ;  | BkSp |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  Tab |   =  |   !  |   ?  |   #  |-------.    ,-------|   [  |   (  |   )  |   ]  | Entr |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   `  |  Eur |      |   +  |   \  |-------|    |-------|   _  |   -  |      |   ?  | _Nav |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      | Ctrl | _KUQ | / Shft  /       \ _Num \  |Space | BkSp | Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SYM] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_ESC,  KC_AT,   CC_COMP, KC_DLR,  KC_PERC,                   KC_CIRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_BSPC, KC_NO,
  KC_NO,   KC_TAB,  KC_EQL,  KC_EXLM, KC_QUES, KC_HASH,                   KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_ENT,  KC_NO,
  KC_NO,   KC_GRV,  RALT(KC_5),KC_NO, KC_PLUS, KC_BSLS, KC_NO,   KC_NO,   KC_UNDS, KC_MINS, KC_NO,   KC_SLSH, TO(3),   KC_NO,
                    KC_NO,   KC_LCTL, TO(0),   OSM(MOD_LSFT),    TO(2),   KC_SPC,  KC_BSPC, KC_DEL   
),
/* Zahlen
  * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  F1  |  F2  |  F3  |  F4  |                    |   ^  |   7  |   8  |   9  | BkSp |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  F5  |  F6  |  F7  |  F8  |-------.    ,-------|   [  |   4  |   5  |   6  | Entr |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   `  |  F9  |  F10 |  F11 |  F12 |-------|    |-------|   _  |   1  |   2  |   3  | _Nav |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      | _KUQ | / Shft  /       \ _Sym \  |   0  |   .  |   ,  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_NUM] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,                     KC_SLSH, KC_7,    KC_8,    KC_9,    KC_BSPC, KC_NO,
  KC_NO,   KC_NO,   MOD_F5,  MOD_F6,  MOD_F7,  KC_F8,                     KC_MINS, MOD_4,   MOD_5,   MOD_6,   KC_ENT,  KC_NO,
  KC_NO,   KC_NO,   KC_F9,   KC_F10,  KC_F11,  KC_F11,  KC_NO,   KC_NO,   KC_EQL,  KC_1,    KC_2,    KC_3,    TO(3),   KC_NO,   
                    KC_NO,   CC_COMP, TO(0),   OSM(MOD_LSFT),    TO(1),   KC_0,    KC_DOT,  KC_COMM 
),
/* Navigation
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  Ins | Home |  Up  |  End | PgUp |                    | Prnt | Vol+ | Vol- | Mute | Caps |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  Tab | Left | Down |Right | PgDn |-------.    ,-------| Shft | Ctrl | Alt  | Gui  | Entr |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      | Back |  Cut | Copy |Paste | Fwd  |-------|    |-------| Play | Prev | Next | Paus | _Nav |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      | _KUQ | / Shft  /       \ _Num \  |Space | BkSp | Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_NAV] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   KC_PSCR, KC_VOLU, KC_VOLD, KC_MUTE, KC_CAPS, KC_NO,
  KC_NO,   KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_ENT,  KC_NO,
  KC_NO,   CC_BAK,  CC_CUT,  CC_COP,  CC_PAS,  CC_FWD,  KC_NO,   KC_NO,   KC_MPLY, KC_MPRV, KC_MNXT, KC_PAUS, TO(2),   KC_NO,   
                    KC_NO,   KC_NO,   TO(0),   OSM(MOD_LSFT),    TO(1),   KC_SPC,  KC_BSPC, KC_DEL
  )
};


