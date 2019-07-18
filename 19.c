#include <stdio.h>

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);


int main()
{
  double a,c;
  char b;
  int cnt_a=0,cnt_s=0,cnt_m=0,cnt_d=0;
  
  puts("계산기 프로그램");
  puts("연산을 입력하세요");
  puts("예: 1+2 ");
  scanf("%d,%c,%d",&a,&b,&c);
  
  if(b=='+')
  {
    add(a,c);
    cnt_a++;
    printf("연산결과 : %.2lf\n",add_1);
    printf("덧셈은 총 %d번 실행되었습니다.\n",cnt_a);
  }
  else if(b=='-')
  {
    sub(a,c);
  else if(b=='*')
    mul(a,c);
  else if(b==/)
    div(a,c);
  else
    printf("정확한 연산자를 입력하세요.");
}

double add(double a, double b)
{
  int add_1;
  add_1=a+b;
  
  return add_1;
}
double sub(double a, double b)
double mul(double a, double b)
double div(double a, double b)

