//// Command.h ////

// Declare Buttons
typedef enum {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	X,
	Y,
	A,
	B,
	L,
	R,
	L_BOOST,
	R_BOOST,
	NOTHING,
	PLUS,
	MINUS,
	TRIGGERS
} Buttons_t;

// Declare Object...?
typedef struct {
	Buttons_t button;
	uint16_t duration;
} command; 