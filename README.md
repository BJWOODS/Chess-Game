# Chess-Game-in-C++

This is a  full functional 1970s retro-bit two player chess game.
  A B C D E F G H 
1 r k b w q b k r 
2 p p p p p p p p 
3 - - - - - - - - 
4 - - - - - - - - 
5 - - - - - - - - 
6 - - - - - - - - 
7 P P P P P P P P 
8 R K B W Q B K R 
Current Round
White = Lowercase & Black = uppercase
select a piece to move and where to move it. 
Ex.White moves (a2a3)

//Updated board
  A B C D E F G H 
1 r k b w q b k r 
2 - p p p p p p p    
3 p - - - - - - - 
4 - - - - - - - - 
5 - - - - - - - - 
6 - - - - - - - - 
7 P P P P P P P P 
8 R K B W Q B K R 


Black's Turn
select a piece to move and where to move it. 
  A B C D E F G H 
1 r k b w q b k r 
2 - p p p p p p p    
3 p - - - - - - - 
4 - - - - - - - - 
5 - - - - - - - - 
6 - - - - - - - - 
7 P P P P P P P P 
8 R K B W Q B K R 

//Black moves (g8f6); Moving the knight piece
//Updated board

 A B C D E F G H 
1 r k b w q b k r 
2 - p p p p p p p 
3 p - - - - - - - 
4 - - - - - - - - 
5 - - - - - - - - 
6 - - - - - K - - 
7 P P P P P P P P 
8 R K B W Q B - R 

//Illegal Moves

  A B C D E F G H 
1 r k b w q b k r 
2 - p p p p p p p 
3 p - - - - - - - 
4 - - - - - - - - 
5 - - - - - - - - 
6 - - - - - K - - 
7 P P P P P P P P 
8 R K B W Q B - R 
Current Round
White's turn
select a piece to move and where to move it. (example: a2a3): d1d2
//White tries to move king on to friendly pawn's space
You cannot move there e41 //Notification and error number will appear.
                          // This error number can be looked up in the code to reveal why a player cannot move there


