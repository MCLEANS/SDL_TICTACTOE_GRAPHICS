#include "texture.h"


Texture::Texture(std::string mPath,SDL_Renderer *mRenderer): mPath(mPath){
  loadedSurface=IMG_Load(this->mPath.c_str());
  if(loadedSurface==NULL){
    std::cout<<"Failed to load the surface, ERROR: "<<SDL_GetError()<<std::endl;
  }

  mTexture = SDL_CreateTextureFromSurface(mRenderer,loadedSurface);
  if(mTexture==NULL){
    std::cout<<"Failed to create the texture, ERROR: "<<SDL_GetError()<<std::endl;
  }

  SDL_FreeSurface(loadedSurface);

}

Texture::~Texture(){


}
