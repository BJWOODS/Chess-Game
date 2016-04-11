#include <iostream>

using namespace std;

class MovementChecker
{
public:
     bool checkMove(char piece, char board[8][8],int y,int x,int ny,int nx); //Algorithms stored here
protected:
    bool good = true;
    char board[8][8];
    int x, y, nx, ny;
    char loc, nloc;
    char wk = 'w';
    char bk = 'W';
    
};
class BoardCreation : MovementChecker //sets default board and updates
{
public:
     void setboard(char board[8][8]);
    
  
protected:
    char board[8][8];
    
};
class ChessGame : public MovementChecker //runs checkmate
{
public:
    bool func();
};


