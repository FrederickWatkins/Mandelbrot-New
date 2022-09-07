#include<stdbool.h>
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<pthread.h>
#include"helper-functions.h"

void sdlStartup(SDL_Window** win, SDL_Renderer** rend, int w, int h);

void sdlRender(SDL_Renderer* rend, int w, int h, int iterations);