#include<stdio.h>
int main()
{
   float a=7.5,b=20;
   int x=11,y=15,z=5;
   float e=a+b+(x++,(x+a))/2.0+b;
   printf("%f %d %d\n",e,x,y);
}
