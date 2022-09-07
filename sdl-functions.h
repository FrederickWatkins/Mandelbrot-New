#include<stdbool.h>
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

bool sdlStartup(SDL_Window* win, SDL_Renderer* rend, int w, int h);

void sdlDrawToWindow(SDL_Renderer* rend, int w, int h, int iterations);