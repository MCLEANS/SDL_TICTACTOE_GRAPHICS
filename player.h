#ifndef _PLAYER_H
#define _PLAYER_H

class Player{
private:

  char p1Symbol='X';
  char p2Symbol='O';


private:
public:
  int i=0;
  bool p1IsCurrent = false;
  bool p2IsCurrent = true;

public:

  char player1Play();
  char player2Play();

};


#endif //_PLAYER_H
