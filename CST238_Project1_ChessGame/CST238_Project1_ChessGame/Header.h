

#include <iostream>
using namespace std;
void ChessMoves(int x,int y, int newpos1, int   newpos2);
enum Color{black,white};
enum Figuretype{empty,pawn,knight,rook,bishop,king,queen};
struct chessfigure
{
    Figuretype figure;
    Color color;
    
};


void setboard();
void updateboard();
