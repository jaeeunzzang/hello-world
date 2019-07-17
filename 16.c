
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
  
 for(i=0;i<=k;i++)
 {
   if(i==0)
     printf("%d의 0제곱 : 1\n",m);
   else if(i==1)
     printf("%d의 1제곱 : %d\n",m,m);
   else
   {
     n=m*n;
     a[i]=n;
     printf("%d의 %d제곱 : %d\n",m,i,a[i]);
   }
 }
}
// for문 이용 거듭제곱 함수.
