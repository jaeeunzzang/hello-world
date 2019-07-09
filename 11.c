#include <stdio.h>

void main()
{
  int x,y,z,num; //x=백자리수 y=십자리수 z=일자리수
  
  printf("세자리 숫자를 입력해 주세요:\n");
  scanf("%d",&num);
  
  x=num/100;
  num=num%100;
  
  y=num/10;
  z=num%10;
  
  printf("백의자리 수 : %d\n 십의자리 수 : %d\n 일의자리 수 : %d\n", x,y,z);
}

         
  
  
