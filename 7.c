#include <stdio.h>

void main()
{
  double speed=300000;
  double dis=149600000;
  double time;
  
  time=dis/speed;
  time=time/60.0;
  
  printf("%.3lf",time);
}

