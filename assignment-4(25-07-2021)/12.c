#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1;
   int x=11,y=15,z=5;
   float e=a*b+3.6-(x++,z=z+3,x/y)+d*c-3.2+10.2;
   float f=x+y+z+(z++,y++,a-d/2.4)+y/2+a*1.5+b*d;
   printf("%f %f %d %d \n",e,f,x,y);
}
