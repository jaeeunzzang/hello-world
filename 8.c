#include <stdio.h>

void main()
{
  double x;
  double total;
  
  printf("x의 값을 입력하세요 : ");
  scanf("%lf",&x);
  
  total=(x*x*x*3)-(x*x*7)+9;
  
  printf("다항식의 값은 %.4lf 입니다. ",total);
}

  
