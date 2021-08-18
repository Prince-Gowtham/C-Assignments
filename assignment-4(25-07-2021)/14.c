#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1;
   int x=11,y=15,z=5;
   float e=x+++z/2.0+4*b/c-(x++,y++,z=x,x+y)%10+c-d*3-(2.0-a*b-c);
   float g=++z/2.0+x+++y-d/2.0+z+++y---(x++,++y,x*2.3);
   printf("%f %f %d %d %d\n",e,g,x,y,z);
}
