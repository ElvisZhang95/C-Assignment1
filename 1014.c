/*
52505 Accepted 
*/
#include <stdio.h>

//set Pi as 3.13
#define PI 3.14
int main()
{
  int r,r1,r2;
  float areas=0;
  float circum=0;

//read input from the keyboard
  scanf("%d", &r1);
  scanf("%d", &r2);

//compute the sum of each circle
  for(r=r1;r<=r2;r++)
  {  
  areas+=PI*r*r;
  circum+=2*PI*r;
  }

  /*
  print as floating point which 
  have 3 characters after decimal point */
  printf("%.3f\n%.3f",areas,circum);
  return 0;
} 