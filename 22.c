#include <stdio.h>
#define SIZE 5

int main()
{
  int a[SIZE];
  int i,min;
  
  for(i=0;i<SIZE;i++)
  {
    printf("성적을 입력하세요:\n");
    scanf("%d",&a[i]);
  }
  
  min=a[0];
  
  for(i=0;i<SIZE;i++)
  {
    if(a[i]<min)
      min=a[i];
  }
  
  printf("최소값은 %d 입니다.",min);
}
  
