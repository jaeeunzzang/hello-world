#include <stdio.h>

void main()
{
  int a,b,sal,sum;
  printf("과세 표준을 입력하시오(만원) :");
  scanf("%d",&sal);
  
  if(sal<=1000)
  {
    a=sal*0.08;
    printf("소득세는 %d 만원 입니다.",a);
  }
  else if(sal>1000&&sal<=4000)
  {
    a=sal-1000;
    b=sal-a;
    b*=0.08;
    a*=0.16;
    sum=a+b;
    printf("소득세는 %d 만원 입니다.",sum);
  }
  else if(sal>4000&&sal<=8000)
  {
    a=sal-4000;
    b=sal-a;
    b*=0.16;
    a*=0.26;
    sum=a+b;
    printf("소득세는 %d 만원 입니다.",sum);
  }
  else
  {
    a=sal-8000;
    b=sal-a;
    b*=0.26;
    a*=0.35;
    sum=a+b;
    printf("소득세는 %d 만원 입니다.",sum);
  }
}
  
      
    
      
  
