def write_command(f, cmd, dur):
    f.write("\t{ " + cmd + ", " + dur + "},\n")
    
talk_to_lady        = [ [ "LEFT    ", "  5" ], 
                        [ "NOTHING ", "  5" ], 
                        [ "A       ", "  5" ], 
                        [ "NOTHING ", "  20" ] ]
                 
advance             = [ [ "A       ", "  5" ],
                        [ "NOTHING ", " 20" ] ]
                        
slow_advance        = [ [ "A       ", "  5" ],
                        [ "NOTHING ", "100" ] ]
                 
dont_take_pokemon   = [ [ "DOWN    ", "  5" ],
                        [ "NOTHING ", " 20" ],
                        [ "DOWN    ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "175" ] ]
                        
face_away           = [ [ "DOWN    ", "  5" ],
                        [ "NOTHING ", "125" ] ]
                        
send_to_box         = [ [ "DOWN    ", "  5" ],
                        [ "NOTHING ", "  5" ], 
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "125" ] ]
                        
walk_for_new_egg    = [ [ "DOWN    ", " 20" ],
                        [ "NOTHING ", " 30" ],
                        [ "RIGHT   ", "250" ],
                        [ "NOTHING ", " 30" ],
                        [ "LEFT    ", "250" ],
                        [ "NOTHING ", " 30" ],
                        [ "UP      ", " 30" ] ]
                        
setup_controller    = [ [ "NOTHING ", "250" ],
                        [ "TRIGGERS", "  5" ],
                        [ "NOTHING ", "100" ],
                        [ "TRIGGERS", "  5" ],
                        [ "NOTHING ", "100" ],
                        
                        [ "NOTHING ", " 1" ],
                        [ "NOTHING ", " 1" ],
                        [ "NOTHING ", " 1" ],
                        [ "NOTHING ", " 1" ],
                        [ "NOTHING ", " 1" ],
                        [ "NOTHING ", " 1" ],]

get_eggs            = [ setup_controller,
                        talk_to_lady,
                        advance,
                        dont_take_pokemon,
                        advance,
                        face_away,
                        send_to_box,
                        slow_advance,
                        advance,
                        walk_for_new_egg ]
                        
hatch_eggs          = [ setup_controller,
                        ]
                        
mode = "GETEGGS"
                    
scripts = []

if mode == "GETEGGS":
    s = get_eggs
elif mode == "HATCHEGGS":
    s = hatch_eggs
        
for i in s:
    scripts += i

script_file = open('./Tasks.c', 'w')

script_file.write("#include \"Tasks.h\"\n")
script_file.write("\n")
script_file.write("command script[] = {\n")

for i in scripts:
    write_command(script_file, i[0], i[1])
script_file.write("};")
    