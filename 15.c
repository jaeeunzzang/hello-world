#include <stdio.h>

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
   
  for(i=0;i<2;i++)
  {    
     if(i==0)
       printf("%d의 0 제곱 : 1\n",m); 
     
    else
      printf("%d의 1 제곱 : %d\n",m,m);   
    

  }
}
// ?? 어떠케하지
