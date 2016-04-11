//
//  main.cpp
//  CST238_Project1_ChessGame
//
//  Created by Brandon Woodard on 10/11/15.
//  Copyright (c) 2015 Brandon Woodard. All rights reserved.
//

#include <iostream>
#include "Header.h"
using namespace std;
chessfigure board[8][8];
int x;
int y;

    void setboard()
    {
        
       
        
        board[0][0].figure=rook;
        board[0][1].figure=knight;
        board[0][2].figure=bishop;
        board[0][3].figure=queen;
        board[0][4].figure=king;
        board[0][5].figure=bishop;
        board[0][6].figure=knight;
        board[0][7].figure=rook;
        
        board[1][0].figure=pawn;
        board[1][1].figure=pawn;
        board[1][2].figure=pawn;
        board[1][3].figure=pawn;
        board[1][4].figure=pawn;
        board[1][5].figure=pawn;
        board[1][6].figure=pawn;
        board[1][7].figure=pawn;
        
        board[0][0].color=black;
        board[0][1].color=black;
        board[0][2].color=black;
        board[0][3].color=black;
        board[0][4].color=black;
        board[0][5].color=black;
        board[0][6].color=black;
        board[0][7].color=black;
        
        board[1][0].color=black;
        board[1][1].color=black;
        board[1][2].color=black;
        board[1][3].color=black;
        board[1][4].color=black;
        board[1][5].color=black;
        board[1][7].color=black;
        
        for(int i=2;i<6;i++)
        {
            board[i][0].figure=empty;
            board[i][1].figure=empty;
            board[i][2].figure=empty;
            board[i][3].figure=empty;
            board[i][4].figure=empty;
            board[i][5].figure=empty;
            board[i][6].figure=empty;
            board[i][7].figure=empty;
        }
        board[6][0].figure=pawn;
        board[6][1].figure=pawn;
        board[6][2].figure=pawn;
        board[6][3].figure=pawn;
        board[6][4].figure=pawn;
        board[6][5].figure=pawn;
        board[6][6].figure=pawn;
        board[6][7].figure=pawn;
        
        board[7][0].figure=rook;
        board[7][1].figure=knight;
        board[7][2].figure=bishop;
        board[7][3].figure=queen;
        board[7][4].figure=king;
        board[7][5].figure=bishop;
        board[7][6].figure=knight;
        board[7][7].figure=rook;
        
        board[6][0].color=white;
        board[6][1].color=white;
        board[6][2].color=white;
        board[6][3].color=white;
        board[6][4].color=white;
        board[6][5].color=white;
        board[6][6].color=white;
        board[6][7].color=white;
        
        board[7][0].color=white;
        board[7][1].color=white;
        board[7][2].color=white;
        board[7][3].color=white;
        board[7][4].color=white;
        board[7][5].color=white;
        board[7][6].color=white;
        board[7][7].color=white;
        
            
            cout<<"  A  B  C  D  E  F  G  H";
            int z=8;
            for(int i=1;i<=8;i++)
            {
                
                
                z--;
                
                cout<<endl;
                cout<<z+1;
                for(int j=1;j<=8;j++)
                {
                    if(board[i-1][j-1].figure==queen &&  board[i-1][j-1].color==white)
                    {
                        cout<<" ♕ ";
                    }
                    
                    if(board[i-1][j-1].figure==queen &&  board[i-1][j-1].color==black)
                    {
                        cout<<" ♛ ";
                    }
                    
                    if(board[i-1][j-1].figure==king &&  board[i-1][j-1].color==white)
                    {
                        cout<<" ♔ ";
                    }
                    
                    if(board[i-1][j-1].figure==king &&  board[i-1][j-1].color==black)
                    {
                        cout<< " ♚ ";
                    }
                    if(board[i-1][j-1].figure==bishop &&  board[i-1][j-1].color==white)
                    {
                        cout<<" ♗ ";
                    }
                    if(board[i-1][j-1].figure==bishop &&  board[i-1][j-1].color==black)
                    {
                        cout<<" ♝ ";
                    }
                    if(board[i-1][j-1].figure==rook &&  board[i-1][j-1].color==white)
                    {
                        cout<<" ♖ ";
                    }
                    if(board[i-1][j-1].figure==rook &&  board[i-1][j-1].color==black)
                    {
                        cout<<" ♜ ";
                    }
                    if(board[i-1][j-1].figure==knight &&  board[i-1][j-1].color==white)
                    {
                        cout<<" ♘ ";
                    }
                    
                    if(board[i-1][j-1].figure==knight &&  board[i-1][j-1].color==black)
                    {
                        cout<<" ♞ ";
                    }
                    if(board[i-1][j-1].figure==empty)
                    {
                        cout<<" - ";
                    }
                    if(board[i-1][j-1].figure==pawn && board[i-1][j-1].color==black)
                    {
                        cout<<" ♟ ";
                    }
                    if(board[i-1][j-1].figure==pawn && board[i-1][j-1].color==white)
                    {
                 
                
                            cout<<" ♙ ";
                    }
                    
                    
                }
                
            }
            
    };


int i=1;
int j=1;
void updateboard()
{
    
        cout<<"Enter value: ";
    cin>>x>>y;
    
    cout<<"  A  B  C  D  E  F  G  H"<<endl;
        int z=8;
        for(;i<=8;i++)
        {
            
            
            z--;
            
            cout<<endl;
            cout<<z+1;
            for(;j<=8;j++)
            {
                if(board[i-1][j-1].figure==queen &&  board[i-1][j-1].color==white)
                {
                    cout<<" ♕ ";
                }

                if(board[i-1][j-1].figure==queen &&  board[i-1][j-1].color==black)
                {
                    cout<<" ♛ ";
                }

                if(board[i-1][j-1].figure==king &&  board[i-1][j-1].color==white)
                {
                    cout<<" ♔ ";
                }

                if(board[i-1][j-1].figure==king &&  board[i-1][j-1].color==black)
                {
                     cout<< " ♚ ";
                }
                if(board[i-1][j-1].figure==bishop &&  board[i-1][j-1].color==white)
                {
                    cout<<" ♗ ";
                }
                if(board[i-1][j-1].figure==bishop &&  board[i-1][j-1].color==black)
                {
                    cout<<" ♝ ";
                }
                if(board[i-1][j-1].figure==rook &&  board[i-1][j-1].color==white)
                {
                    cout<<" ♖ ";
                }
                if(board[i-1][j-1].figure==rook &&  board[i-1][j-1].color==black)
                {
                    cout<<" ♜ ";
                }
                if(board[i-1][j-1].figure==knight &&  board[i-1][j-1].color==white)
                {
                    cout<<" ♘ ";
                }
                
                if(board[i-1][j-1].figure==knight &&  board[i-1][j-1].color==black)
                {
                    cout<<" ♞ ";
                }
                if(board[i-1][j-1].figure==empty)
                {
                    cout<<" - ";
                }
                if(board[i-1][j-1].figure==pawn && board[i-1][j-1].color==black)
                {
                    cout<<" ♟ ";
                }
                for(int w;w<8;w++){
                if(board[i-1][j-1].figure==pawn && board[i-1][j-1].color==white)
                {
                    if(x==i+1 && y==j+1)
                    {
                        board[i][j].figure=empty;
                        ChessMoves(i,j,x,y);
                        
                        board[i][j].figure=pawn; //set new values equal to chessfigure
                        board[i][j].color=white;
                        cout<<" ♙ ";
                    }
                    else
                    {
                     cout<<" ♙ ";
                    }
                }
                }
                
            }
            
        }
      
    
};








void ChessMoves(int i,int j, int x, int  y)
{
  
  
    
    if(x==i+1 && y==j+1)
    {
        j++;
        if(i==6 && y==j+2)
        {
            j++;  //Incrementing for the 2nd time
        }
        else
        {
            cout<<"invalid input";
            cout<<"Try again";
        
        }
        
    }
    else
    {
        cout<<"invalid input";
        cout<<"Try again";
        
    }

    

};
