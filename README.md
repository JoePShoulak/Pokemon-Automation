# Pokemon-Automation
A project for automating Pokemon Sword / Shield on the Nintendo Switch. Special thanks to @kidGodzilla for his help and [his Medium article](https://medium.com/better-programming/creating-a-fake-nintendo-switch-controller-to-level-up-my-character-in-world-of-final-fantasy-b50adc269a1e), which I reccomend reading. 

This project works by defining commands like button presses and stick movements, and the subscripts that include them, in _subscripts.py_. That module is included in _make_script.py_, which takes CLI arguments to declare the mode and some details about runtime. _make_script.py_ outputs the list of commands (ranging from 50-2000 commnands) as a C formatted list in a file called _Script.c_. _Script.h_ simply makes these variables accessible to our main file, _Joystick.c_. _Joystick.c_ is almost completely unchanged from the one in the project by @kidGodzilla, the main differences being the list of commands used to be hardcoded in there which now live in _Script.c_, and I added logic to be able to have the loop run only a certain number of times. The Python script also runs the `make` command which then compiles our C code and creates the file we've been trying to get: _Joystick.hex_. 

## Setup
First we have to get _Joystick.hex_ onto our Teensy. For that we'll be using [Teensy Loader](https://www.pjrc.com/teensy/loader.html). I used a Teensy++ 2.0, but if you use any other board (including an Arduino Uno R3 which is possible but not recommended), you'll need to change the MCU in _makefile_ to the correct option in [this list](https://www.pjrc.com/teensy/loader_cli.html) (note: don't replace the whole line with what's listed there, only the code at the end). 

Once we've downloaded [Teensy Loader](https://www.pjrc.com/teensy/loader.html) and edited our _makefile_ to have the correct [MCU](https://www.pjrc.com/teensy/loader_cli.html), the last thing we have to do is make sure we can compile this code. For that, we need to make sure we have _avr-gcc_ installed. TODO Finish the instructions here

## Usage
`python make_script.py [mode] [rows/run_limit]`

For mode, you can choose "GET", "HATCH", "GETANDHATCH", and "TEST".
* GET will continue to get eggs indefinitely and require no further arguments
* HATCH will hatch eggs one column at a time, for all the collumns in a given box, for all the boxes in a given number of `rows`. You give it the number of `rows` as a CLI argument as above. It saves after every box. 
* GETANDHATCH will get roughly a box full of eggs (its a probabalistic mechanic), then execute a subscript to move the character to the right position to hatch eggs, and prepare their inventory for that script. It will then hatch a given number of `rows` just like HATCH. After hatching a box, the script will do what it needs to go back to grabbing eggs. It saves after every box.
* TEST contains most of the subscripts available and you can comment out specific ones to test just certain loops. Because we don't know exactly what the test script will be doing, it's `run_limit` can't be calculated from number of `rows` like in the HATCH scripts, so we're allowed to specify our own `run_limit` which defaults to just looping indefinitely. 

## Scripts
### GET
In order to run GET, there's almost nothing you have to do. Make sure you have a full party (so you're not hatching eggs as you get them, which would break the scripts), and stand right in this little gap next to the lady as pictured below (this is the Route 5 Nursery, not the Wild Area Nursery). 

![GetPicture](https://pbs.twimg.com/media/EhfhOokVkAAO-C4?format=jpg&name=large)

### HATCH [ROWS]
In order to run HATCH, first you want to make sure your party is empty so we can grab eggs to hatch them. Next, it reorganizes the box after it grabs the first column to hatch in order for it to be able to sift through all the columns. Because of this, the code will break if it tries to reorganize an empty box. It's best that if you run it for, say, 1 row, that every box in that row is **full**. If this can't be done, just try to make sure there's at least one egg in every column. Finally, stand as pictured below and start the script!

![HatchPicture](https://pbs.twimg.com/media/EhfhY7RUYAAtP2l?format=jpg&name=large)

### GETANDHATCH [ROWS]
This one is a little bit trickier. Since we're going to be generating a box of eggs each time before we hatch a box, we want all of the rows we're planning on operating on to be **empty**. We also want to be able to fill and empty our party so we're able to switch from grabbing eggs to hatching them and back. The way to do this is, again, make sure the top _n_ rows where _n_ is what we gave to the CLI are **empty** but the **last box** which should be the bottom right box should be **full** of Pokemon. Once you've hatched enough "keeper" pokemon, you can put them there which works out nicely. You will then open your Pokemon boxes to the upper left box (box 1) and hit _L_ to tab over to the last (and full) box. Grab the first column, and place them in your party. From now on, the script will handle moving these 5 pokemon for us. Finally and importantly, **make sure you end on box 1, row 1, not the last (and full) box**. 

### GETANDHATCH1
Same as GETANDHATCH except it will only do one box. This mode is recommended if you're starting with a low-IV Pokemon, so you can generate a 5IV or 6IV without having to run and interrupt a longer script before restarting with that better 'mon. 

### TEST [RUN_LIMIT]
This is going to be whatever you make it. Starting and ending positions depend entirely on what subscripts you choose to include. There are still only two fixed positions we use: right next to the lady, and in the nook past the end of the bridge. One of these is almost certainly where you want to be standing when you run this script. 

### Warning!
Having eggs that require different amounts of steps to hatch (whether they were in your party when not using the script and moving, or they're different species) can cause major issues with the scripts. The best way to get the hatch scripts to run is with eggs that have never been in your party, that are all the same species. To use this scripts as painlessly as possible, I reccomend hatching any eggs you currently have manually, and then never get or hatch an egg again without using this script. 

## Thanks!
If there are any questions or feedback, especially if anything is unclear, please let me know and I'll update it as soon as I can!
