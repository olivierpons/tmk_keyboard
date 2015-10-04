/*---------------------------------------------------
 * AZERTY design
 * Olivier Pons - http://olivierpons.fr
 *                olivier dot pons at gmail dot com
 */
// Special KEYMAPPING for easy readability:
#define ERGODOX_KEYMAP( \
    L01,L02,L03,L04,L05,L06,L07,    R01,R02,R03,R04,R05,R06,R07, \
    L08,L09,L10,L11,L12,L13,L14,    R08,R09,R10,R11,R12,R13,R14, \
    L15,L16,L17,L18,L19,L20,            R15,R16,R17,R18,R19,R20, \
    L21,L22,L23,L24,L25,L26,L27,    R21,R22,R23,R24,R25,R26,R27, \
    L28,L29,L30,L31,L32,                    R28,R29,R30,R31,R32, \
                         L33,L34,   R33,R34, \
                             L35,   R35, \
                     L36,L37,L38,   R36,R37,R38 \
    ) \
    KEYMAP(L01,L02,L03,L04,L05,L06,L07,L08,L09,L10,L11, \
        L12,L13,L14,L15,L16,L17,L18,L19,L20,L21,L22, \
        L23,L24,L25,L26,L27,L28,L29,L30,L31,L32,L33, \
        L34,L35,L36,L37,L38,R01,R02,R03,R04,R05,R06, \
        R07,R08,R09,R10,R11,R12,R13,R14,R15,R16,R17, \
        R18,R19,R20,R21,R22,R23,R24,R25,R26,R27,R28, \
        R29,R30,R31,R32,R33,R34,R35,R36,R37,R38 \
    )
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: Default Layer in AZERTY / Layer0: default
     */
    ERGODOX_KEYMAP( // Layer 0 : (key) and (shifted key)
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |   Esc  |  & 1 |  é 2 |  " 3 |  ' 4 |  ( 5 |  ^L3 |           | Pscr |  - 6 |  è 7 |  _ 8 |  ç 9 |  à 0 |  Bspc  | */
           ESC  ,   1  ,   2  ,   3  ,   4  ,   5  ,  FN3 ,             PSCR ,   6  ,   7  ,   8  ,   9  ,   0  ,  BSPC  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |   Tab  |  a A |  z Z |  e E |  r R |  t T | Bspc |           |   +  |  y Y |  u U |  i I |  o O |  p P |   ^ ¨  | */
           TAB  ,   Q  ,   W  ,   E  ,   R  ,   T  , BSPC ,             PPLS ,   Y  ,   U  ,   I  ,   O  ,   P  ,   LBRC ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |    .   |  q Q |  s S |  d D |  f F |  g G |------|           |------|  h H |  j J |  k K |  l L |  m M |  Enter | */
          PDOT  ,   A  ,   S  ,   D  ,   F  ,   G  ,                             H  ,   J  ,   K  ,   L  , SCLN ,   ENT  ,
    /* |--------+------+------+------+------+------|  Del |           |   -  |------+------+------+------+------+--------| */
    /* |  LSft  |  w W |  x X |  c C |  v V |  b B |      |           |      |  n N |  , ? |  ; . |  : / |  ! § |  RSft  | */
          LSFT  ,   Z  ,   X  ,   C  ,   V  ,   B  ,  DEL ,             PMNS ,   N  ,   M  , COMM ,  DOT , SLASH,  RSFT  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   | LCtl | LGui | LAlt | Bspc |  Del |                                       |  Spc | RSft | RAlt | RGui | RCtl |   */
           LCTL , LGUI , LALT , BSPC ,  DEL ,                                          SPC , RSFT , RALT , RGUI , RCTL ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        | Copy | Pste |       |   <> |  ^L5 |                                        */
                                                FN25 , FN27 ,         FN15 ,  FN5 ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |  Cut |       |  </> |      |      |                                 */
                                                       FN26 ,         FN16 ,
    /*                                 |  ~L1 |  ~L2 |------|       |------|  ~L2 |  ~L1 |                                 */
    /*                                 |      |      |  Del |       | Nbsp |      |      |                                 */
                                          FN1 ,  FN2 ,  DEL ,         FN17 ,  FN2 ,  FN1
    /*                                 `--------------------'       `--------------------'                                 */
    ),

    ERGODOX_KEYMAP( // Layer 1
    // left hand = chars for developper                                right hand = moving cursor + cut/copy/paste
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |   Esc  |   F1 |   F2 |   F3 |   F4 |   F5 |   F6 |           |   F7 |   F8 |   F9 |  F10 |  F11 |  F12 |  Bspc  | */
           ESC  ,   F1 ,   F2 ,   F3 ,   F4 ,   F5 ,   F6 ,               F7 ,   F8 ,   F9 ,  F10 ,  F11 ,  F12 ,  BSPC  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |   Tab  |   \  |   *  |   $  |   {  |   }  |   ~  |           |   +  | PgUp | Ct-← |   ↑  | Ct-→ | PgDn |   ^ ¨  | */
           TAB  , FN13 , BSLS , RBRC , FN10 , FN30 ,  FN8 ,             PPLS , PGUP , FN28 ,  UP  , FN29 , PGDN ,   LBRC ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |    #   |   =  |   |  |   /  |   (  |   )  |------|           |------| Home |   ←  |   ↓  |   →  |  End |  Enter | */
           FN9  ,  EQL , FN12 , FN24 ,   5  , MINS ,                           HOME , LEFT , DOWN , RGHT ,  END ,   ENT   ,
    /* |--------+------+------+------+------+------|   %  |           |   -  |------+------+------+------+------+--------| */
    /* |  LSft  |   <  |   @  |   >  |   [  |   ]  |      |           |      |   %  | Copy |  Ins | Pste | PEnt |  RSft  | */
          LSFT  , NUBS , FN14 , FN23 , FN11 , FN31 , FN21 ,             PMNS , FN21 , FN25 ,  INS , FN27 , PENT ,  RSFT  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   | LCtl | LGui | LAlt | Bspc |  Del |                                       |  Spc |   .  | RAlt | RGui | RCtl |   */
           LCTL , LGUI , LALT , BSPC ,  DEL ,                                          SPC , PDOT , RALT , RGUI , RCTL ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |   -  |   -  |       |   -  |    - |                                        */
                                                TRNS , TRNS ,         TRNS , TRNS ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                       TRNS ,         TRNS ,
    /*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                         TRNS , TRNS , TRNS ,         TRNS , TRNS , TRNS
    /*                                 `--------------------'       `--------------------'                                 */

    ),

    ERGODOX_KEYMAP( // Layer 2
    // left hand = accented chars i could not put before              right hand = full keypad
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |   Esc  |   -  |   -  |   -  |   -  |   -  |   -  |           |   -  |   -  | NLCK |   /  |   *  |   -  |  Bspc  | */
           ESC  , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,             TRNS , TRNS , NLCK , PSLS , PAST , PMNS ,  BSPC  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |   Tab  |   â  |   à  |   û  |   ù  |   -  |   -  |           |   +  |  , ? |   7  |   8  |   9  |   +  |   ^ ¨  | */
           TAB  , FN19 ,   0  , FN22 , QUOT , TRNS , TRNS ,             PPLS ,   M  ,  P7  ,  P8  ,  P9  , PPLS ,   LBRC ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |     -  |   -  |   ë  |   é  |   è  |   ô  |------|           |------|  , ? |   4  |   5  |   6  |   +  |   PEnt | */
           TRNS , TRNS , FN20 ,   2  ,   7  , FN18 ,                             M  ,  P4  ,  P5  ,  P6  , PPLS ,   PENT ,
    /* |--------+------+------+------+------+------|   %  |           |   -  |------+------+------+------+------+--------| */
    /* |  LSft  |   -  |   -  |   -  |   -  |   -  |      |           |      |  , ? |   1  |   2  |   3  |  , ? |  RSft  | */
          LSFT  , TRNS , TRNS , TRNS , TRNS , TRNS , FN21 ,             PMNS ,   M  ,  P1  ,  P2  ,  P3  ,   M  ,  RSFT  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   | LCtl | LGui | LAlt | Bspc |  Del |                                       |   0  |   .  | RAlt | RGui | RCtl |   */
           LCTL , LGUI , LALT , BSPC ,  DEL ,                                          P0  , PDOT , RALT , RGUI , RCTL ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |   -  |   -  |       |   -  |    - |                                        */
                                                TRNS , TRNS ,         TRNS , TRNS ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                       TRNS ,         TRNS ,
    /*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                         TRNS , TRNS , TRNS ,         TRNS , TRNS , TRNS
    /*                                 `--------------------'       `--------------------'                                 */

    ),

    ERGODOX_KEYMAP( // Layer 3 - Photoshop
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |   Esc  |   F1 |   F2 |   F3 |   F4 |   F5 |  ^L4 |           |  ^L0 |   F8 |   F9 |  F10 |  F11 |  F12 |  Bspc  | */
           ESC  ,   F1 ,   F2 ,   F3 ,   F4 ,   F5 ,  FN4 ,              FN7 ,   F8 ,   F9 ,  F10 ,  F11 ,  F12 ,  BSPC  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |   Tab  |  a A |  z Z |  e E |  r R |  t T | Bspc |           |   +  |   7  |   7  |   8  |   9  |   +  |   ^ ¨  | */
            TAB ,   Q  ,   W  ,   E  ,   R  ,   T  , BSPC ,             PPLS ,  P7  ,  P7  ,  P8  ,  P9  , PPLS ,   LBRC ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |    .   |  q Q |  s S |  d D |  f F |  g G |------|           |------|   4  |   4  |   5  |   6  |   +  |   PEnt | */
          PDOT  ,   A  ,   S  ,   D  ,   F  ,   G  ,                            P4  ,  P4  ,  P5  ,  P6  , PPLS ,   PENT ,
    /* |--------+------+------+------+------+------|  Ent |           |   -  |------+------+------+------+------+--------| */
    /* |  LSft  |  w W |  x X |  c C |  v V |  b B |      |           |      |   1  |   1  |   2  |   3  | PEnt |  RSft  | */
          LSFT  ,   Z  ,   X  ,   C  ,   V  ,   B  ,  ENT ,             PMNS ,  P1  ,  P1  ,  P2  ,  P3  , PENT ,  RSFT  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   | LCtl | LGui | LAlt | Bspc |  Del |                                       |   0  |   .  | RAlt | RGui | RCtl |   */
           LCTL , LGUI , LALT , BSPC ,  DEL ,                                          P0  , PDOT , RALT , RGUI , RCTL ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |   -  |   -  |       |   -  |    - |                                        */
                                                TRNS , TRNS ,         TRNS , TRNS ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                       TRNS ,         TRNS ,
    /*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                         TRNS , TRNS , TRNS ,         TRNS , TRNS , TRNS
    /*                                 `--------------------'       `--------------------'                                 */
    ),

    ERGODOX_KEYMAP( // Layer 4 for my sons - Trackmania
    // left hand - my son Thibault                                    right hand - my daughter Ines
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |   Esc  |  & 1 |  é 2 |  " 3 |  ' 4 |  ( 5 |  ^L5 |           |  ^L0 |  -   |  -   |  -   |  -   |  -   |   -    | */
           ESC  ,   1  ,   2  ,   3  ,   4  ,   5  ,  FN5 ,              FN7 ,  NO  ,  NO  ,  NO  ,  NO  ,  NO  ,   NO   ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |   -    | Bspc |  z Z |  Del |  -   |  -   |  -   |           |  -   |  -   | Bspc |   ↑  |  Del |  -   |   -    | */
           NO   , BSPC ,   W  ,  DEL ,  NO  ,  NO  ,  NO  ,              NO  ,  NO  , BSPC ,  UP  ,  DEL ,  NO  ,   NO   ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |   -    |  q Q |  s S |  s S |   -  |   -  |------|           |------|   -  |   ←  |   ↓  |   →  |   -  |  Enter | */
           NO   ,   A  ,   S  ,   S  ,   NO ,   NO ,                             NO , LEFT , DOWN , RGHT ,   NO ,   ENT  ,
    /* |--------+------+------+------+------+------|   -  |           |   -  |------+------+------+------+------+--------| */
    /* |   -    |  -   |  -   |  -   |  -   |  -   |      |           |      |  -   |  -   |  -   |  -   |  -   |   -    | */
           NO   ,  NO  ,  NO  ,  NO  ,  NO  ,  NO  ,  NO  ,               NO ,  NO  ,  NO  ,  NO  ,  NO  ,  NO  ,   NO   ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   |  -   |  -   | LAlt |   -  |  -   |                                       |  -   |  -   |  -   |  -   |  -   |   */
            NO  ,  NO  , LALT ,  NO  ,  NO  ,                                          NO  ,  NO  ,  NO  ,  NO  ,  NO  ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |   -  |   -  |       |   -  |   -  |                                        */
                                                  NO ,   NO ,          NO  ,  NO  ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                         NO ,           NO ,
    /*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                           NO ,   NO ,   NO ,           NO ,   NO ,   NO
    /*                                 `--------------------'       `--------------------'                                 */
    ),

    ERGODOX_KEYMAP( // Layer 5 - for gaming : left = WASD
    // left hand = for gaming : left = WASD                           right hand = moving cursor + cut/copy/paste
    /* ,--------------------------------------------------.           ,--------------------------------------------------. */
    /* |   Esc  |  & 1 |  é 2 |  " 3 |  ' 4 |  ( 5 |  ^L0 |           |  ^L0 |  - 6 |  è 7 |  _ 8 |  ç 9 |  à 0 |  Bspc  | */
           ESC  ,   1  ,   2  ,   3  ,   4  ,   5  ,  FN7 ,              FN7 ,   6  ,   7  ,   8  ,   9  ,   0  ,  BSPC  ,
    /* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    /* |   Tab  |  y Y |  u U |  i I |  o O |  p P | Bspc |           |   +  |  t T |  a A |  z Z |  e E |  r R |   ^ ¨  | */
           TAB  ,   Y  ,   U  ,   I  ,   O  ,   P  , BSPC ,             PPLS ,   T  ,   Q  ,   W  ,   E  ,   R  ,   LBRC ,
    /* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    /* |    .   |  h H |  j J |  k K |  l L |  m M |------|           |------|  g G |  q Q |  s S |  d D |  f F |  Enter | */
          PDOT  ,   H  ,   J  ,   K  ,   L  , SCLN ,                             G  ,   A  ,   S  ,   D  ,   F  ,   ENT  ,
    /* |--------+------+------+------+------+------|  x X |           |   -  |------+------+------+------+------+--------| */
    /* |  RSft  |  , ? |  ; . |  : / |  ! § |  b B |      |           |      |  b B |  w W |  x X |  c C |  v V |  LSft  | */
          RSFT  ,   M  , COMM ,  DOT , SLASH,   B  ,   X  ,             PMNS ,   B  ,   Z  ,   X  ,   C  ,   V  ,  LSFT  ,
    /* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    /*   | RCtl | LGui | LAlt |  Del |  x X |                                       |  Spc | RSft | RAlt | RGui | LCtl |   */
           RCTL , LGUI , LALT ,  DEL ,   X  ,                                          SPC , RSFT , RALT , RGUI , LCTL ,
    /*   `----------------------------------'                                       `----------------------------------'   */
    /*                                        ,-------------.       ,-------------.                                        */
    /*                                        |  ^L0 |  ^L0 |       |  ^L0 |  ^L0 |                                        */
                                                 FN7 ,  FN7 ,          FN7 ,  FN7 ,
    /*                                 ,------|------|------|       |------+------+------.                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                                       TRNS ,         TRNS ,
    /*                                 |  Spc |   -  |------|       |------|   -  |   -  |                                 */
    /*                                 |      |      |   -  |       |   -  |      |      |                                 */
                                          SPC , TRNS , TRNS ,         TRNS , TRNS , TRNS
    /*                                 `--------------------'       `--------------------'                                 */

    ),


    //ERGODOX_KEYMAP( // LayerN: fully transparent
    ///* ,--------------------------------------------------.           ,--------------------------------------------------. */
    ///* |    -   |   -  |   -  |   -  |   -  |   -  |   -  |           |   -  |   -  |   -  |   -  |   -  |   -  |   -    | */
    //       TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,             TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,  TRNS  ,
    ///* |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------| */
    ///* |    -   |   -  |   -  |   -  |   -  |   -  |   -  |           |   -  |   -  |   -  |   -  |   -  |   -  |   -    | */
    //       TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,             TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,  TRNS  ,
    ///* |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------| */
    ///* |    -   |   -  |   -  |   -  |   -  |   -  |------|           |------|   -  |   -  |   -  |   -  |   -  |   -    | */
    //       TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,                           TRNS , TRNS , TRNS , TRNS , TRNS ,  TRNS  ,
    ///* |--------+------+------+------+------+------|   -  |           |   -  |------+------+------+------+------+--------| */
    ///* |    -   |   -  |   -  |   -  |   -  |   -  |      |           |      |   -  |   -  |   -  |   -  |   -  |   -    | */
    //       TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,             TRNS , TRNS , TRNS , TRNS , TRNS , TRNS ,  TRNS  ,
    ///* `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------' */
    ///*   |  -   |   -  |   -  |   -  |   -  |                                       |   -  |   -  |   -  |   -  |   -  |   */
    //       TRNS , TRNS , TRNS , TRNS , TRNS ,                                         TRNS , TRNS , TRNS , TRNS , TRNS ,
    ///*   `----------------------------------'                                       `----------------------------------'   */
    ///*                                        ,-------------.       ,-------------.                                        */
    ///*                                        |   -  |   -  |       |   -  |   -  |                                        */
    //                                            TRNS , TRNS ,         TRNS , TRNS ,
    ///*                                 ,------|------|------|       |------+------+------.                                 */
    ///*                                 |      |      |   -  |       |   -  |      |      |                                 */
    //                                                   TRNS ,         TRNS ,
    ///*                                 |   -  |   -  |------|       |------|   -  |   -  |                                 */
    ///*                                 |      |      |   -  |       |   -  |      |      |                                 */
    //                                     TRNS , TRNS , TRNS ,         TRNS , TRNS , TRNS
    ///*                                 `--------------------'       `--------------------'                                 */
    //),

};

/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
    CUSTOM_KEY,
    L_CTRL_ALT_ENT,
    R_CTRL_ALT_ENT,
};

enum macro_id {

    MACRO_ID_LTGT,
    MACRO_ID_LTGT_SLASH,
    MACRO_ID_NBSP,

    MACRO_ID_O_CIRC,
    MACRO_ID_A_CIRC,
    MACRO_ID_E_UML,
    MACRO_ID_E_CIRC,
    MACRO_ID_U_CIRC,
    MACRO_ID_TIRET,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [ 0] = ACTION_FUNCTION(TEENSY_KEY),           // FN0  - Teensy key
    [ 1] = ACTION_LAYER_MOMENTARY(1),             // FN1 -
    [ 2] = ACTION_LAYER_MOMENTARY(2),             // FN2 -
    //[ 3] = ACTION_LAYER_TOGGLE(3),                // FN3 - Go to layer 3
    //[ 4] = ACTION_LAYER_TOGGLE(4),                // FN4 - Go to layer 4
    //[ 5] = ACTION_LAYER_TOGGLE(5),                // FN5 - Go to layer 5
    //[ 6] = ACTION_LAYER_TOGGLE(6),                // FN6 - Go to layer 6
    //[ 7] = ACTION_LAYER_TOGGLE(0),                // FN7 - Go back to layer 0
    //[ 3] = ACTION_LAYER_SET(3, ON_BOTH),                // FN3 - Go to layer 3
    //[ 4] = ACTION_LAYER_SET(4, ON_BOTH),                // FN4 - Go to layer 4
    //[ 5] = ACTION_LAYER_SET(5, ON_BOTH),                // FN5 - Go to layer 5
    //[ 6] = ACTION_LAYER_SET(6, ON_BOTH),                // FN6 - Go to layer 6
    //[ 7] = ACTION_LAYER_SET(0, ON_BOTH),                // FN7 - Go back to layer 0
    [ 3] = ACTION_DEFAULT_LAYER_SET(3),                // FN3 - Go to layer 3
    [ 4] = ACTION_DEFAULT_LAYER_SET(4),                // FN4 - Go to layer 4
    [ 5] = ACTION_DEFAULT_LAYER_SET(5),                // FN5 - Go to layer 5
    [ 6] = ACTION_DEFAULT_LAYER_SET(6),                // FN6 - Go to layer 6
    [ 7] = ACTION_DEFAULT_LAYER_SET(0),                // FN7 - Go back to layer 0

    // Un-productive french keyboard => nicer shortcuts here!
    //[] = ACTION_MODS_KEY(MOD_RALT, KC_7),      // FN - ` (backquote)
    //[] = ACTION_MODS_KEY(MOD_RALT, KC_9),      // FN - ^ (exponent)
    [ 8] = ACTION_MODS_KEY(MOD_RALT, KC_2),      // FN8  - ~ (tilde)
    [ 9] = ACTION_MODS_KEY(MOD_RALT, KC_3),      // FN9  - # (sharp)
    [10] = ACTION_MODS_KEY(MOD_RALT, KC_4),      // FN10 - { (bracket left)
    [11] = ACTION_MODS_KEY(MOD_RALT, KC_5),      // FN11 - [ (parenth. left)
    [12] = ACTION_MODS_KEY(MOD_RALT, KC_6),      // FN12 - | (pipe)
    [13] = ACTION_MODS_KEY(MOD_RALT, KC_8),      // FN13 - \ (backslash)
    [14] = ACTION_MODS_KEY(MOD_RALT, KC_0),      // FN14 - @ (arobace)

    [15] = ACTION_MACRO(MACRO_ID_LTGT),          // FN15
    [16] = ACTION_MACRO(MACRO_ID_LTGT_SLASH),    // FN16
    [17] = ACTION_MACRO(MACRO_ID_NBSP),          // FN17

    [18] = ACTION_MACRO(MACRO_ID_O_CIRC),        // FN18 - ô
    //[] = ACTION_MACRO(MACRO_ID_A_CIRC),        // FN19 - â
    [19] = ACTION_MACRO(MACRO_ID_TIRET),         // FN19 - (long tiret)
    [20] = ACTION_MACRO(MACRO_ID_E_UML),         // FN20 - ë
    [21] = ACTION_MODS_KEY(MOD_RSFT, KC_QUOT),   // FN21 - % (percent)
    [22] = ACTION_MACRO(MACRO_ID_U_CIRC),        // FN22 - û
    [23] = ACTION_MODS_KEY(MOD_RSFT, KC_NUBS),   // FN23 - > (greater)
    [24] = ACTION_MODS_KEY(MOD_RSFT, KC_DOT),    // FN24 - / (slash)
    [25] = ACTION_MODS_KEY(MOD_LCTL, KC_INSERT), // FN25 - Copy
    [26] = ACTION_MODS_KEY(MOD_RSFT, KC_DELETE), // FN26 - Cut
    [27] = ACTION_MODS_KEY(MOD_RSFT, KC_INSERT), // FN27 - Paste
    [28] = ACTION_MODS_KEY(MOD_RCTL, KC_LEFT),   // FN28 - Ctrl - ←
    [29] = ACTION_MODS_KEY(MOD_RCTL, KC_RIGHT),  // FN29 - Ctrl - →
    [30] = ACTION_MODS_KEY(MOD_RALT, KC_EQL),    // FN30 - }
    [31] = ACTION_MODS_KEY(MOD_RALT, KC_MINS),   // FN31 - ]

};

#define MACRO_LTGT       MACRO( T(NUBS), D(RSFT), T(NUBS), U(RSFT), T(LEFT), END)
#define MACRO_LTGT_SLASH MACRO( T(NUBS), D(RSFT), T(DOT), T(NUBS), U(RSFT), T(LEFT), END)
#define MACRO_NBSP       MACRO( T(1), T(N), T(B), T(S), T(P), T(COMM), END)

#define MACRO_O_CIRC  MACRO( T(LBRC), T(O), END)
#define MACRO_A_CIRC  MACRO( T(LBRC), T(Q), END)
#define MACRO_E_UML   MACRO( D(RSFT), T(LBRC), U(RSFT), T(E), END)
#define MACRO_E_CIRC  MACRO( T(LBRC), T(E), END)
#define MACRO_U_CIRC  MACRO( T(LBRC), T(U), END)
#define MACRO_TIRET   MACRO( D(LALT), T(P0), T(P1), T(P5), T(P1), U(LALT), END)

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {

            case MACRO_ID_LTGT: return MACRO_LTGT;
            case MACRO_ID_LTGT_SLASH: return MACRO_LTGT_SLASH;
            case MACRO_ID_NBSP: return MACRO_NBSP;

            case MACRO_ID_O_CIRC: return MACRO_O_CIRC;
            case MACRO_ID_A_CIRC: return MACRO_A_CIRC;
            case MACRO_ID_E_UML:  return MACRO_E_UML;
            case MACRO_ID_E_CIRC: return MACRO_E_CIRC;
            case MACRO_ID_U_CIRC: return MACRO_U_CIRC;
            case MACRO_ID_TIRET:  return MACRO_TIRET;

        }
    }
    return MACRO_NONE;
}

#define FN_ACTIONS_SIZE         (sizeof(fn_actions)   / sizeof(fn_actions[0]))

/* translates Fn keycode to action */
action_t keymap_fn_to_action(uint8_t keycode)
{
    action_t action;
    action.code = ACTION_NO;
    // j'ai voulu reprendre le code de keymap_cub.h pour
    // mettre un "pack" de nouvelles fonctions pour une nouvelle couche,
    // mais ça ne fonctionne pas, alors je le laisse en commentaire,
    // et si vous voulez l'améliorer, ou carrément vous en servir et
    // le faire fonctionner, et si vous y arrivez, n'hésitez pas à
    // revenir vers moi :

    // if ((layer == 3) && (FN_INDEX(keycode) < FN_ACTIONS_LAYER_3_SIZE)) {
    //     action.code = pgm_read_word(&fn_actions_layer_3[FN_INDEX(keycode)]);
    // }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if ((action.code == ACTION_NO) && (FN_INDEX(keycode) < FN_ACTIONS_SIZE)) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }
    return action;
}
