#include<stdio.h>
#include<stdlib.h>
#include"sdl-functions.h"

int main(void){
    int w = 1500;
    int h = 1000;
    SDL_Event event;
    SDL_Window* win;
    SDL_Renderer* rend;

    sdlStartup(&win, &rend, w, h);
    SDL_SetRenderDrawColor(rend, 100, 0, 255, SDL_ALPHA_OPAQUE);
    sdlRender(rend, w, h, 100);

    SDL_RenderPresent(rend);

    while (1) {
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            break;
    }
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return EXIT_SUCCESS;
}