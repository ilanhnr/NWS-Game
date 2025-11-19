/*****************************************************************************
 * Welcome to NWS Game, the career probability game for the open house of 
 * Normandie Web School in Le Havre, 76600. All project comments are written 
 * in French for personal clarity and better understanding.
 * 
 *****************************************************************************/

#include "SDL.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    SDL_Window *window = NULL;

    // Initialisation de SDL2
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("ERROR: Initialization SDL > %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }

    // Création d'une fenêtre SDL2
    window = SDL_CreateWindow(
        "NWS Game",                   // Titre
        SDL_WINDOWPOS_CENTERED,       // Position X
        SDL_WINDOWPOS_CENTERED,       // Position Y
        800,                          // Largeur
        600,                          // Hauteur
        SDL_WINDOW_SHOWN              // Flags
    );

    if (window == NULL) {
        SDL_Log("ERROR : Window creation failed > %s\n", SDL_GetError());
        SDL_Quit();
        return EXIT_FAILURE;
    }


    SDL_DestroyWindow(window); // Nettoyage de la fenêtre
    SDL_Quit();

    return EXIT_SUCCESS;
}

// gcc src/main.c -I include -L lib -lmingw32 -lSDL2main -lSDL2 -o bin/NWS-Game.exe