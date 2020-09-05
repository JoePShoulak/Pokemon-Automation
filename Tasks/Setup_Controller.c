//// Setup_Controller.c  ////

#include "Setup_Controller.h"

command setup_controller[] = {
	{ NOTHING,  250 },
	{ TRIGGERS,   5 },
	{ NOTHING,  100 },
	{ TRIGGERS,   5 },
	{ NOTHING,  100 },

	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
	{ NOTHING,    1 },
};

int setup_controller_count = sizeof(setup_controller)/sizeof(setup_controller[0]);

