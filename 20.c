#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int a[5];
  
  for(i=0;i<5;i++)
  {
    a[i]=rand()%10;
  }
  
  for(i=0;i<5;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
}

    
