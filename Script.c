#include "Script.h"

command script[] = {
	{ NOTHING , 200},
	{ TRIGGERS,   5},
	{ NOTHING ,   5},
	{ NOTHING , 100},
	{ TRIGGERS,   5},
	{ NOTHING ,   5},
	{ NOTHING , 100},
	{ NOTHING ,   1},
	{ NOTHING ,   1},
	{ NOTHING ,   1},
	{ NOTHING ,   1},
	{ X       ,   5},
	{ NOTHING , 100},
	{ A       ,   5},
	{ NOTHING , 100},
	{ R       ,   5},
	{ NOTHING , 100},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ LEFT    ,   5},
	{ NOTHING ,   5},
	{ DOWN    ,   5},
	{ NOTHING ,   5},
	{ A       ,   5},
	{ NOTHING ,  50},
	{ UP      ,   5},
	{ NOTHING ,  25},
	{ UP      ,   5},
	{ NOTHING ,   5},
	{ A       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ UP      ,   5},
	{ NOTHING ,   5},
	{ L       ,   5},
	{ NOTHING ,  25},
	{ A       ,   5},
	{ NOTHING ,   5},
	{ R       ,   5},
	{ NOTHING ,  25},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ DOWN    ,  25},
	{ NOTHING ,  25},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ PLUS    ,   5},
	{ NOTHING ,  25},
	{ RIGHT   , 825},
	{ NOTHING ,  15},
	{ PLUS    ,   5},
	{ NOTHING ,  25},
	{ X       ,   5},
	{ NOTHING , 100},
	{ A       ,   5},
	{ NOTHING , 100},
	{ R       ,   5},
	{ NOTHING , 100},
	{ UP      ,   5},
	{ NOTHING ,   5},
	{ UP      ,   5},
	{ NOTHING ,   5},
	{ A       ,   5},
	{ NOTHING ,  50},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ DOWN    ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ UP      ,   5},
	{ NOTHING ,   5},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ A       ,   5},
	{ NOTHING ,   5},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ X       ,   5},
	{ NOTHING , 100},
	{ A       ,   5},
	{ NOTHING , 100},
	{ R       ,   5},
	{ NOTHING , 100},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ Y       ,   5},
	{ NOTHING ,   5},
	{ L       ,   5},
	{ NOTHING ,  25},
	{ A       ,   5},
	{ NOTHING ,   5},
	{ UP      ,   5},
	{ NOTHING ,   5},
	{ A       ,   5},
	{ NOTHING ,   5},
	{ LEFT    ,   5},
	{ NOTHING ,   5},
	{ DOWN    ,   5},
	{ NOTHING ,   5},
	{ A       ,   5},
	{ NOTHING ,  50},
	{ RIGHT   ,   5},
	{ NOTHING ,   5},
	{ R       ,   5},
	{ NOTHING ,  25},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ B       ,   5},
	{ NOTHING , 100},
	{ LEFT    ,   5},
	{ NOTHING ,   5},
	{ PLUS    ,   5},
	{ NOTHING ,  25},
	{ LEFT    , 800},
	{ NOTHING ,  15},
	{ PLUS    ,   5},
	{ NOTHING ,  25},
	{ DOWN    ,  50},
	{ NOTHING ,  25},
	{ UP      , 100},
	{ NOTHING ,  25},
};