/*****************************************************************************
 * Welcome to NWS Game, the career probability game for the open house of 
 * Normandie Web School in Le Havre, 76600. All project comments are written 
 * in French for personal clarity and better understanding.
 * 
 *****************************************************************************/

#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    SDL_Window *window = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        SDL_Log("ERROR : Initialization SDL > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    window = SDL_CreateWindow("NWS Game", 800, 600, 0);

    if(window == NULL){
        SDL_Log("ERROR : Window creation failed > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_Delay(5000); // Milliseconde

    SDL_Quit();

    return EXIT_SUCCESS;
}