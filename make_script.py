import os, sys
import subscripts
    
# Load in all the subscripts we may use
setup_controller    = subscripts.get("setup_controller")
save                = subscripts.get("save")

get_egg             = subscripts.get("get_egg")
get_eggs_box        = subscripts.get("get_eggs_box")

grab_eggs_to_hatch  = subscripts.get("grab_eggs_to_hatch")
bike_to_hatch_eggs  = subscripts.get("bike_to_hatch_eggs")
place_hatched_eggs  = subscripts.get("place_hatched_eggs")
hatch_eggs_box      = subscripts.get("hatch_eggs_box")

reorganize_boxes_1  = subscripts.get("reorganize_boxes_1")
reorganize_boxes_2  = subscripts.get("reorganize_boxes_2")
reorganize_boxes_3  = subscripts.get("reorganize_boxes_3")

get_to_hatch        = subscripts.get("get_to_hatch")
hatch_to_get        = subscripts.get("hatch_to_get")

message = {
    # Error messages
    "E_ROW_COUNT"   : ">>! No row count selected. Defaulting to one row...",
    "E_MODE_SEL"    : ">>! No mode selected. Try: python make_script.py HELP\n>>! Exiting...\n",
    "E_RUN_LIMIT"   : ">>! No run limit selected. Defaulting to infinite loop...\n",
    
    # Updates
    "U_WRITING"     : ">>> Writing Script to Script.c...",
    "U_COMPILING"   : ">>> Compiling C code...\n",
    
    # Help Message,
    "HELP"          :  "\n".join(  [
                       ">>? Usage: python make_script.py [MODE] [ROWS / RUN_LIMIT]",
                       ">>?    MODE options:",
                       ">>?      GET:         get eggs",
                       ">>?      HATCH:       hatch a box of eggs",
                       ">>?      GETANDHATCH: get a box of eggs and hatch a box of eggs",
                       ">>?      TEST:        uncomment subscripts to make a custom script",
                       ">>?    HATCH/GETANDHATCH options:",
                       ">>?      ROWS:        1, 2, or 3 are accepted options",
                       ">>?    TEST options:",
                       ">>?      RUN_LIMIT:   the number of times the script will run\n" ] ) 
}

# Make a list of our org_boxes so we can select. Empty first index so 1, 2, 3 matches index
reorganize_boxes    = ["", reorganize_boxes_1, reorganize_boxes_2, reorganize_boxes_3]
   
# Here we actually start doing things
run_limit   = -1    # Unless otherwise specified, script runs indefinitely
rows        =  1        
    
# CLI time TODO improve CLI if we're doing that
print ""

# Grab what mode we're in
try:
    mode = sys.argv[1].upper()
except:
    print message["E_MODE_SEL"]
    sys.exit()

# If we're hatching, we have to tweak one subscript before we finish defining our scripts
if "HATCH" in mode:
    try:
        rows = int(sys.argv[2])
        run_limit = 8*rows
        hatch_eggs_box += reorganize_boxes[rows]
    except:
        print message["E_ROW_COUNT"]
elif mode == "TEST": # If we're testing, let's grab the run_limit real quick
    try:
        run_limit = int(sys.argv[2])
    except:
        print message["E_RUN_LIMIT"]
elif mode == "HELP":
    print message["HELP"]
    sys.exit()
                
# We finish defining our scripts       
get_script              = subscripts.flatten([  setup_controller,
                                                get_egg ])
                                    
hatch_script            = subscripts.flatten([  setup_controller,
                                                hatch_eggs_box,
                                                save ])
                                    
get_and_hatch_script    = subscripts.flatten([  setup_controller,
                                                get_eggs_box,
                                                get_to_hatch,
                                                hatch_eggs_box,
                                                hatch_to_get,
                                                save ])
                                    
test_script             = subscripts.flatten([  setup_controller,
                                                #get_egg,
                                                get_eggs_box,
                                                #get_to_hatch,
                                                #grab_eggs_to_hatch,
                                                #bike_to_hatch_eggs,
                                                #place_hatched_eggs,
                                                #reorganize_boxes,
                                                #hatch_eggs_box,
                                                #hatch_to_get,
                                                save
                                                ])
                                                
# message to the user in command line
message.update( {
    # Mode run messages
    "GET"           :  ">>> Scripting to get eggs... (~16m30s/box, ~2h12m/row)",
    "HATCH"         : (">>> Scripting to hatch %d row(s)... (~37m30s/box, ~5h/row)" % rows),
    "GETANDHATCH"   : (">>> Scripting to get and hatch %d row(s) of eggs... (~55m/box, ~7h20m/row)" % rows),
    "TEST"          :  ">>> Scripting test..." } )

print message[mode]

script = {  "GET"         : get_script,
            "HATCH"       : hatch_script,
            "GETANDHATCH" : get_and_hatch_script,
            "TEST"        : test_script  }[mode]

print message["U_WRITING"]

# Making our script file, Tasks.c
script_file = open('./Script.c', 'w') # Open the file we plan on writing this list to

subscripts.pass_var_to_c("int", "run_limit", run_limit, script_file)
subscripts.pass_list_to_c("command", "script", script, script_file)

script_file.close()

print message["U_COMPILING"]

os.system('make')