#include "game.h"

void Game::addMove(char input,char val){
  switch(input){
    case '1':
      board[0][0]=val;
      break;
      case '2':
        board[0][1]=val;
        break;
        case '3':
          board[0][2]=val;
          break;
          case '4':
            board[1][0]=val;
            break;
            case '5':
              board[1][1]=val;
              break;
              case '6':
                board[1][2]=val;
                break;
                case '7':
                  board[2][0]=val;
                  break;
                  case '8':
                    board[2][1]=val;
                    break;
                    case '9':
                      board[2][2]=val;
                      break;
  }
}

bool Game::checkWin(){
  bool win = false;
  if((board[0][0] == board[0][1]) && (board[0][0]==board[0][2])) win=true;
  if((board[1][0] == board[1][1]) && (board[1][0]==board[1][2])) win=true;
  if((board[2][0] == board[2][1]) && (board[2][0]==board[2][2])) win=true;
  if((board[0][0] == board[1][0]) && (board[0][0]==board[2][0])) win=true;
  if((board[0][1] == board[1][1]) && (board[0][1]==board[2][1])) win=true;
  if((board[0][2] == board[1][2]) && (board[0][2]==board[2][2])) win=true;
  if((board[0][0] == board[1][1]) && (board[0][0]==board[2][2])) win=true;
  if((board[0][2] == board[1][1]) && (board[0][2]==board[2][0])) win=true;

  return win;

}
