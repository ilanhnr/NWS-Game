#include "error.h"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

int createWindow(int argc, char **argv){
    SDL_Window *window = NULL;

    // Initialisation de SDL2
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        SDL_ExitWithError("Initialisation SDL");

    // Création d'une fenêtre SDL2
    window = SDL_CreateWindow(
        "NWS Game",                   // Titre
        SDL_WINDOWPOS_CENTERED,       // Position X
        SDL_WINDOWPOS_CENTERED,       // Position Y
        800,                          // Largeur
        600,                          // Hauteur
        SDL_WINDOW_SHOWN              // Flags
    );

    if (window == NULL)
        SDL_ExitWithError("Window creation failed");

    SDL_DestroyWindow(window); // Nettoyage de la fenêtre
    SDL_Quit();

    return EXIT_SUCCESS;
}