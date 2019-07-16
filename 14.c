#include <stdio.h>

int b[20];

int get_divisor(int a);

int main()
{
  int n;
  
  printf("약수를 구할 정수를 입력해 주세요:\n");
  scanf("%d",&n);
  printf("%d의 약수는 ",n);
  get_divisor(n);
  printf("입니다");
}

int get_divisor(int a)
{
  int i;
  int j=0;
  int cnt=0;
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    {
      b[j]=i;
      j++;
      cnt++;
    }
  }
  
  for(j=0;j<cnt;j++)
  {
    printf("%d ",b[j]);
  }
}
