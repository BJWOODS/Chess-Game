//
//  Project_1_Woodard_source.cpp
//  xcodeChessGameTest
//
//  Created by Brandon Woodard on 10/18/15.
//  Copyright (c) 2015 Brandon Woodard. All rights reserved.
//

#include "P1_Woodard.h"
#include <iostream>
using namespace std;

bool MovementChecker::checkMove(char piece, char board[8][8],int y,int x,int ny,int nx)
{
    int dify = ny - y;
    
    int ay = nx + y;
    if (piece == 'p')
    {
        if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'q' || board[ny][nx] == 'w' || board[ny][nx] == 'r')
        {
            cout << "You cannot move there e1"<<endl;
            return false;
            }
        else if((board[ny][nx]=='P'&& nx==x+1 && ny==y+1) ||(board[ny][nx]=='K'&& nx==x+1 && ny==y+1) || (board[ny][nx]=='Q'&& nx==x+1 && ny==y+1) || (board[ny][nx]=='B'&& nx==x+1 && ny==y+1) || (board[ny][nx]=='R'&& nx==x+1 && ny==y+1) || (board[ny][nx]=='W'&& nx==x+1 && ny==y+1))
        {
            cout<<"ok";
            return true;
            
        }
        else if((nx>x && ny >y) || (nx<x && ny <y) || (nx>x && ny <y) || (nx>x && ny >y) )
        {
            
                cout<<"You cannot make that move e2"<<endl;
                return false;
            
            
        }
        
            
            else if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B' || board[ny][nx] == 'Q' || board[ny][nx] == 'W' || board[ny][nx] == 'R')
            {
                if (ny > y + 2)
                {
                    cout << "You cannot move there e3"<<endl;
                    return false;
                }
                if (nx > x + 2)
                {
                    cout << "You cannot move there e4"<<endl;
                    return false;
                }
                else if (ny > y + 1 == '-'|| nx > x =='-' || x < nx == '-' || ny < y == '-')
                {
                    cout << "You cannot move there e5"<<endl;
                    return false;
                }
            }
            else if (x == 1)
            {
                if (dify > x + 2)
                {
                    cout << "You cannot move there e6"<<endl;
                    return false;
                }
                else if (dify > 1 || dify < 1)
                {
                    cout << "You cannot move there e7"<<endl;
                    return false;
                }
                
            }
            else if (ny > y + 1 || nx> x || x < nx || ny < y)
            {
                cout << "You cannot move there e8"<<endl;
                return false;
            }
            else
            {
                return true;
            }
            }
            
            //-----------------------------------------------------------------------------------
            else if (piece == 'P')
            {
                
                if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B' || board[ny][nx] == 'Q' || board[ny][nx] == 'W' || board[ny][nx] == 'R')
                {
                    cout << "You cannot move there e9"<<endl;
                    return false;
                }
              else if((board[ny][nx]=='p'&& nx==x-1 && ny==y-1) ||(board[ny][nx]=='k'&& nx==x-1 && ny==y-1) || (board[ny][nx]=='q'&& nx==x-1 && ny==y-1) || (board[ny][nx]=='b'&& nx==x-1 && ny==y-1) || (board[ny][nx]=='r'&& nx==x-1 && ny==y-1) || (board[ny][nx]=='w'&& nx==x-1 && ny==y-1)|| (board[ny][nx]=='p'&& nx==x+1 && ny==y-1) ||(board[ny][nx]=='k'&& nx==x+1 && ny==y-1) || (board[ny][nx]=='q'&& nx==x+1 && ny==y-1) || (board[ny][nx]=='b'&& nx==x+1 && ny==y-1) || (board[ny][nx]=='r'&& nx==x+1 && ny==y-1) || (board[ny][nx]=='w'&& nx==x+1 && ny==y-1))
                {
                    
                    return true;
                    
                }
                else if((nx>x && ny >y) || (nx<x && ny <y) || (nx>x && ny <y) || (nx>x && ny >y) )
                {
                    cout<<"You cannot make that move e10"<<endl;
                    return false;
                    
                }
                
                else if (ny > y + 1 == '-'|| nx > x =='-' || x < nx == '-' || ny < y == '-')
                {
                    cout << "You cannot move there e11"<<endl;
                    return false;
                }
                
                else if (x == 6)
                {
                    if (ay < x - 2)
                    {
                        if (x - 2 > 4)
                        {
                            cout << "You cannot move there e12"<<endl;
                            return false;
                        }
                        else
                        {
                            if (nx > x)
                            {
                                cout << "You cannot move there e13"<<endl;
                                return false;
                            }
                        }
                        
                    }
                    else if (dify-1 > 1 || dify-1 < 1)
                    {
                        cout << "You cannot move there e14"<<endl;
                        return false;
                    }
                    
                }
                
                else
                {
                    return true;
                }
                
            }
            
            //---------------------------------------------------------------PawnRules complete;Now Starting rook rules
            if (piece == 'r')
            {
                if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'q' || board[ny][nx] == 'w' || board[ny][nx] == 'r')
                {
                    cout << "You cannot move there e16"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'p' || board[ny-1][nx-1] == 'k' || board[ny-1][nx-1] == 'b' ||board[ny-1][nx-1] == 'q' || board[ny-1][nx-1] == 'w' || board[ny-1][nx-1] == 'r')
                {
                    cout<<"You cannot move there e17"<<endl;
                    return false;
                }
                if (ny > y && nx > x)
                {
                    cout << "You cannot move there e18"<<endl;
                    return false;
                }
                else if (ny < y && nx < x)
                {
                    cout << "You cannot move there e19"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            }
            //-----------------------------------------------------------------------------------------
            if (piece == 'R')
            {
                if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B' || board[ny][nx] == 'Q' || board[ny][nx] == 'W' || board[ny][nx] == 'R')
                {
                    cout << "You cannot move there e20"<<endl;
                    return false;
                }
                else if(board[ny+1][nx+1] == 'P' || board[ny+1][nx+1] == 'K' || board[ny+1][nx+1] == 'B' ||board[ny+1][nx+1] == 'Q' || board[ny+1][nx+1] == 'W' || board[ny+1][nx+1] == 'R')
                {
                    cout<<"You cannot move there e22"<<endl;
                    return false;
                }

                if (ny < y && nx < x)
                {
                    cout << "You cannot move there e21"<<endl;
                    return false;
                }
                               else if (ny > y && nx > x)
                {
                    cout << "You cannot move there e23"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            }
            
            
            
            //------------------------------------------------------------------------------------------------
            if (piece == 'b')
            {
                if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'q' || board[ny][nx] == 'w' || board[ny][nx] == 'r')
                {
                    cout << "You cannot move there e24"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'p' || board[ny-1][nx-1] == 'k' || board[ny-1][nx-1] == 'b' ||board[ny-1][nx-1] == 'q' || board[ny-1][nx-1] == 'w' || board[ny-1][nx-1] == 'r')
                {
                    cout<<"You cannot move there e25"<<endl;
                    return false;
                }
                else if ((ny < y && nx == x) || (nx < x && ny == y) || (nx > x && ny == y) || (ny > y && nx == x))
                {
                    cout << "You cannot move there e26"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
                
            }
            if (piece == 'B')
            {
                if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B' || board[ny][nx] == 'Q' || board[ny][nx] == 'W' || board[ny][nx] == 'R')
                {
                    cout << "You cannot move there e27"<<endl;
                    return false;
                }
                else if(board[ny+1][nx-1] == 'P' || board[ny+1][nx+1] == 'K' || board[ny+1][nx+1] == 'B' ||board[ny+1][nx+1] == 'Q' || board[ny+1][nx+1] == 'W' || board[ny+1][nx+1] == 'R')
                {
                    cout<<"You cannot move there e28"<<endl;
                    return false;
                }
                else if ((ny < y && nx == x) || (nx < x && ny == y) || (nx > x && ny == y) || (ny > y && nx == x))
                {
                    cout << "You cannot move there e29"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
                
            }
            //------------------------------------------------------------------------------------------------------
            if (piece == 'k')
            {
                if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'q' || board[ny][nx] == 'w' || board[ny][nx] == 'r')
                {
                    cout << "You cannot move there e30"<<endl;
                    return false;
                }
                
                else if ((nx>x-3 && ny == y) || (ny>y-3 && nx == x) )
                {
                    
                    cout << "You cannot move there e31"<<endl;
                    return false;
                    
                }
                else if ((nx>x+3 && ny == y) || (ny>y+3 && nx == x) )
                {
                    
                    cout << "You cannot move there e32"<<endl;
                    return false;
                    
                }
                else if (y - ny == 2)
                {
                    if (x - nx != -1 || nx - x != 1)
                    {
                        cout << "You cannot move there e33"<<endl;
                        return false;
                    }
                    else
                    {
                        
                    }
                }
                
                else
                {
                    return true;
                }
            }
            if (piece == 'K')
            {
                if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B' || board[ny][nx] == 'Q' || board[ny][nx] == 'W' || board[ny][nx] == 'R')
                {
                    cout << "You cannot move there e34"<<endl;
                    return false;
                }
                else if ((nx<x+3 && ny == y) || (ny<y+3 && nx == x) )
                {
                    
                    cout << "You cannot move there e35"<<endl;
                    return false;
                    
                }
                else if ((nx>x+3 && ny == y) || (ny>y+3 && nx == x) )
                {
                    
                    cout << "You cannot move there e36"<<endl;
                    return false;
                    
                }
                else
                {
                    return true;
                }
            }
            //-----------------------------------------------------------------------------------------------------
            if (piece == 'q')
            {
                if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'w' || board[ny][nx] == 'r')
                {
                    cout << "You cannot move there e37"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'p' || board[ny-1][nx-1] == 'k' || board[ny-1][nx-1] == 'b' ||board[ny-1][nx-1] == 'q' || board[ny-1][nx-1] == 'w' || board[ny-1][nx-1] == 'r')
                {
                    cout<<"You cannot move there e38"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            }
            if (piece == 'Q')
            {
                if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B' || board[ny][nx] == 'W' || board[ny][nx] == 'R')
                {
                    cout << "You cannot move there e39"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'P' || board[ny-1][nx-1] == 'K' || board[ny-1][nx-1] == 'B' ||board[ny-1][nx-1] == 'Q' || board[ny-1][nx-1] == 'W' || board[ny-1][nx-1] == 'R')
                {
                    cout<<"You cannot move there e40"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            };
            //----------------------------------------------------------------------------------------------------------
            if (piece == 'w')
            {
                
                if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'w' || board[ny][nx] == 'r')
                {
                    cout << "You cannot move there e41"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'p' || board[ny-1][nx-1] == 'k' || board[ny-1][nx-1] == 'b' ||board[ny-1][nx-1] == 'q' || board[ny-1][nx-1] == 'w' || board[ny-1][nx-1] == 'r')
                {
                    cout<<"You cannot move there e42"<<endl;
                    return false;
                }
                else if (ny > y + 1 || nx > x || x < nx || ny < y)
                {
                    cout << "You cannot move there e43"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            }
            //---------------------------------------------------------------------------------------------------------------
            if (piece == 'W')
            {
                
                if (board[ny][nx] == 'P' || board[ny][nx] == 'K' || board[ny][nx] == 'B'  || board[ny][nx] == 'R')
                {
                    cout << "You cannot move there e44"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'P' || board[ny-1][nx-1] == 'K' || board[ny-1][nx-1] == 'B' ||board[ny-1][nx-1] == 'Q' || board[ny-1][nx-1] == 'W' || board[ny-1][nx-1] == 'R')
                {
                    cout<<"You cannot move there e45"<<endl;
                    return false;
                }
                else if (ny > y + 1 || nx > + x || nx<x-1 || ny < y-1)
                {
                    cout << "You cannot move there e46"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            }
            if (piece == 'w')
            {
                
                if (board[ny][nx] == 'p' || board[ny][nx] == 'k' || board[ny][nx] == 'b' || board[ny][nx] == 'r')
                {
                    cout << "You cannot move there e47"<<endl;
                    return false;
                }
                else if(board[ny-1][nx-1] == 'p' || board[ny-1][nx-1] == 'k' || board[ny-1][nx-1] == 'b' ||board[ny-1][nx-1] == 'q' || board[ny-1][nx-1] == 'w' || board[ny-1][nx-1] == 'r')
                {
                    cout<<"You cannot move there e48"<<endl;
                    return false;
                }
                else if (ny > y + 1 || nx > +x || nx<x - 1 || ny < y - 1)
                {
                    cout << "You cannot move there e49"<<endl;
                    return false;
                }
                else
                {
                    return true;
                }
            }
            return true;
};
void BoardCreation::setboard(char board[8][8])
{
    for (int y = 0; y < 8; y++){
        for (int x = 0; x < 8; x++){
            board[x][y] = '-';
        }
    }



    for (int i = 0; i < 8; i++)
    {
        board[1][i] = 'p';
        board[6][i] = 'P';
    }
    board[0][0] = board[0][7] = 'r';
    board[7][0] = board[7][7] = 'R';
    board[0][1] = board[0][6] = 'k';
    board[7][1] = board[7][6] = 'K';
    board[0][2] = board[0][5] = 'b';
    board[7][2] = board[7][5] = 'B';
    board[0][3] = 'w';
    board[7][3] = 'W';
    board[0][4] = 'q';
    board[7][4] = 'Q';
    cout << endl;
    cout << "  A B C D E F G H " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << i + 1 << " ";
        for (int x = 0; x < 8; x++)
        {
            cout << board[i][x] << " ";
        }
        cout << endl;
    }
    
}
bool ChessGame::func()
    {
        MovementChecker c;

        BoardCreation b;

        b.setboard(board);
        
        while (wk != '-' && bk != '-')
        {
            do
            {
                
                cout<<"Current Round"<<endl;
                cout<<"White = Lowercase & Black = uppercase"<<endl;
                good = true;
                cout << "select a piece to move and where to move it. (example: a1a2): ";
                cin >> loc;
                cin >> y;
                cin >> nloc;
                cin >> ny;
                y--;
                ny--;
                if (loc == 'A' || loc == 'a')
                {
                    x = 0;
                }
                else if (loc == 'B' || loc == 'b')
                {
                    x = 1;
                }
                else if (loc == 'C' || loc == 'c')
                {
                    x = 2;
                }
                else if (loc == 'D' || loc == 'd')
                {
                    x = 3;
                }
                else if (loc == 'E' || loc == 'e')
                {
                    x = 4;
                }
                else if (loc == 'F' || loc == 'f')
                {
                    x = 5;
                }
                else if (loc == 'G' || loc == 'g')
                {
                    x = 6;
                }
                else if (loc == 'H' || loc == 'h')
                {
                    x = 7;
                }
                else
                {
                    cout << "unable to make that move" << endl;
                    good = false;
                }
                
                if (y > 7 || y < 0 || ny >7 || ny < 0)
                {
                    cout << "unable to make that move" << endl;
                    good = false;
                }
                
                if (nloc == 'A' || nloc == 'a')
                {
                    nx = 0;
                }
                else if (nloc == 'B' || nloc == 'b')
                {
                    nx = 1;
                }
                else if (nloc == 'C' || nloc == 'c')
                {
                    nx = 2;
                }
                else if (nloc == 'D' || nloc == 'd')
                {
                    nx = 3;
                }
                else if (nloc == 'E' || nloc == 'e')
                {
                    nx = 4;
                }
                else if (nloc == 'F' || nloc == 'f')
                {
                    nx = 5;
                }
                else if (nloc == 'G' || nloc == 'g')
                {
                    nx = 6;
                }
                else if (nloc == 'H' || nloc == 'h')
                {
                    nx = 7;
                }
                else
                {
                    cout << "unable to make that move" << endl;
                    good = false;
                }
                if (board[y][x] == '-')
                {
                    good = false;
                    cout << "There's no piece there to move." << endl;
                }
            } while (good == false);
            good = true;
            
            
            char piece = board[y][x];
            //cout << checkMove(piece, board, y, x, ny, nx) << endl;
            if (c.checkMove(piece, board, y, x, ny, nx) != false)
            {
                if (board[ny][nx] == 'W' || board[ny-1][nx] == 'W' || board[ny][nx-1] == 'W' )
                {
                    cout << "White team wins!" << endl;
                    return 0;
                }
                if (board[ny][nx] == 'w'|| board[ny+1][nx] == 'w' || board[ny][nx+1] == 'w')
                {
                    cout << "Black team wins!" << endl;
                    return 0;
                }
                board[ny][nx] = board[y][x];
                board[y][x] = '-';
                cout << board[ny][nx] << endl;
                
            }
            
            cout << endl;
            cout << "  A B C D E F G H " << endl;
            for (int i = 0; i < 8; i++)
            {
                cout << i + 1 << " ";
                for (int x = 0; x < 8; x++)
                {
                    cout << board[i][x] << " ";
                }
                cout << endl;
            }
        }
        system("pause");
        return 0;
    };
