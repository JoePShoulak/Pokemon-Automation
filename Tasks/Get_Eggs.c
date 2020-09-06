//// Get_Eggs.c ////

#include "Get_Eggs.h"

command get_eggs[] = {
	{ LEFT   ,   5},
	{ NOTHING,   5},
	{ A      ,   5},
	{ NOTHING,   20},
	{ A      ,   5},
	{ NOTHING,  20},
	{ DOWN   ,   5},
	{ NOTHING,  20},
	{ DOWN   ,   5},
	{ A      ,   5},
	{ NOTHING, 175},
	{ A      ,   5},
	{ NOTHING,  20},
	{ DOWN   ,   5},
	{ NOTHING, 125},
	{ DOWN   ,   5},
	{ NOTHING,   5},
	{ A      ,   5},
	{ NOTHING, 125},
	{ A      ,   5},
	{ NOTHING, 100},
	{ A      ,   5},
	{ NOTHING,  20},
	{ DOWN   ,  20},
	{ NOTHING,  30},
	{ RIGHT  , 250},
	{ NOTHING,  30},
	{ LEFT   , 250},
	{ NOTHING,  30},
	{ UP     ,  30},
};

int get_eggs_count = sizeof(get_eggs)/sizeof(get_eggs[0]);