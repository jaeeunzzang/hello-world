//마일을 킬로미터로 변환

#include <stdio.h>

void main()
{
  double mile,km;
  
  printf("마일을 입력하세요 :");
  scanf("%lf",&mile);
  
  km=mile*1.609;
  printf("%.2lf 마일은 %.3lf 킬로미터 입니다.",mile,km);
  
}
