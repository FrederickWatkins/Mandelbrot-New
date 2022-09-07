#include"sdl-functions.h"

void sdlStartup(SDL_Window** win, SDL_Renderer** rend, int w, int h){
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
        printf("ERROR INITIALIZING SDL: %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    SDL_CreateWindowAndRenderer(w, h, 0, win, rend);
    SDL_SetRenderDrawColor(rend[0], 0, 0, 0, 0);
    SDL_RenderClear(rend[0]);
}

void sdlRender(SDL_Renderer* rend, int w, int h, int iterations){
    for(size_t i = 0; i < w; i++){
        for(size_t j = 0; j < h; j++){
            if(partOfSet(w, h, i, j, iterations)){
                SDL_RenderDrawPoint(rend, i, j);
            }
        }
    }
}