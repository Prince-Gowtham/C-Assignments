#include<stdio.h>
int main()
{
   float a=7.5,b=20;
   int x=11,y=15,z=5;
   float e=x+2.6+(z++,x++,10,z)+(a+b);
   printf("%f %d %d \n",e,x,y);
}
