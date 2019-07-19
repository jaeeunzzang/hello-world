#include <stdio.h>

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);

double add_1;
double sub_1;
double mul_1;
double div_1;

int main()
{
  double a,c;
  char b;
  int cnt_a=0,cnt_s=0,cnt_m=0,cnt_d=0;
  
  puts("계산기 프로그램");
  puts("연산을 입력하세요");
  puts("예: 1+2 ");
  puts("종료는 0을 눌러주세요.");
  scanf("%lf,%c,%lf",&a,&b,&c);
  
  while(1)
  {
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
    cnt_s++;
    printf("연산결과: %.2lf\n",sub_1);
    pritnf("뺄셈은 총 %d번 실행되었습니다.\n",cnt_s);
  }
  else if(b=='*')
  {
    mul(a,c);
    cnt_m++;
    printf("연산결과: %.2lf\n",mul_1);
    pritnf("곱셈은 총 %d번 실행되었습니다.\n",cnt_m);
  }
  else if(b==/)
  {
    div(a,c);
    cnt_d++;
    printf("연산결과: %.2lf\n",div_1);
    pritnf("나눗셈은 총 %d번 실행되었습니다.\n",cnt_d);
  }
    else if(a==0)
      break;
  else
    printf("정확한 연산자를 입력하세요.");
}
  printf("종료합니다.");
}

double add(double a, double b)
{
  
  add_1=a+b;
  
  return add_1;
}
double sub(double a, double b)
{
  
  sub_1=a-b;
  
  return sub_1;
}
           
double mul(double a, double b)
{
  
  mul_1=a*b;
  
  return mul_1;
}
double div(double a, double b)
{
  
  div_1=a/b;
  
  return div_1;
}

