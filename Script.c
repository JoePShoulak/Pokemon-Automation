#include "Script.h"

int run_limit = 8;

command script[] = {
	{ PAUSE, 200},
	{ TRIGS,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ TRIGS,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT, 300},
	{ PAUSE,  25},
	{ PAUSE,  25},
	{ LEFT , 300},
	{ PAUSE,  25},
	{ UP   ,  50},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ A    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ L    ,   5},
	{ PAUSE,  25},
	{ A    ,   5},
	{ PAUSE,   5},
	{ R    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ DOWN ,  25},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 825},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 850},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ B    ,   5},
	{ PAUSE, 900},
	{ B    ,   5},
	{ PAUSE, 200},
	{ B    ,   5},
	{ PAUSE, 200},
	{ RIGHT,   5},
	{ PAUSE,  50},
	{ RIGHT, 875},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ UP   ,   5},
	{ PAUSE,  25},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ X    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ Y    ,   5},
	{ PAUSE,   5},
	{ L    ,   5},
	{ PAUSE,  25},
	{ A    ,   5},
	{ PAUSE,   5},
	{ UP   ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,   5},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ DOWN ,   5},
	{ PAUSE,   5},
	{ A    ,   5},
	{ PAUSE,  50},
	{ RIGHT,   5},
	{ PAUSE,   5},
	{ R    ,   5},
	{ PAUSE,  25},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ B    ,   5},
	{ PAUSE, 100},
	{ LEFT ,   5},
	{ PAUSE,   5},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ LEFT , 800},
	{ PAUSE,  15},
	{ PLUS ,   5},
	{ PAUSE,  25},
	{ DOWN ,  50},
	{ PAUSE,  25},
	{ UP   , 100},
	{ PAUSE,  25},
	{ X    ,   5},
	{ PAUSE, 100},
	{ R    ,   5},
	{ PAUSE, 100},
	{ A    ,   5},
	{ PAUSE,   5},
	{ PAUSE, 200},
};