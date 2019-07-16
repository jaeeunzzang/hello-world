#include <stdio.h>

int a[20];
int ipower(int n, int k);

int main()
{
  int a,b;
  
  printf("밑수를 입력하세요 :\n");
  scanf("%d",&a);
  printf("제곱할 수를 입력하세요 :\n");
  scanf("%d",&b);
  
  ipower(a,b);
}

int ipower(int n,int k)
{
  int i,m;
  m=n; 
  
  printf("%d의 0 제곱 : 1\n",m);
  printf("%d의 1 제곱 : %d\n",m,m);
  
  for(i=0;i<k;i++)
  {  
    n=m*n;
    a[i]=n;
    printf("%d의 %d제곱 : %d\n",m,i,a[i]);
  }
}
// ?? 어떠케하지
