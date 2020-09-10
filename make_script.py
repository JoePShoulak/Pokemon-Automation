import os, sys
import subscripts
    
# Load in all the subscripts we may use
setup_controller    = subscripts.get("setup_controller")
save                = subscripts.get("save")

mash_a              = subscripts.get("mash_a")

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

# Make a list of our org_boxes so we can select. Empty first index so 1, 2, 3 matches index
reorganize_boxes    = [[], reorganize_boxes_1, reorganize_boxes_2, reorganize_boxes_3]
   
# Here we actually start doing things
run_limit   = -1    # Unless otherwise specified, script runs indefinitely
rows        =  1        
    
# CLI time TODO improve CLI if we're doing that
print ""

# Grab what mode we're in
try:
    mode = sys.argv[1].upper()
except:
    sys.exit()

# If we're hatching, we have to tweak one subscript before we finish defining our scripts
if "HATCH" in mode:
    if "1" in mode:
        run_limit = 1
    else:
        try:
            rows = int(sys.argv[2])
            run_limit = 8*rows
            hatch_eggs_box += reorganize_boxes[rows]
        except:
            pass
elif mode == "TEST": # If we're testing, let's grab the run_limit real quick
    try:
        run_limit = int(sys.argv[2])
    except:
        pass
                
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
                                                
get_and_hatch1_script    = subscripts.flatten([ setup_controller,
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
                                                
mash_a_script           = subscripts.flatten([  setup_controller,
                                                mash_a ])

script = {  "GET"          : get_script,
            "HATCH"        : hatch_script,
            "MASHA"        : mash_a_script,
            "GETANDHATCH"  : get_and_hatch_script,
        #    "GETANDHATCH1" : get_and_hatch1_script, Fix
            "TEST"         : test_script  }[mode]

# Making our script file, Tasks.c
script_file = open('./Script.c', 'w') # Open the file we plan on writing this list to

subscripts.pass_var_to_c(   "int",      "run_limit",    run_limit,  script_file )
subscripts.pass_list_to_c(  "command",  "script",       script,     script_file )

script_file.close()

os.system('make')