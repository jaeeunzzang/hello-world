#include <stdio.h>
#include <math.h>

int main()
{
  double x[20];
  double pyun[20];
 
  double sum,avg,qns,pyo;
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
    sum+=x[i];
 
  avg=sum/a;
 
  printf("평균은 :%lf\n",avg);
   //평균구하기
  
  puts("편차를 구합니다.");
  
  for(i=0;i<a;i++)
  {
    pyun[i]=x[i]-avg;
    printf("%d항의 편차: %lf\n",i+1,pyun[i]);
    
    pyun[i]=pow(pyun[i],pyun[i]);
    printf("%d항의 편차의 제곱: %lf\n",i+1,pyun[i]);
  }
  //편차, 편차제곱 구하기
  
  
  puts("분산을 구합니다");
  
    for(i=0;i<a;i++)
      qns+=pyun[i];
    
    qns=qns/a;
  printf("분산:%lf\n",qns);
    //분산구하기
  
  pyo=sqrt(qns);
  printf("표준편차: %lf\n",pyo);
  
  
  
}
