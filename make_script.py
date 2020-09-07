def write_command(f, cmd, dur):
    f.write("\t{ " + cmd + ", " + dur + "},\n")
    
def flatten(list):
    return [val for sublist in list for val in sublist]
    
rows = 2 # rows to hatch TODO make CLI changable
 
### COMMANDS ### (raw individual actions)   
## BUTTONS ##
# A                    
a_vfast             =   [ "A       ", "  5" ], [ "NOTHING ", "  5" ]
a_fast              =   [ "A       ", "  5" ], [ "NOTHING ", " 25" ]
a_medium            =   [ "A       ", "  5" ], [ "NOTHING ", " 50" ]                    
a_slow              =   [ "A       ", "  5" ], [ "NOTHING ", "100" ]
a_vslow             =   [ "A       ", "  5" ], [ "NOTHING ", "200" ]

# B
b_vfast             =   [ "B       ", "  5" ], [ "NOTHING ", "  5" ]
b_fast              =   [ "B       ", "  5" ], [ "NOTHING ", " 25" ]
b_slow              =   [ "B       ", "  5" ], [ "NOTHING ", "100" ]
b_vslow             =   [ "B       ", "  5" ], [ "NOTHING ", "200" ]
b_eslow             =   [ "B       ", "  5" ], [ "NOTHING ", "900" ]

# X
x_medium            =   [ "X       ", "  5" ], [ "NOTHING ", " 50" ]
x_slow              =   [ "X       ", "  5" ], [ "NOTHING ", "100" ]

# Y
y_vfast             =   [ "Y       ", "  5" ], [ "NOTHING ", "  5" ]

# L
l_fast              =   [ "L       ", "  5" ], [ "NOTHING ", " 25" ]

# R
r_fast              =   [ "R       ", "  5" ], [ "NOTHING ", " 25" ]

# Triggers
triggers_vfast      =   [ "TRIGGERS", "  5" ], [ "NOTHING ", "  5" ]

## MOVEMENTS - MENU ##
# Right
right_vfast         =   [ "RIGHT   ", "  5" ], [ "NOTHING ", "  5" ]
right_medium        =   [ "RIGHT   ", "  5" ], [ "NOTHING ", " 50" ]
r_slow              =   [ "R       ", "  5" ], [ "NOTHING ", "100" ]
             
# Up      
up_vfast            =   [ "UP      ", "  5" ], [ "NOTHING ", "  5" ]
up_fast             =   [ "UP      ", "  5" ], [ "NOTHING ", " 25" ]
up_medium           =   [ "UP      ", "  5" ], [ "NOTHING ", " 50" ]

# Left
left_vfast          =   [ "LEFT    ", "  5" ], [ "NOTHING ", "  5" ]

# Down                    
down_vfast          =   [ "DOWN    ", "  5" ], [ "NOTHING ", "  5" ]
down_fast           =   [ "DOWN    ", "  5" ], [ "NOTHING ", " 25" ]
down_medium         =   [ "DOWN    ", "  5" ], [ "NOTHING ", " 50" ]
down_slow           =   [ "DOWN    ", "  5" ], [ "NOTHING ", "100" ]
         
## MOVEMENTS - On Foot ##          
# Face a certain direction (functionaly same as left_vfast, but more descriptive)
face_left           =   [ "LEFT    ", "  5" ],  [ "NOTHING ", "  5" ]
face_right          =   [ "RIGHT   ", "  5" ],  [ "NOTHING ", "  5" ]

# Walk (misc.)
walk_up             =   [ "UP      ", " 50" ], [ "NOTHING ", " 25" ]
walk_up_a_lot       =   [ "UP      ", "100" ], [ "NOTHING ", " 25" ]

walk_down_a_bit     =   [ "DOWN    ", " 25" ], [ "NOTHING ", " 25" ]
walk_down           =   [ "DOWN    ", " 50" ], [ "NOTHING ", " 25" ]
         
# Walk (to get a new egg)               
walk_right_for_egg  =   [ "RIGHT   ", "300" ], [ "NOTHING ", " 25" ]
walk_left_for_egg   =   [ "LEFT    ", "300" ], [ "NOTHING ", " 25" ]

## MOVEMENTS - On Bike ##
# Bike for hatching eggs
bike_left_for_h     =   [ "LEFT    ", "800" ], [ "NOTHING ", " 15" ]                       
bike_right_for_h    =   [ "RIGHT   ", "825" ], [ "NOTHING ", " 15" ]

# Get on/off bike
bike_toggle         =   [ "PLUS    ", "  5" ], [ "NOTHING ", " 25" ]

## WAITS ##                     
wait_instant        = [ [ "NOTHING ", "  1" ] ]
wait_fast           = [ [ "NOTHING ", " 25" ] ]
wait_medium         = [ [ "NOTHING ", " 50" ] ]
wait_slow           = [ [ "NOTHING ", "100" ] ]
wait_vslow          = [ [ "NOTHING ", "200" ] ]

### SUBSCRIPTS ### (things you'd never do solo, generally)
## BOXES AND POKEMON ##

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

# Exit out of the menu back to the overworld
exit_menu           = flatten([ b_slow,
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
grab_party          = flatten([ down_vfast,
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
                        
## MISC ##
# Activates the controller
setup_controller    = flatten([ wait_vslow,

                                triggers_vfast,
                                wait_slow,
                                triggers_vfast,
                                wait_slow ])
                        
### SCRIPTS ### (scripts that accomplish a task worth accomplishing, or needed to do so)
# Get an egg (32.5s)
get_egg             = flatten([ walk_for_new_egg,
                                talk_to_lady ])

# Grab eggs from boxes that we wants to hatch ()
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

# Hatch the eggs ()
bike_to_hatch_eggs  = flatten([ face_left,

                                bike_toggle,
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

                                accept_hatch,
                                accept_hatch,
                                accept_hatch,
                                accept_hatch,
                                accept_hatch,
                                bike_right_for_h,

                                bike_toggle ])
 
# Put our hatched pokemon back in the boxes ()
place_hatched_eggs  = flatten([ pokemon_boxes,
                                multiselect,
                                left_vfast,
                                grab_party,
                                place_in_far_column,
                                exit_menu ])

if rows == 1:                           
   reorganize_boxes = flatten([ shuffle_row ])

if rows == 2:
   reorganize_boxes = flatten([ shuffle_row,
                                y_vfast,
                                right_vfast,
                                down_vfast,
                                y_vfast,
                                shuffle_row,
                                up_vfast])
                                
# Move down a bunch of boxes so we can keep looping past one box ()
reorganize_boxes    = flatten([ pokemon_boxes,
                                box_view,
                                reorganize_boxes,
                                right_vfast, # put cursor over correct box
                                a_vfast,     # select correct box
                                exit_menu ])

# Get us prepared to hatch eggs after getting them ()
get_to_hatch        = flatten([ pokemon_boxes,
                                multiselect,
                                left_vfast,
                                grab_party,
                                place_in_last_box,
                                exit_menu,
                        
                                walk_down_a_bit,
                                face_right,
                        
                                bike_toggle,
                                bike_right_for_h,
                                bike_toggle ])

# Get us prepared to get eggs after hatching them ()
hatch_to_get        = flatten([ pokemon_boxes,
                                multiselect,
                                l_fast,
                                grab_column,
                                place_in_party,
                                right_vfast,
                                r_fast,
                                exit_menu,
                        
                                face_left,
                                bike_toggle,
                                bike_left_for_h,
                                bike_toggle,
                        
                                walk_down,
                                walk_up_a_lot ])
                                
# Get a full(ish) box off eggs (~16.25min)
get_eggs_box     = get_egg*30           

# Hatch a full box of eggs
hatch_eggs_box   = (grab_eggs_to_hatch + bike_to_hatch_eggs + place_hatched_eggs)*6 
hatch_eggs_box  += reorganize_boxes
                        
mode = "GETHATCHEGGS" # TODO make CLI changable
                    
if mode == "GETEGGS":
    scripts = flatten([ setup_controller,
                        get_egg ])
elif mode == "HATCHEGGS":
    scripts = flatten([ setup_controller,
                        hatch_eggs_box ])
elif mode == "GETHATCHEGGS":
    scripts = flatten([ setup_controller,
                        get_eggs_box,
                        get_to_hatch,
                        hatch_eggs_box,
                        hatch_to_get ])
elif mode == "TEST":
    scripts = flatten([ setup_controller,
                        # get_egg,
                        # get_to_hatch,
                        # grab_eggs_to_hatch,
                        # bike_to_hatch_eggs,
                        # place_hatched_eggs,
                        reorganize_boxes,
                        hatch_to_get ])

# Open the file we plan on writing this list to: Tasks.c
script_file = open('./Tasks.c', 'w')

script_file.write("#include \"Tasks.h\"\n\n") # Title in a comment at the top. Habit
script_file.write("command script[] = {\n")   # Start our list

for i in scripts:
    write_command(script_file, i[0], i[1])    # Put script in, formatted for c
    
script_file.write("};")                       # End list
