#include <iostream>
#include "graphics.h"
#include "texture.h"
#include "game.h"
#include "player.h"

using namespace std;

int main(){
  {
  Graphics graphics;
  Game game;
  bool p1IsCurrent=true;
  bool p2IsCurrent=false;
  Texture x("images/x.png",graphics.renderer);
  Texture xWin("images/x-win.png",graphics.renderer);
  Texture zero("images/zero.png",graphics.renderer);
  Texture zeroWin("images/zero_win.png",graphics.renderer);

  Mix_Chunk *success = NULL;
  
  Mix_Chunk *win = NULL;


   if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
                {
                    printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
                    
                }

  success = Mix_LoadWAV( "sounds/success.wav" );
   
   
    win = Mix_LoadWAV( "sounds/error.wav" );
    


  SDL_Event event;
  bool quit = false;

  int imageW=graphics.WIDTH/3;
  int imageH = graphics.HEIGHT/3;

  int oneStartX = 0;
  int oneStartY = 0;
  int twoStartX = oneStartX + imageW;
  int twoStartY = 0;
  int threeStartX = twoStartX + imageW;
  int threeStartY =0;
  int fourStartX = 0;
  int fourStartY = oneStartY + imageH;
  int  fiveStartX = fourStartX + imageW;
  int fiveStartY = oneStartY + imageH;
  int sixStartX = fiveStartX + imageW;
  int sixStartY = oneStartY + imageH;
  int sevenStartX = 0;
  int sevenStartY = fourStartY + imageH;
  int eightStartX = sevenStartX + imageW;
  int eightStartY = fourStartY + imageH;
  int nineStartX = eightStartX + imageW;
  int nineStartY = fourStartY + imageH;

  bool one=false;
  bool two= false;
  bool three= false;
  bool four=false;
  bool five=false;
  bool six=false;
  bool seven=false;
  bool eight=false;
  bool nine = false;

  bool publishOne = false;
  bool publishTwo = false;
  bool publishThree= false;
  bool publishFour= false;
  bool publishFive= false;
  bool publishSix = false;
  bool publishSeven=false;
  bool publishEight= false;
  bool publishNine = false;

  bool xone= false;
  bool xtwo=false;
  bool xthree = false;
  bool xfour = false;
  bool xfive = false;
  bool xsix = false;
  bool xseven = false;
  bool xeight = false;
  bool xnine=false;

  auto pushToBoard = [=](SDL_Texture *texture,int x1 ,int y, int w, int h){
    SDL_Rect rect={x1,y,w,h};
    SDL_RenderCopy(graphics.renderer,texture,NULL,&rect);
  };




  while(!quit){



    SDL_SetRenderDrawColor(graphics.renderer,
                            0XFF,
                            0XFF,
                            0XFF,
                            0X00);
    SDL_RenderClear(graphics.renderer);

    //----------------Game Graphic Board-----------------------------

    SDL_SetRenderDrawColor(graphics.renderer,
                            0X00,
                            0X00,
                            0X00,
                            0XFF);
    SDL_RenderDrawLine(graphics.renderer,
                        twoStartX,
                        0,
                        twoStartX,
                        graphics.HEIGHT
                      );
    SDL_RenderDrawLine(graphics.renderer,
                        threeStartX,
                        0,
                        threeStartX,
                        graphics.HEIGHT
                      );
    SDL_RenderDrawLine(graphics.renderer,
                        0,
                        fourStartY,
                        graphics.WIDTH,
                        fourStartY
                      );
    SDL_RenderDrawLine(graphics.renderer,
                        0,
                        sevenStartY,
                        graphics.WIDTH,
                        sevenStartY
                      );
    //---------------------end Game board-----------------------


  if(one){
    Mix_PlayChannel( -1, success, 0 );
    publishOne=true;
    one=false;

    if(p1IsCurrent){
      xone=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xone=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishOne){
    if(xone) {pushToBoard(x.mTexture,oneStartX,oneStartY,imageW,imageH);
    game.addMove('1','X');}
    else if(!xone) {pushToBoard(zero.mTexture,oneStartX,oneStartY,imageW,imageH);
    game.addMove('1','O');}
  }


  if(two){
    Mix_PlayChannel( -1, success, 0 );
    publishTwo = true;
    two=false;
    if(p1IsCurrent){
      xtwo=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xtwo=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishTwo){
    if(xtwo) {pushToBoard(x.mTexture,twoStartX,twoStartY,imageW,imageH);
    game.addMove('2','X');}
    if(!xtwo) {pushToBoard(zero.mTexture,twoStartX,twoStartY,imageW,imageH);
    game.addMove('2','O');}
  }

  if(three){
    Mix_PlayChannel( -1, success, 0 );
    publishThree = true;
    three=false;
    if(p1IsCurrent){
      xthree=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xthree=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishThree){
    if(xthree) {pushToBoard(x.mTexture,threeStartX,threeStartY,imageW,imageH);
    game.addMove('3','X');}
    if(!xthree) {pushToBoard(zero.mTexture,threeStartX,threeStartY,imageW,imageH);
    game.addMove('3','O');}
  }


  if(four){
    Mix_PlayChannel( -1, success, 0 );
    publishFour = true;
    four=false;
    if(p1IsCurrent){
      xfour=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xfour=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishFour){
    if(xfour) {pushToBoard(x.mTexture,fourStartX,fourStartY,imageW,imageH);
    game.addMove('4','X');}
    if(!xfour) {pushToBoard(zero.mTexture,fourStartX,fourStartY,imageW,imageH);
    game.addMove('4','O');}
  }

  if(five){
    Mix_PlayChannel( -1, success, 0 );
    publishFive = true;
    five=false;
    if(p1IsCurrent){
      xfive=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xfive=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishFive){
    
    if(xfive) {pushToBoard(x.mTexture,fiveStartX,fiveStartY,imageW,imageH);
    game.addMove('5','X');}
    if(!xfive) {pushToBoard(zero.mTexture,fiveStartX,fiveStartY,imageW,imageH);
    game.addMove('5','O');}
  }


  if(six){
    Mix_PlayChannel( -1, success, 0 );
    publishSix = true;
    six=false;
    if(p1IsCurrent){
      xsix=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xsix=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishSix){
    if(xsix) {pushToBoard(x.mTexture,sixStartX,sixStartY,imageW,imageH);
    game.addMove('6','X');}
    if(!xsix) {pushToBoard(zero.mTexture,sixStartX,sixStartY,imageW,imageH);
    game.addMove('6','O');}
  }

  if(seven){
    Mix_PlayChannel( -1, success, 0 );
    publishSeven = true;
    seven=false;
    if(p1IsCurrent){
      xseven=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xseven=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishSeven){
    if(xseven) {pushToBoard(x.mTexture,sevenStartX,sevenStartY,imageW,imageH);
    game.addMove('7','X');}
    if(!xseven) {pushToBoard(zero.mTexture,sevenStartX,sevenStartY,imageW,imageH);
    game.addMove('7','O');}
  }


  if(eight){
    Mix_PlayChannel( -1, success, 0 );
    publishEight = true;
    eight=false;
    if(p1IsCurrent){
      xeight=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xeight=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishEight){
    if(xeight) {pushToBoard(x.mTexture,eightStartX,eightStartY,imageW,imageH);
    game.addMove('8','X');}
    if(!xeight) {pushToBoard(zero.mTexture,eightStartX,eightStartY,imageW,imageH);
    game.addMove('8','O');}
  }


  if(nine){
    Mix_PlayChannel( -1, success, 0 );
    publishNine = true;
    nine=false;
    if(p1IsCurrent){
      xnine=true;
      p2IsCurrent=true;
      p1IsCurrent=false;
    }
    else if(p2IsCurrent){
      xnine=false;
      p1IsCurrent=true;
      p2IsCurrent=false;
    }
  }
  if(publishNine){
    if(xnine) {pushToBoard(x.mTexture,nineStartX,nineStartY,imageW,imageH);
    game.addMove('9','X');}
    if(!xnine) {pushToBoard(zero.mTexture,nineStartX,nineStartY,imageW,imageH);
    game.addMove('9','O');}
  }

  if(game.checkWin()){
    
    publishOne=false;
    publishTwo=false;
    publishThree=false;
    publishFour=false;
    publishFive=false;
    publishSix=false;
    publishSeven=false;
    publishEight=false;
    publishNine = false;

    if(p1IsCurrent){
      SDL_RenderCopy(graphics.renderer,zeroWin.mTexture,NULL,NULL);
      Mix_PlayChannel( -1, win, 3 );
    }
    else if(p2IsCurrent){
      SDL_RenderCopy(graphics.renderer,xWin.mTexture,NULL,NULL);
      Mix_PlayChannel( -1, win, 3 );
    }
  }

    SDL_RenderPresent(graphics.renderer);




      //Event loop-------------------------------------------
    while(SDL_PollEvent(&event)){
      if(event.type==SDL_QUIT){
        quit=true;
      }
      if(event.type==SDL_KEYDOWN){


        switch(event.key.keysym.sym){
          case SDLK_1:
            one=true;
            break;
            case SDLK_2:
              two=true;
              break;
              case SDLK_3:
                three=true;

                break;
                case SDLK_4:
                  four=true;

                  break;
                  case SDLK_5:
                    five=true;

                    break;
                    case SDLK_6:
                      six=true;

                      break;
                      case SDLK_7:
                        seven=true;

                        break;
                        case SDLK_8:
                          eight=true;

                          break;
                          case SDLK_9:
                            nine=true;

                            break;


        }




      }
    }//---------------End Event loop------------------------------
      
  }



}
  Mix_Quit();
  return 0;
}
