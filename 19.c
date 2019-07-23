#include <stdio.h>

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);

double add_1;
double sub_1;
double mul_1;
double div_1;
int cnt_a=0,cnt_s=0,cnt_m=0,cnt_d=0;

int main()
{
    double a=0,c=0;
    char b;
    puts("계산기 프로그램");
    puts("연산을 입력하세요");
    puts("예: 1+2 ");
    puts("종료는 0을 눌러주세요.");
    scanf("%lf %c %lf",&a,&b,&c);
  
    if(b=='+')
  {
    add_1=add(a,c);
    
    printf("연산결과 : %.2lf\n",add_1);
    printf("덧셈은 총 %d번 실행되었습니다.\n",cnt_a);
    
  }
  else if(b=='-')
  {
    sub_1=sub(a,c);
    
    printf("연산결과: %.2lf\n",sub_1);
    printf("뺄셈은 총 %d번 실행되었습니다.\n",cnt_s);
    
  }
  else if(b=='*')
  {
    mul_1=mul(a,c);
    
    printf("연산결과: %.2lf\n",mul_1);
    printf("곱셈은 총 %d번 실행되었습니다.\n",cnt_m);
   
  }
  else if(b=='/')
  {
    div_1=div(a,c);
    
    printf("연산결과: %.2lf\n",div_1);
    printf("나눗셈은 총 %d번 실행되었습니다.\n",cnt_d);
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
  
  cnt_a++;
  return a+b;
}
double sub(double a, double b)
{
  
  cnt_s++;
  return a-b;
}
           
double mul(double a, double b)
{
  
  
  cnt_m++;
  return a*b;
}
double div(double a, double b)
{
  
  cnt_d++;
  return a/b;
}

// 연산자 
