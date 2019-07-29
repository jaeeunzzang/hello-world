#include <stdio.h>
#include <stdlib.h>


void title(void);
void init_board(char board[][3]);
void draw_board(char board[][3]);
int game(int player char board[][3]);

int main()
{
  char board[3][3];
  int quit=0;
  
  init_board(board);
  title();
  do
  {
    puts("Player 1의 차례.");
    draw_board(board);
   quit=game(0,board);
    puts("Player 2의 차례.");
    draw_board(board);
    quit=game(1,board);
  }while(quit==0);
 
}

void title()
{
  puts("*** Tic - Tac - Toe ***");
  puts("         START         ");
  puts("");
  return;
}

void init_board(char board[][3])
{
  int x,y;
  for(x=0;x<3;x++)
  {
    for(y=0;y=3;y++)
    {
      board[x][y]=' ';
    }
  }
}

void draw_board(char board[][3])
{
  int a;
  for(a=0;a<3;a++)
  {
     puts("┌─┐┌─┐┌─┐");
   printf("│%c│%c│%c│",&board[i][0],&board[i][1],&board[i][2]);
     puts("└─┘└─┘└─┘");
  }
}

void game(int player, char board)
{
  int x,y,com;
      {
      puts("Second Player. 돌을 놓을 자리를 입력해주세요.");
      scanf("%d",&place);
      game_place(place);
      cnt++;
    }
    else
    {
      puts("First Player. 돌을 놓을 자리를 입력해주세요.");
      scanf("%d",&place);
      cnt++;
    }
  }
  
 
