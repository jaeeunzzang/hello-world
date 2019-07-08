//연봉계산 프로그램

#include <stdio.h>
#define MONTH 12

void main()
{
  int m_sal,y_sal;
  
  printf("월급을 입력하세요. : ");
  scanf("%d",&m_sal);
  y_sal= MONTH * m_sal;
  printf("연봉은 %d 입니다.",y_sal);
}

