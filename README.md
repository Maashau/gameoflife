# Game_of_Life
Game of life programmed in C, with ability to read maps from files

Uses nCurses library, compiles with makefile.

# Manual
Program first asks if you want to load a file or exit from the program
If you chose to load a file, program asks full path to the map which MUST be in form "maps/mapname.txt"

List of maps: 10cr.txt blank.txt expl.txt gldr.txt pyra.txt tumb.txt alien.txt esim.txt ggg.txt lwsp.txt smex.txt
              
Then the program asks for "Number of cycles". 1 cycle is 1 check of the game board and print of the next step
Lastly program asks for "Seconds/cycle:". I recommend to use anything from 0.1 to 1 depending of how precisely user wants to see the process.

Copyright (c) 2020 Matti Rintamäki
