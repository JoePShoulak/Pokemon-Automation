import os, sys
import subscripts

def write_command(command, file_to_write):
    action      = command[0]
    duration    = command[1]
    file_to_write.write("\t{ " + action + ", " + duration + "},\n")
    
setup_controller    = subscripts.get("setup_controller")
get_egg             = subscripts.get("get_egg")
get_eggs_box        = subscripts.get("get_eggs_box")
get_to_hatch        = subscripts.get("get_to_hatch")
hatch_eggs_box      = subscripts.get("hatch_eggs_box")
grab_eggs_to_hatch  = subscripts.get("grab_eggs_to_hatch")
bike_to_hatch_eggs  = subscripts.get("bike_to_hatch_eggs")
place_hatched_eggs  = subscripts.get("place_hatched_eggs")
reorganize_boxes_1  = subscripts.get("reorganize_boxes_1")
reorganize_boxes_2  = subscripts.get("reorganize_boxes_2")
reorganize_boxes_3  = subscripts.get("reorganize_boxes_3")
hatch_to_get        = subscripts.get("hatch_to_get")
save                = subscripts.get("save")
    
# CLI time TODO improve CLI if we're doing that
print ""

try:
    mode = sys.argv[1].upper()
except:
    print ">>! No mode selected. Try: python make_script.py HELP"
    print ">>! Exiting...\n"
    sys.exit()
    
if mode == "HELP":
    print ">>? Usage: python make_script.py [MODE] [ROWS]"
    print ">>?    MODE options:"
    print ">>?      GET:         get eggs"
    print ">>?      HATCH:       hatch a box of eggs"
    print ">>?      GETANDHATCH: get a box of eggs and hatch a box of eggs"
    print ">>?    HATCH options:"
    print ">>?      ROWS:        1, 2, or 3 are accepted options"
    print ""
    sys.exit()

if "HATCH" in mode:
    try:
        rows = int(sys.argv[2])
    except:
        print ">>! Number of rows not chosen. Defaulting to 1...\n"
        rows = 1
    if rows == 1:
        hatch_eggs_box  +=   reorganize_boxes_1
    elif rows == 2:
        hatch_eggs_box  +=   reorganize_boxes_2
    elif rows == 3:
        hatch_eggs_box  +=   reorganize_boxes_3
                                            
if mode == "GET": # (~16m30s/box)
    run_limit = -1 # This will cause the script to loop forever
    print ">>> Assembling script to get eggs... (~16m30s/box, ~2h12m/row)"
    script = subscripts.flatten([   setup_controller,
                                    get_egg ])
elif mode == "HATCH": # (~37m30s/box)
    run_limit = 8*rows
    print ">>> Assembling script to hatch %d row(s) of eggs... (~37m30s/box, ~5h/row)" % rows
    script = subscripts.flatten([   setup_controller,
                                    hatch_eggs_box,
                                    save ])
elif mode == "GETANDHATCH": # (time)
    run_limit = 8*rows
    print ">>> Assembling script to hatch eggs... (~55m/box, ~7h20m/row)"
    script = subscripts.flatten([   setup_controller,
                                    get_eggs_box,
                                    get_to_hatch,
                                    hatch_eggs_box,
                                    hatch_to_get,
                                    save ])
elif mode == "TEST": # Comment or uncomment out certain parts to make custom scripts
    run_limit = 2
    print ">>> Assembling test script..."
    script = subscripts.flatten([   setup_controller,
                                    #get_egg,
                                    get_eggs_box,
                                    get_to_hatch,
                                    #grab_eggs_to_hatch,
                                    #bike_to_hatch_eggs,
                                    #place_hatched_eggs,
                                    #reorganize_boxes,
                                    hatch_eggs_box,
                                    hatch_to_get,
                                    save
                                    ])

# Making our script file, Tasks.c
script_file = open('./Script.c', 'w') # Open the file we plan on writing this list to

script_file.write("#include \"Script.h\"\n\n") # Title in a comment at the top. Habit
script_file.write("int run_limit = %d;\n\n" % run_limit) # Pass our run_limit over to C
script_file.write("command script[] = {\n")    # Start our list

print ">>> Writing Script to Script.c..."

for command in script:
    write_command(command, script_file) # Put script in, formatted for c
    
script_file.write("};") # End list

script_file.close()

print ">>> Compiling C code...\n"
os.system('make')