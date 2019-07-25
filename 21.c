#include <stdio.h>

int main()
{
  int a[]={10,20,30,40,50,60,70,80,90,100};
  
  int i,size;
  
  size=sizeof(a)/sizeof(a[0]);
  
  for(i=0;i<size;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
}

