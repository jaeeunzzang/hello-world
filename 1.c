#include <stdio.h>

void main()
{
  int sal;
  int dep;
  
  printf("월급입력");
  scanf("%d",&sal);
  
  dep=10*sal*12; //10년간의 연봉저축액
  
  printf("저축액은 %d 원 입니다.",dep);
}
