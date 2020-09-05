//// Hatch_Eggs.c ////

#include "Hatch_Eggs.h"

command hatch_eggs[] = {
	// Open Pokemon Boxes
	{ X,         5
	 },
	{ NOTHING,  40 },
	{ A,         5 },
	{ NOTHING,  60 },
	{ R,         5 },
	{ NOTHING, 100 },

	// Multiselect
	{ Y,         5 },
	{ NOTHING,   5 },
	{ Y,         5 },

	// Grab 5 eggs
	{ A,         5 },
	{ NOTHING,   5 },
	{ UP,        5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },

	// Place eggs in party
	{ LEFT,      5 },
	{ NOTHING,   5 },
	{ DOWN,      5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },

	// Reorganize box
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ UP,        5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },
	{ LEFT,      5 },
	{ NOTHING,   5 },
	{ UP,        5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },
	{ LEFT,      5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },

	// Exit Menu
	{ B,         5 },
	{ NOTHING,  75 },
	{ B,         5 },
	{ NOTHING,  75 },
	{ B,         5 },
	{ NOTHING,  75 },
		
	//// HATCH EGGS ////

	// Face Left
	{ LEFT,      5 },
	{ NOTHING,  15 },
	{ PLUS,      5 },
	{ NOTHING,  15 },
	
	// Left
	{ LEFT,    825 },
	{ NOTHING,  15 },

	// Face Right
	{ PLUS,      5 },
	{ NOTHING,  25 },
	{ RIGHT,     5 },
	{ NOTHING,  15 },
	{ PLUS,      5 },
	{ NOTHING,  15 },
	
	// Right
	{ RIGHT,   850 },
	{ NOTHING,  15 },

	// Face left
	{ PLUS,      5 },
	{ NOTHING,  25 },
	{ LEFT,      5 },
	{ NOTHING,  15 },
	{ PLUS,      5 },
	{ NOTHING,  15 },
	
	// Left
	{ LEFT,    825 },
	{ NOTHING,  15 },

	// Face Right
	{ PLUS,      5 },
	{ NOTHING,  25 },
	{ RIGHT,     5 },
	{ NOTHING,  15 },
	{ PLUS,      5 },
	{ NOTHING,  15 },
	
	// Right
	{ RIGHT,   850 },
	{ NOTHING,  15 },

	// Face Left
	{ PLUS,      5 },
	{ NOTHING,  25 },
	{ LEFT,      5 },
	{ NOTHING,  15 },
	{ PLUS,      5 },
	{ NOTHING,  15 },
	
	// Left
	{ LEFT,    825 },
	{ NOTHING,  15 },

	// Face Right
	{ PLUS,      5 },
	{ NOTHING,  25 },
	{ RIGHT,     5 },
	{ NOTHING,  15 },
	{ PLUS,      5 },
	{ NOTHING,  15 },
	
	// Right
	{ RIGHT,   850 },
	{ NOTHING,  15 },

	// Hatch 5 Eggs	
	{ A,         5 },
	{ NOTHING, 900 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ RIGHT,     5 },
	{ NOTHING,  30 },
	
	{ A,         5 },
	{ NOTHING, 900 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ RIGHT,     5 },
	{ NOTHING,  30 },
	
	{ A,         5 },
	{ NOTHING, 900 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ RIGHT,     5 },
	{ NOTHING,  30 },
	
	{ A,         5 },
	{ NOTHING, 900 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ RIGHT,     5 },
	{ NOTHING,  30 },

	{ A,         5 },
	{ NOTHING, 900 },
	{ B,        50 },
	{ NOTHING, 150 },
	{ B,        50 },

	// Right in case this command was missed because eggs were ready
	{ RIGHT,    10 },
	{ R_BOOST, 350 },
	{ RIGHT,    10 },
	{ R_BOOST, 400 },

	// Off Bike
	{ PLUS,       5 },
	{ NOTHING,   50 },
	

	//// STORE HATCHED POKEMON

	// Open Pokemon Boxes
	{ X,         5 },
	{ NOTHING,  40 },
	{ A,         5 },
	{ NOTHING,  60 },
	{ R,         5 },
	{ NOTHING, 100 },

	// Multiselect
	{ Y,         5 },
	{ NOTHING,  10 },
	{ Y,         5 },

	// Grab party
	{ LEFT,      5 },
	{ NOTHING,   5 },
	{ DOWN,      5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,  10 },
	{ UP,        5 },
	{ NOTHING,  10 },
	{ UP,        5 },
	{ NOTHING,   5 },
	{ A,         5 },

	// Place in correct row
	{ LEFT,      5 },
	{ NOTHING,   5 },
	{ UP,        5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },
	
	// View Boxes
	{ UP,        5 },
	{ NOTHING,   5 },
	{ UP,        5 },
	{ NOTHING,   5 },
	{ LEFT,      5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,  25 },

	// Shift Boxes Right
	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ Y,         5 },
	{ NOTHING,   5 },
	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ Y,         5 },
	{ NOTHING,   5 },

	{ RIGHT,     5 },
	{ NOTHING,   5 },
	{ A,         5 },
	{ NOTHING,   5 },
		
	// Exit Menu
	{ B,         5 },
	{ NOTHING, 100 },
	{ B,         5 },
	{ NOTHING, 100 },
	{ B,         5 },
	{ NOTHING, 100 },
	{ B,         5 },
	{ NOTHING, 100 },
	{ B,         5 },
	{ NOTHING, 100 },
	{ B,         5 },
	{ NOTHING, 100 },
};

int hatch_eggs_count = sizeof(hatch_eggs)/sizeof(hatch_eggs[0]);




