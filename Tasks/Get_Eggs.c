//// Get_Eggs.c ////

const command get_eggs[] = {
	// Face and activate the lady
	{ LEFT,       5 },
	{ NOTHING,    5 },
	{ A,          5 },
	{ NOTHING,   20 },
	
	// Advance
	{ A,          5 },
	{ NOTHING,   20 },	

	// Dodge taking back Pokemon if an egg isn't ready
	{ DOWN,       5 },
	{ NOTHING,   20 },
	{ DOWN,       5 },
	{ A,          5 },
	{ NOTHING,  175 },
	
	// Advance
	{ A,          5 }, 
	{ NOTHING,   20 },
	
	// Face a way so if an egg isn't ready, we can't re-initiate conversation
	{ DOWN,       5 }, 
	{ NOTHING,  125 },
	
	// If we got an egg, finish taking it
	{ A,          5 },
	{ NOTHING,  100 },
	{ A,          5 },
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