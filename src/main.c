/*****************************************************************************
 * Welcome to NWS Game, the career probability game for the open house of 
 * Normandie Web School in Le Havre, 76600. All project comments are written 
 * in French for personal clarity and better understanding.
 * 
 *****************************************************************************/

#include "window.h"

int main(int argc, char **argv){
    return createWindow(argc, argv);
}

// gcc src/*.c src/ui/*.c src/utils/*.c src/game/*.c -I include -L lib -lmingw32 -lSDL2main -lSDL2 -o bin/NWS-Game.exe