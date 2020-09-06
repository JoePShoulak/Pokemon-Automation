def write_command(f, cmd, dur):
    f.write("\t{ " + cmd + ", " + dur + "},\n")
    
face_left           =   [ "LEFT    ", "  5" ],  [ "NOTHING ", "  5" ]
                        
a_fast              =   [ "A       ", "  5" ], [ "NOTHING ", " 25" ]
a_medium            =   [ "A       ", "  5" ], [ "NOTHING ", " 50" ]                    
a_slow              =   [ "A       ", "  5" ], [ "NOTHING ", "100" ]
a_vslow             =   [ "A       ", "  5" ], [ "NOTHING ", "200" ]

b_vfast             =   [ "B       ", "  5" ], [ "NOTHING ", "  5" ]
b_fast              =   [ "B       ", "  5" ], [ "NOTHING ", " 25" ]
                        
down_vfast          =   [ "DOWN    ", "  5" ], [ "NOTHING ", "  5" ]
down_fast           =   [ "DOWN    ", "  5" ], [ "NOTHING ", " 25" ]
down_medium         =   [ "DOWN    ", "  5" ], [ "NOTHING ", " 50" ]
down_slow           =   [ "DOWN    ", "  5" ], [ "NOTHING ", "100" ]
                        
walk_down_a_bit     =   [ "DOWN    ", " 25" ], [ "NOTHING ", " 25" ]
walk_up             =   [ "UP      ", " 50" ], [ "NOTHING ", " 25" ]
                        
walk_right_for_egg  =   [ "RIGHT   ", "250" ], [ "NOTHING ", " 25" ]
walk_left_for_egg   =   [ "LEFT    ", "250" ], [ "NOTHING ", " 25" ]
                        
wait_instant        =   [ "NOTHING ", "  1"]
wait_fast           =   [ "NOTHING ", " 25"]
wait_slow           =   [ "NOTHING ", "100"]
wait_vslow          =   [ "NOTHING ", "200"]

triggers_vfast      =   [ "TRIGGERS", "  5" ], [ "NOTHING ", "  5" ]
                        
### SETUP CONTROLLER ###

setup_controller    = [ wait_vslow,

                        triggers_vfast,
                        wait_slow,
                        triggers_vfast,
                        wait_slow,
                        
                        wait_instant,
                        wait_instant,
                        wait_instant,
                        wait_instant,
                        wait_instant,
                        wait_instant ]
    
### GET EGGS ###
talk_to_lady        = [ face_left, 

                        a_medium,
                        a_vslow,
                        
                        b_vfast, 
                        
                        wait_slow, 
                        
                        b_fast, 
                        b_fast ]
                        
walk_for_new_egg    = [ walk_down_a_bit,

                        walk_right_for_egg,
                        wait_fast,
                        walk_left_for_egg,
                        
                        walk_up ]
                        
get_eggs            = [ talk_to_lady,
                        walk_for_new_egg ]

### HATCH EGGES ###

open_pokemon_boxes  = [ [ "X       ", "  5" ],
                        [ "NOTHING ", " 40" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", " 60" ],
                        [ "R       ", "  5" ],
                        [ "NOTHING ", "100" ] ]
                        
multiselect         = [ [ "Y       ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "Y       ", "  5" ] ]
                        
grab_first_column   = [ [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ] ]
                        
place_in_party      = [ [ "LEFT    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "DOWN    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", " 15" ] ]
                        
reorganize_box      = [ [ "RIGHT   ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        
                        [ "LEFT    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        
                        [ "LEFT    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ] ]
                        
exit_menu           = [ [ "B       ", "  5" ],
                        [ "NOTHING ", " 75" ],
                        [ "B       ", "  5" ],
                        [ "NOTHING ", " 75" ],
                        [ "B       ", "  5" ],
                        [ "NOTHING ", " 75" ] ]
                        
face_left           = [ [ "PLUS    ", "  5" ],
                        [ "NOTHING ", " 50" ],
                        [ "LEFT    ", "  5" ],
                        [ "NOTHING ", " 15" ],
                        [ "PLUS    ", "  5" ],
                        [ "NOTHING ", " 15" ] ]
                        
face_right          = [ [ "PLUS    ", "  5" ],
                        [ "NOTHING ", " 50" ],
                        [ "RIGHT   ", "  5" ],
                        [ "NOTHING ", " 15" ],
                        [ "PLUS    ", "  5" ],
                        [ "NOTHING ", " 15" ] ]
                        
bike_left           = [ [ "LEFT    ", "800" ],
                        [ "NOTHING ", " 15" ] ]
                        
bike_right          = [ [ "RIGHT   ", "825" ],
                        [ "NOTHING ", " 15" ] ]
                        
accept_hatch        = [ [ "A       ", "  5" ],
                        [ "NOTHING ", "900" ],
                        [ "B       ", "  5" ],
                        [ "NOTHING ", "150" ],
                        [ "B       ", "  5" ],
                        [ "NOTHING ", "150" ],
                        [ "RIGHT   ", "  5" ],
                        [ "NOTHING ", " 30" ] ]
                        
bike_toggle         = [ [ "PLUS    ", "  5" ],
                        [ "NOTHING ", " 50" ] ]
                        
grab_party          = [ [ "LEFT    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "DOWN    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", " 10" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", " 10" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ] ]  
                        
place_in_far_column = [ [ "LEFT    ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ] ]
                        
box_view            = [ [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", " 25" ] ]  
                        
shift_boxes_right   = [ [ "Y       ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "RIGHT   ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "Y       ", "  5" ],
                        [ "NOTHING ", "  5" ] ]  
                        
back_to_first_box   = [ [ "RIGHT   ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "B       ", "  5" ],
                        [ "NOTHING ", " 50" ] ]  
                        
### GET TO HATCH EGGS ###
                        
down_a_bit          = [ [ "DOWN    ", " 15" ],
                        [ "NOTHING ", " 15" ] ]
                        
place_in_last_box   = [ [ "RIGHT   ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "UP      ", "  5" ],
                        [ "NOTHING ", "  5" ],
                        [ "L       ", "  5" ],
                        [ "NOTHING ", " 15" ], 
                        [ "A       ", "  5" ],
                        [ "NOTHING ", "  5" ], 
                        [ "R       ", "  5" ],
                        [ "NOTHING ", " 15" ] ]  
                        
### HATCH TO GET EGGS ###
                        
up_a_bit            = [ [ "UP      ",  " 50" ],
                        [ "NOTHING ",  " 15" ] ]

left_box_page       = [ [ "L       ",  "  5" ],
                        [ "NOTHING ",  " 15" ] ]
                        
right_box_page      = [ [ "R       ",  "  5" ],
                        [ "NOTHING ",  " 15" ] ]

                        
right_once          = [ [ "RIGHT   ", " 15" ],
                        [ "NOTHING ", " 15" ] ]
                        


                        
hatch_eggs          = [ open_pokemon_boxes,
                        multiselect,
                        grab_first_column,
                        place_in_party,
                        reorganize_box,
                        exit_menu,
                        bike_toggle,
                        
                        #face_left,
                        #bike_left,
                        #face_right,
                        #bike_right,
                        #face_left,
                        #bike_left,
                        #face_right,
                        #bike_right,
                        #face_left,
                        #bike_left,
                        #face_right,
                        #bike_right,
                
                        #accept_hatch,
                        #accept_hatch,
                        #accept_hatch,
                        #accept_hatch,
                        #accept_hatch,
                        #bike_right,
                        
                        bike_toggle,
                    
                        open_pokemon_boxes,
                        multiselect,
                        grab_party,
                        place_in_far_column,
                        exit_menu ]
                        
reorganize_boxes    = [ open_pokemon_boxes,
                        box_view,
                        shift_boxes_right,
                        shift_boxes_right,
                        shift_boxes_right,
                        shift_boxes_right,
                        shift_boxes_right,
                        shift_boxes_right,
                        shift_boxes_right,
                        back_to_first_box,
                        exit_menu ]
                        
get_to_hatch        = [ open_pokemon_boxes,
                        multiselect,
                        grab_party,
                        place_in_last_box,
                        exit_menu,
                        down_a_bit,
                        bike_toggle,
                        face_right,
                        bike_right,
                        bike_toggle ]
                        
hatch_to_get        = [ open_pokemon_boxes,
                        multiselect,
                        left_box_page,
                        grab_first_column,
                        place_in_party,
                        right_once,
                        right_box_page,
                        exit_menu,
                        bike_toggle,
                        face_left,
                        bike_left,
                        bike_toggle,
                        up_a_bit ]
                                                    
hatch_eggs_box   = hatch_eggs*6 + reorganize_boxes
get_eggs_box     = get_eggs*30
                        
mode = "GETEGGS"
                    
if mode == "GETEGGS":
    s = [setup_controller] + get_eggs
elif mode == "HATCHEGGS":
    s = [setup_controller] + hatch_eggs_box
elif mode == "GETHATCHEGGS":
    s = [setup_controller] + get_eggs_box + get_to_hatch + hatch_eggs_box + hatch_to_get
elif mode == "TEST":
    s = [setup_controller] + get_to_hatch + hatch_to_get
     
scripts = []
        
for i in s:
    for j in i:
        # print j
        if type(j) == tuple:
            for k in j:
                scripts += [k]
        elif type(j) == list:
            scripts += [j]

script_file = open('./Tasks.c', 'w')

script_file.write("#include \"Tasks.h\"\n")
script_file.write("\n")
script_file.write("command script[] = {\n")

print "\n"

for i in scripts:
    write_command(script_file, i[0], i[1])
    
script_file.write("};")
    