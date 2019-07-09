#include <stdio.h>
#define WEEK 26

void main()
{
  int num,add,total,a;
  
  printf("첫 주에 입금할 금액을 입력하세요: \n");
  scanf("%d",&num);
  
  printf("증액할 금액을 알려주세요: \n");
  scanf("%d",&add);
  
  total=num;
  
  for(a=1;a<=WEEK;a++)
  {
    
    printf("%d주에 입금되는 금액은 %d원 입니다.\n",a,num);
    printf("%d주의 총 저축액은 : %d 원입니다.\n\n",a,total);
    num=num+add;
    total=num+total;
   
  }
}

  
  
