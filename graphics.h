#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

class Graphics{

private:



private:

public:
  const int WIDTH = 860;
  const int HEIGHT = 640;

  SDL_Renderer *renderer = NULL;
  SDL_Texture *texture = NULL;
  
  SDL_Window *window = NULL;


public:
  Graphics();
  ~Graphics();



};




#endif //_GRAPHICS_H
