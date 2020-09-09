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
### GET (eggs)
Get Eggs 

### HATCH (eggs)

### GETANDHATCH (eggs)

### TEST
This is going to be whatever you make it. Starting and ending positions depend entirely on what subscripts you choose to include. There are still only two fixed positions we use: right next to the lady, and in the nook past the end of the bridge. One of these is almost certainly where you want to be standing when you run this script. 
