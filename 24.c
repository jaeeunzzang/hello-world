#include <stdio.h>


void title(void);
void draw_game(void);
void game(void);
int game_place(int x);
int g_board[3][3]={0};


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
  int cnt=0;
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
        g_board[0][0]==2;
        
    
