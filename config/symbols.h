#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp RC(Z)
#define X_CUT   &kp RC(X)
#define X_COPY  &kp RC(W)
#define X_PASTE &kp RC(V)
#define X_REDO  &kp RC(P)

#define X_CLOSE &kp RC(T)
#define X_SAVE  &kp RC(S)
#define X_ALL   &kp RC(A)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp CARET
#define S_LT    &kp RA(W)
#define S_GT    &kp RA(E)
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp RPAR
#define S_AMPS  &kp AMPS
#define S_STAR  &kp STAR
#define S_SQT   &kp SQT
#define S_GRAVE &kp GRAVE

// second row
#define S_LBRC  &kp LBRC
#define S_LPAR  &kp RA(S)
#define S_RPAR  &kp RA(D)
#define S_RBRC  &kp RBRC
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp BSLH
#define S_PLUS  &kp PLUS
#define S_MINUS &kp C
#define S_FSLH  &kp MINUS
#define S_DQT   &kp DQT

// third row
#define S_TILDE &kp TILDE
#define S_LBKT  &kp LBKT
#define S_RBKT  &kp RBKT
#define S_UNDER &kp UNDER
#define S_HASH  &kp LPAR
#define S_PIPE  &kp PIPE
#define S_EXCL  &kp RA(M)
#define S_SEMI  &kp RA(COMMA)
#define S_COLON &kp RA(DOT)
#define S_QMARK &kp RA(FSLH)

// extra
#define S_COMMA &kp DOT
#define S_DOT   &kp N
#define S_MONEY &kp LS(N1)

//numbers
#define S_N0  &kp N0
#define S_N1  &kp N1
#define S_N2  &kp N2
#define S_N3  &kp N3
#define S_N4  &kp N4
#define S_N5  &kp N5
#define S_N6  &kp N6
#define S_N7  &kp N7
#define S_N8  &kp N8
#define S_N9  &kp N9
