//// GET EGGS ////

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

static const command get_eggs[] = {
	{ LEFT,       5 }, // Face and activate the lady
	{ NOTHING,    5 },
	{ A,          5 },
	{ NOTHING,   20 },
	
	{ A,          5 }, // Advance
	{ NOTHING,   20 },	
	
	{ DOWN,       5 }, // Dodge Take Pokemon
	{ NOTHING,   20 },
	{ DOWN,       5 },
	{ A,          5 },
	{ NOTHING,  175 },
	
	{ A,          5 }, // Advance
	{ NOTHING,   20 },
	
	{ DOWN,       5 }, // Dodge Take Pokemon
	{ NOTHING,  125 },
	
	{ A,          5 }, // Advance (egg only)
	{ NOTHING,  100 },
	{ A,          5 }, // Advance (egg only)
	{ NOTHING,   10 },
	
	// Walk for new Egg and back
	{ DOWN,      20 },
	{ NOTHING,   30 },
	{ RIGHT,    250 },
	{ NOTHING,   30 },
	{ LEFT,     250 },
	{ NOTHING,   30 },
	{ UP,        30 },
};