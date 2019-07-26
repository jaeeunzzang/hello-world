#include <stdio.h>

int main()
{
  double x[20];
  double sum,avg,qns,vus;
  int i;
  int a=0;
  
  for(i=0;i<20;i++)
  {
    printf("실수를 입력하세요. %d 번째\n",i+1);
    puts("입력종료시 0");
    scanf("%lf",&x[i]);
    
    if(x[i]==0)
      break;
  }
  
  printf("평균을 구합니다.");
  printf("현재 입력된 실수의 갯수:%d\n",i);
  
  a=i; //실수 갯수 a에 저장.
  
  for(i=0;i<a;i++)
  {
    sum+=x[i];
  }
  
  avg=sum/a;
  printf("평균은 :%lf\n",avg);
  
  puts("분산을 구합니다");
  qns=x[i]
  
  
}
