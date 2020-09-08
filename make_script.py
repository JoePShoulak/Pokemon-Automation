import os, sys

def write_command(command, file_to_write):
    action      = command[0]
    duration    = command[1]
    file_to_write.write("\t{ " + action + ", " + duration + "},\n")
    
def flatten(list):
    return [val for sublist in list for val in sublist] # Black magic
     
### COMMANDS ### (raw individual actions)
## BUTTONS ##

# A                    
a_vfast             =   [ "A    ", "  5" ], [ "PAUSE", "  5" ]
a_fast              =   [ "A    ", "  5" ], [ "PAUSE", " 25" ]
a_medium            =   [ "A    ", "  5" ], [ "PAUSE", " 50" ]                    
a_slow              =   [ "A    ", "  5" ], [ "PAUSE", "100" ]
a_vslow             =   [ "A    ", "  5" ], [ "PAUSE", "200" ]

# B
b_vfast             =   [ "B    ", "  5" ], [ "PAUSE", "  5" ]
b_fast              =   [ "B    ", "  5" ], [ "PAUSE", " 25" ]
b_slow              =   [ "B    ", "  5" ], [ "PAUSE", "100" ]
b_vslow             =   [ "B    ", "  5" ], [ "PAUSE", "200" ]
b_eslow             =   [ "B    ", "  5" ], [ "PAUSE", "900" ]

# X
x_medium            =   [ "X    ", "  5" ], [ "PAUSE", " 50" ]
x_slow              =   [ "X    ", "  5" ], [ "PAUSE", "100" ]

# Y
y_vfast             =   [ "Y    ", "  5" ], [ "PAUSE", "  5" ]

# L
l_fast              =   [ "L    ", "  5" ], [ "PAUSE", " 25" ]

# R
r_fast              =   [ "R    ", "  5" ], [ "PAUSE", " 25" ]
r_slow              =   [ "R    ", "  5" ], [ "PAUSE", "100" ]

# TRIGS
TRIGS_vfast         =   [ "TRIGS", "  5" ], [ "PAUSE", "  5" ]

## MOVEMENTS - MENU ##
# Right
right_vfast         =   [ "RIGHT", "  5" ], [ "PAUSE", "  5" ]
right_medium        =   [ "RIGHT", "  5" ], [ "PAUSE", " 50" ]
r_slow              =   [ "R    ", "  5" ], [ "PAUSE", "100" ]
             
# Up      
up_vfast            =   [ "UP   ", "  5" ], [ "PAUSE", "  5" ]
up_fast             =   [ "UP   ", "  5" ], [ "PAUSE", " 25" ]
up_medium           =   [ "UP   ", "  5" ], [ "PAUSE", " 50" ]

# Left
left_vfast          =   [ "LEFT ", "  5" ], [ "PAUSE", "  5" ]

# Down                    
down_vfast          =   [ "DOWN ", "  5" ], [ "PAUSE", "  5" ]
down_fast           =   [ "DOWN ", "  5" ], [ "PAUSE", " 25" ]
down_medium         =   [ "DOWN ", "  5" ], [ "PAUSE", " 50" ]
down_slow           =   [ "DOWN ", "  5" ], [ "PAUSE", "100" ]
         
## MOVEMENTS - On Foot ##          
# Face a certain direction (functionaly same as left_vfast, but more descriptive)
face_left           =   [ "LEFT ", "  5" ], [ "PAUSE", "  5" ]
face_right          =   [ "RIGHT", "  5" ], [ "PAUSE", "  5" ]

# Walk (misc.)
walk_up             =   [ "UP   ", " 50" ], [ "PAUSE", " 25" ]
walk_up_a_lot       =   [ "UP   ", "100" ], [ "PAUSE", " 25" ]

walk_down_a_bit     =   [ "DOWN ", " 25" ], [ "PAUSE", " 25" ]
walk_down           =   [ "DOWN ", " 50" ], [ "PAUSE", " 25" ]
         
# Walk (to get a new egg)               
walk_right_for_egg  =   [ "RIGHT", "300" ], [ "PAUSE", " 25" ]
walk_left_for_egg   =   [ "LEFT ", "300" ], [ "PAUSE", " 25" ]

## MOVEMENTS - On Bike ##
# Bike for hatching eggs
bike_left_for_h     =   [ "LEFT ", "850" ], [ "PAUSE", " 15" ]                       
bike_right_for_h    =   [ "RIGHT", "875" ], [ "PAUSE", " 15" ]

# Bike for getting back to the lady
bike_left_for_l     =   [ "LEFT ", "800" ], [ "PAUSE", " 15" ]                       
bike_right_for_l    =   [ "RIGHT", "825" ], [ "PAUSE", " 15" ]

# Get on/off bike
bike_toggle         =   [ "PLUS ", "  5" ], [ "PAUSE", " 25" ]

## WAITS ##                     
wait_instant        = [ [ "PAUSE", "  1" ] ]
wait_fast           = [ [ "PAUSE", " 25" ] ]
wait_medium         = [ [ "PAUSE", " 50" ] ]
wait_slow           = [ [ "PAUSE", "100" ] ]
wait_vslow          = [ [ "PAUSE", "200" ] ]

### SUBSCRIPTS ### (things you'd never do solo, generally)
## MENUS, BOXES, AND POKEMON ##

# Save (15s)
save                = flatten([ x_slow,
                                r_slow,
                                a_vfast,
                                wait_slow ])

# Open up the menu, pokemon, show box view
pokemon_boxes       = flatten([ x_slow,
                                a_slow,
                                r_slow ])

# Actually look at all of the boxes to be able to manuipulate them
box_view            = flatten([ up_vfast,
                                up_vfast,
                                a_medium ])                        

# Shift one box in box view to the right
shift_box_right     = flatten([ y_vfast,
                                right_vfast,
                                y_vfast ])

# Shuffle all the boxes in the top row right one to be able to hatch more than one box
shuffle_row         = flatten([ shift_box_right,
                                shift_box_right,
                                shift_box_right,
                                shift_box_right,
                                shift_box_right,
                                shift_box_right,
                                shift_box_right ])
                                
# Shuffle the last box of the current row with the first box of the next row
shuffle_change_row = flatten([ y_vfast,     # Start a swap
                                right_vfast, # First column
                                down_vfast,  # Down a row to the first box of row 2
                                y_vfast ])     # Finish swap

# Exit out of the menu back to the overworld
exit_menu           = flatten([ b_slow,
                                b_slow,
                                b_slow,
                                b_slow ])

# Enter multiselect mode so we can manipulate many pokemon
multiselect         = flatten([ y_vfast,
                                y_vfast ])

# Grab a column of pokemon                        
grab_column         = flatten([ a_vfast,
                                up_vfast,
                                a_vfast ])

# Grab the pokemon currently in the party
grab_party          = flatten([ left_vfast,
                                down_vfast,
                                a_medium,
                                up_fast,
                                up_vfast,
                                a_vfast ])  

# Select all the pokemon in the current box
select_all          = flatten([ a_vfast,
                                left_vfast,
                                up_vfast,
                                a_vfast])

# Puts the current selection in the empty row in the last box
place_in_last_box   = flatten([ right_vfast,
                                up_vfast,
                                l_fast, 
                                a_vfast, 
                                r_fast ]) 

# Puts the current selection into the far-right column in the current box
place_in_far_column = flatten([ left_vfast,
                                up_vfast,
                                a_vfast ])

# Place the selected pokemon in the party
place_in_party      = flatten([ left_vfast,
                                down_vfast,
                                a_medium ])
                        
## MOVEMENT AND EGGS ##

# Advance through the hatch messages
accept_hatch        = flatten([ b_eslow,
                                b_vslow,
                                b_vslow,
                                right_medium ])

# Face left on the bike by getting off quick during it so we don't turn with a radius
bike_face_left      = flatten([ bike_toggle,
                                face_left,
                                bike_toggle ])

# Same as above but to the right
bike_face_right     = flatten([ bike_toggle,
                                face_right,
                                bike_toggle ])

# Get an egg from the lady
talk_to_lady        = flatten([ face_left, 

                                a_medium,
                                a_vslow,

                                b_vfast, 

                                wait_slow, 

                                b_fast, 
                                b_slow,

                                b_fast ])
# Walk for a new egg
walk_for_new_egg    = flatten([ walk_down_a_bit,

                                walk_right_for_egg,
                                wait_fast,
                                walk_left_for_egg,

                                walk_up ])
                                


# Grab eggs from boxes that we wants to hatch (time)
grab_eggs_to_hatch  = flatten([ pokemon_boxes,
                                multiselect,
                                grab_column,
                                place_in_party,
                        
                                right_vfast, # move cursor off of party
                                up_vfast,    # move cursor to upper left cell of box
                                select_all,
                                left_vfast,  # move all pokes left one
                                a_vfast,     # place pokes
                                exit_menu ])

# Hatch the eggs (time)
bike_to_hatch_eggs  = flatten([ face_left,
                                bike_toggle,
                                
                                # To the lady and back 3 times hatches Eevees
                                bike_left_for_h,
                                bike_face_right,
                                bike_right_for_h,
                                
                                bike_face_left,
                                bike_left_for_h,
                                bike_face_right,
                                bike_right_for_h,
                                
                                bike_face_left,
                                bike_left_for_h,
                                bike_face_right,
                                bike_right_for_h,

                                # Get through the messages of hatching 5 eggs
                                accept_hatch,
                                accept_hatch,
                                accept_hatch,
                                accept_hatch,
                                accept_hatch,
                                
                                # If we started hatching before finishing going right, do so
                                bike_right_for_h,

                                bike_toggle ])
 
# Put our hatched pokemon back in the boxes (time)
place_hatched_eggs  = flatten([ pokemon_boxes,
                                multiselect,
                                grab_party,
                                place_in_far_column,
                                exit_menu ])
                        
## MISC ##
# Activates the controller
setup_controller    = flatten([ wait_vslow,

                                TRIGS_vfast,
                                wait_slow,
                                TRIGS_vfast,
                                wait_slow ])
                        
### SCRIPTS ### (scripts that accomplish a task worth accomplishing, or needed to do so)
# Get an egg (33s, 1765 duration)
get_egg             = flatten([ walk_for_new_egg,
                                talk_to_lady ])
    
# Hatch 5 eggs                            
hatch_5_eggs        = flatten([ grab_eggs_to_hatch,
                                bike_to_hatch_eggs,
                                place_hatched_eggs ])
                                
rows = 2 # rows to hatch TODO make CLI changable also TODO move this logic

shuffle_boxes_1 = flatten([ shuffle_row ])

shuffle_boxes_2 = flatten([ shuffle_row,
                                shuffle_change_row,
                                shuffle_row,
                                up_vfast ]) # Back up to the first row, last box

shuffle_boxes_3 = flatten([ shuffle_row,
                                shuffle_change_row,
                                shuffle_row,
                                shuffle_change_row,
                                shuffle_row,
                                up_vfast,
                                up_vfast ]) # Back up to the first row, last box
                                
# Move down a bunch of boxes so we can keep looping past one box (time)
reorganize_boxes_1    = flatten([ pokemon_boxes,
                                box_view,
                                shuffle_boxes_1, # This is the actual shuffling, defined above
                                right_vfast, # Go to the starting box
                                a_vfast,     # Select box
                                exit_menu ])
                                
reorganize_boxes_2    = flatten([ pokemon_boxes,
                                box_view,
                                shuffle_boxes_2, # This is the actual shuffling, defined above
                                right_vfast, # Go to the starting box
                                a_vfast,     # Select box
                                exit_menu ])
                                
reorganize_boxes_3    = flatten([ pokemon_boxes,
                                box_view,
                                shuffle_boxes_3, # This is the actual shuffling, defined above
                                right_vfast, # Go to the starting box
                                a_vfast,     # Select box
                                exit_menu ])

# Get us prepared to hatch eggs after getting them (time)
get_to_hatch        = flatten([ pokemon_boxes,
                                multiselect,
                                grab_party,
                                place_in_last_box,
                                exit_menu,
                        
                                walk_down_a_bit,
                                face_right,
                        
                                bike_toggle,
                                bike_right_for_l,
                                bike_toggle ])

# Get us prepared to get eggs after hatching them (time)
hatch_to_get        = flatten([ pokemon_boxes,
                                multiselect,
                                l_fast,   # Go to the box to the left, which should be the last box
                                grab_column,
                                place_in_party,
                                right_vfast,
                                r_fast,   # Back to box 1
                                exit_menu,
                        
                                face_left,
                                bike_toggle,
                                bike_left_for_l,
                                bike_toggle,
                        
                                walk_down,
                                walk_up_a_lot ])
                                
# Get a full(ish) box off eggs ()
get_eggs_box     =   get_egg*30

# Hatch a full box of eggs (time)
hatch_eggs_box   =   hatch_5_eggs*6 

print ""

try:
    mode = sys.argv[1].upper()
except:
    print ">>! No mode selected. Exiting...\n"
    sys.exit()
    
if "HATCH" in mode:
    try:
        rows = int(sys.argv[2])
    except:
        print ">>! Number of rows not chosen. Defaulting to 1...\n"

if rows == 1:
    hatch_eggs_box  +=   reorganize_boxes_1
elif rows == 2:
    hatch_eggs_box  +=   reorganize_boxes_2
elif rows == 3:
    hatch_eggs_box  +=   reorganize_boxes_3
                                            
if mode == "GET": # (~16m30s/box)
    print ">>> Assembling script to get eggs... (~16m30s/box, ~2h12m/row)"
    script = flatten([ setup_controller,
                        get_egg ])
elif mode == "HATCH": # (~37m30s/box)
    print ">>> Assembling script to hatch %d row(s) of eggs... (~37m30s/box, ~5h/row)" % rows
    script = flatten([ setup_controller,
                        hatch_eggs_box ])
elif mode == "GETANDHATCH": # (time)
    print ">>> Assembling script to hatch eggs... ()"
    script = flatten([ setup_controller,
                        get_eggs_box,
                        get_to_hatch,
                        hatch_eggs_box,
                        hatch_to_get,
                        save ])
elif mode == "TEST": # Comment or uncomment out certain parts to make custom scripts
    print ">>> Assembling test script..."
    script = flatten([ setup_controller,
                        #get_egg,
                        get_to_hatch,
                        #grab_eggs_to_hatch,
                        #bike_to_hatch_eggs,
                        #place_hatched_eggs,
                        #reorganize_boxes,
                        save,
                        hatch_to_get 
                    ])

# Making our script file, Tasks.c
script_file = open('./Script.c', 'w') # Open the file we plan on writing this list to

script_file.write("#include \"Script.h\"\n\n") # Title in a comment at the top. Habit
script_file.write("command script[] = {\n")    # Start our list

print ">>> Writing Script to Script.c..."

for command in script:
    write_command(command, script_file) # Put script in, formatted for c
    
script_file.write("};") # End list

script_file.close()

print ">>> Compiling C code...\n"
os.system('make')