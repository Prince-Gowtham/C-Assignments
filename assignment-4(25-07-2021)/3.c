#include<stdio.h>
int main()
{
   float a=7.5,b=20;
   int x=11,y=15,z=5;
   float e=b-(x++,y++,z++,x=5)+a+x++-6+a;
   printf("%f %d %d\n",e,x,y);
}
