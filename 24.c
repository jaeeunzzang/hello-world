#include <stdio.h>


void title(void);
void draw_game(void);
void game(void);
int game_place(int x);
int g_board[3][3]={0};
char board[3][3];
int cnt=0;


int main()
{
  
  title();
  draw_game();
}

void title()
{
  puts("*** Tic - Tac - Toe ***");
  puts("         START         ");
  puts("");
  return;
}

void draw_game()
{
  puts("⑴⑵⑶");
  puts("⑷⑸⑹");
  puts("⑺⑻⑼");
  return;
}

void game()
{
  int place;
  for(i=0;i<9;i++)
  {
    
    if(cnt%2==0)
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
  
  int game_place(int x)
  {
    switch(x)
    {
      case 1:
        if(cnt%2==0)
        {
          g_board[0][0]=2;
          board[0][0]='X';
        }
        else
        {
          g_board[0][0]=1;
          board[0][0]='O';
        }
        break;
      case 2:
        if(cnt%2==0)
        {
          g_board[0][1]=2;
          board[0][1]='X';
        }
        else
        {
          g_board[0][1]=1;
          board[0][1]='O';
        }
        break;
      case 3:
        if(cnt%2==0)
        {
          g_board[0][2]=2;
          board[0][2]='X';
        }
        else
        {
          g_board[0][2]=1;
          board[0][2]='O';
        }
        break;
      case 4:
        if(cnt%2==0)
        {
          g_board[1][0]=2;
          board[1][0]='X';
        }
        else
        {
          g_board[1][0]=1;
          board[1][0]='O';
        }
        break;
      case 5:
       if(cnt%2==0)
        {
          g_board[1][1]=2;
          board[1][1]='X';
        }
        else
        {
          g_board[1][1]=1;
          board[1][1]='O';
        }
        break;
      case 6:
       if(cnt%2==0)
        {
          g_board[1][2]=2;
          board[1][2]='X';
        }
        else
        {
          g_board[1][2]=1;
          board[1][2]='O';
        }
        break;
      case 7:
        if(cnt%2==0)
        {
          g_board[2][0]=2;
          board[2][0]='X';
        }
        else
        {
          g_board[2][0]=1;
          board[2][0]='O';
        }
        break;
      case 8:
       if(cnt%2==0)
        {
          g_board[2][1]=2;
          board[2][1]='X';
        }
        else
        {
          g_board[2][1]=1;
          board[2][1]='O';
        }
        break;
      case 9:
        if(cnt%2==0)
        {
          g_board[2][2]=2;
          board[2][2]='X';
        }
        else
        {
          g_board[2][2]=1;
          board[2][2]='O';
        }
        break;
    }
