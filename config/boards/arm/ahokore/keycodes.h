#include "ahokore.h"


#define XXXXXXX &none
#define _______ &trans

#define o_NAV_o &mo NAV
#define o_SPC_o &lt SYM SPACE
#define o_NUM_o &mo NUM

#define ___A___ &kp A
#define ___B___ &kp B
#define ___C___ &kp C
#define ___D___ &kp D
#define ___E___ &kp E
#define ___F___ &kp F
#define ___G___ &kp G
#define ___H___ &kp H
#define ___I___ &kp I
#define ___J___ &kp J
#define ___K___ &kp K
#define ___L___ &kp L
#define ___M___ &kp M
#define ___N___ &kp N
#define ___O___ &kp O
#define ___P___ &kp P
#define ___Q___ &kp Q
#define ___R___ &kp R
#define ___S___ &kp S
#define ___T___ &kp T
#define ___U___ &kp U
#define ___V___ &kp V
#define ___W___ &kp W
#define ___X___ &kp X
#define ___Y___ &kp Y
#define ___Z___ &kp Z

#define ___0___ &kp N0
#define ___1___ &kp N1
#define ___2___ &kp N2
#define ___3___ &kp N3
#define ___4___ &kp N4
#define ___5___ &kp N5
#define ___6___ &kp N6
#define ___7___ &kp N7
#define ___8___ &kp N8
#define ___9___ &kp N9

#define __DOT__ &kp DOT
#define _COMMA_ &kp COMMA
//#define _SQUOT_ KC_QUOTE
//#define _DQUOT_ KC_DOUBLE_QUOTE
//#define _COLON_ KC_COLON
//#define _SCOLN_ KC_SCOLON
//#define _TILDE_ LSFT(KC_GRAVE)
//#define _GRAVE_ KC_GRAVE
//#define _UNDRS_ KC_UNDERSCORE
//#define _EQUAL_ KC_EQUAL
//#define _MINUS_ KC_MINUS
//#define _PLUS__ KC_PLUS
//#define _ASTER_ KC_ASTERISK
//#define _HASH__ KC_HASH
//#define _DOLLR_ KC_DOLLAR
//#define _SLASH_ KC_SLASH
//#define _BSLSH_ KC_BSLASH
//#define _PERCT_ KC_PERCENT
//#define _AMPRS_ KC_AMPERSAND
//#define _QUEST_ KC_QUESTION
//#define _EXCLM_ KC_EXCLAIM
//#define _CIRCF_ KC_CIRCUMFLEX
//#define _PIPE__ LSFT(KC_BSLS)
//#define __AT___ KC_AT
//

#define _SPACE_ &kp SPACE
#define __TAB__ &kp TAB
#define _ENTER_ &kp ENTER
#define _BKSPC_ &kp BACKSPACE
#define __ESC__ &kp ESCAPE

#define _LSHFT_ &kp LEFT_SHIFT
#define _LCTRL_ &kp LEFT_CONTROL
#define _LALT__ &kp LEFT_ALT
#define _LCMD__ &kp LEFT_COMMAND



// WORKS FOR ABC EXTENDED
//#define _ARING_ ROPT(KC_A)
//#define _OSLSH_ ROPT(KC_O)
//#define _AELIG_ ROPT(KC_QUOTE)
//
//#define _LPARN_ KC_LEFT_PAREN
//#define _RPARN_ KC_RIGHT_PAREN
//#define _LCBRC_ KC_LEFT_CURLY_BRACE
//#define _RCBRC_ KC_RIGHT_CURLY_BRACE
//#define _LBRAC_ KC_LBRACKET
//#define _RBRAC_ KC_RBRACKET
//#define _LABRC_ KC_LEFT_ANGLE_BRACKET
//#define _RABRC_ KC_RIGHT_ANGLE_BRACKET
//
//#define _LEFT__ KC_LEFT
//#define __UP___ KC_UP
//#define _DOWN__ KC_DOWN
//#define _RIGHT_ KC_RIGHT
//
//#define n_TABL_ LSFT(LCMD(_LBRAC_))
//#define n_TABR_ LSFT(LCMD(_RBRAC_))
//
//#define _RESET_ RESET
//
//#define MAC_UNDO LCMD(KC_Z)
//#define MAC_REDO LSFT(LCMD(KC_Z))
//#define MAC_COPY LCMD(KC_C)
//#define MAC_PASTE LCMD(KC_V)
//#define MAC_CUT LCMD(KC_X)
//#define MAC_SELECT_ALL LCMD(KC_A)
//#define MAC_PASTE_MATCH LSFT(LOPT(LCMD(KC_C)))
//
//#define _BRIMN_ KC_F14
//#define _BRIMX_ KC_F15
//
//#define _DSKT1_ HYPR(___1___)
//#define _DSKT2_ HYPR(___2___)
//#define _DSKT3_ HYPR(___3___)
//#define _DSKT4_ HYPR(___4___)
//#define _DSKT5_ HYPR(___5___)
//#define _DSKT6_ HYPR(___6___)
//
//#define _SCRSH_ LCMD(LSFT(___4___))
