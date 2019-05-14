#ifndef  _GAME_H
#define  _GAME_H

#include <iostream>

class Game{
private:
  char board[3][3] = {{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'}};



private:

public:
    bool winner = false;


public:

  bool checkWin();
  void addMove(char input,char val);




};



#endif //_GAME_H
