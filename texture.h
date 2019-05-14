#ifndef _TEXTURE_H
#define _TEXTURE_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>



class Texture{
private:

  SDL_Surface *loadedSurface = NULL;
  std::string mPath;
private:

public:
  SDL_Texture *mTexture = NULL;

public:
  Texture(std::string mpath, SDL_Renderer *mRenderer);
  ~Texture();
};


#endif //_TEXTURE_H
