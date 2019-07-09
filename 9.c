#include <stdio.h>

void main()
{
  int time,min,sec;
  
  printf("시간(초)를 입력해 주세여: ");
  scanf("%d",&time);
  min=time/60;
  sec=time%60;
  
  printf("%d초는 %d분 %d 초 입니다.",time,min,sec);
}

