#include <stdio.h>
#include <math.h>

//원의 면적 구하기

void main()
{
  double rad; //반지름
  double area;
  
  printf("반지름을 입력하세요(cm) : ");
  scanf("%lf",&rad);
  
  area=3.14*pow(rad,2);
  
  printf("원의 면적은 %.2lf cm2입니다: ",area);
}

 
  
