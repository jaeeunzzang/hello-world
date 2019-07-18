#include <stdio.h>

double quad_eqn(double a, double b, double c); //근 계산 함수

int main()
{
  double a,b,c;
  printf("이차 방정식 ax²+bx+c=0의 근 구하기\n");
  printf(" 이차방정식의 계수를 입력해주세요\n");
  printf(" a : \n");
  scanf("%lf",&a);
  printf(" b : \n");
  scanf("%lf",&b);
  printf(" c : \n");
  scanf("%lf",&c);
  
  quad_eqn(a,b,c);
  
}

double quad_eqn(double a, double b, double c)
{
  
