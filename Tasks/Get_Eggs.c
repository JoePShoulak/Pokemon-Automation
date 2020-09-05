//// Get_Eggs.c ////

#include "Get_Eggs.h"

command get_eggs[] = {
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

/* IDEA FOR NESTED STRUCTS ARRAYS WHATEVER

command get_new_egg[] = {
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
}

command walk_for_new_egg[] {
	// Walk for new Egg and back
	{ DOWN,      20 },
	{ NOTHING,   30 },
	{ RIGHT,    250 },
	{ NOTHING,   30 },
	{ LEFT,     250 },
	{ NOTHING,   30 },
	{ UP,        30 },
}

something_new get_5_eggs[] = {
	// 1
	{      get_new_egg, sizeof(     get_new_egg)/sizeof(     get_new_egg[0]) },
	{ walk_for_new_egg, sizeof(walk_for_new_egg)/sizeof(walk_for_new_egg[0]) },
	// 2
	{      get_new_egg, sizeof(     get_new_egg)/sizeof(     get_new_egg[0]) },
	{ walk_for_new_egg, sizeof(walk_for_new_egg)/sizeof(walk_for_new_egg[0]) },
	// 3
	{      get_new_egg, sizeof(     get_new_egg)/sizeof(     get_new_egg[0]) },
	{ walk_for_new_egg, sizeof(walk_for_new_egg)/sizeof(walk_for_new_egg[0]) },
	// 4
	{      get_new_egg, sizeof(     get_new_egg)/sizeof(     get_new_egg[0]) },
	{ walk_for_new_egg, sizeof(walk_for_new_egg)/sizeof(walk_for_new_egg[0]) },
	// 5
	{      get_new_egg, sizeof(     get_new_egg)/sizeof(     get_new_egg[0]) },
	{ walk_for_new_egg, sizeof(walk_for_new_egg)/sizeof(walk_for_new_egg[0]) },
}

*/

int get_eggs_count = sizeof(get_eggs)/sizeof(get_eggs[0]);