#include "graphics.h"

Graphics::Graphics(){
  if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO)!=0){
    std::cout<<"Failed to init SDL, ERROR: "<<SDL_GetError()<<std::endl;
  }

  window = SDL_CreateWindow("Tic Tac Toe (BY: JACK MCLEANS)",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              WIDTH,
                              HEIGHT,
                              SDL_WINDOW_SHOWN
                            );
  if(window==NULL){
    std::cout<<"failed to create the Window, ERROR: "<<SDL_GetError()<<std::endl;
  }
  renderer = SDL_CreateRenderer(window,
                                -1,
                                SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC
                              );

  if(renderer==NULL){
    std::cout<<"Failed to create the Renderer, ERROR: "<<SDL_GetError()<<std::endl;
  }
}



Graphics::~Graphics(){
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  window=NULL;
  renderer=NULL;
  SDL_Quit();
}
