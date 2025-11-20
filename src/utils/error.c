#include "error.h"
#include <SDL.h>
#include <stdlib.h>

void SDL_ExitWithError(const char *message){
    SDL_Log("ERROR : %s > %s\n", message, SDL_GetError());
    SDL_Quit();
    exit(EXIT_FAILURE);
}