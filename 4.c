//환전 프로그램
#include <stdio.h>

void main()
{
  double usd,krw,jpy;
  
  printf("한화 금액을 입력하세요 : ");
  scanf("%lf",&krw);
  
  usd=krw*0.00085;
  jpy=krw*0.0919;
  
  printf("%.2lf원은 %.2lf 달러 %.2lf 엔입니다." ,krw,usd,jpy);
}
         
         
