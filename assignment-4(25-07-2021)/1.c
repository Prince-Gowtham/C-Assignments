#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=1.4;
   int x=5,y=10,z=6;
   float e=x+y+(c=a+b,c/2)+z++;
   printf("%f %d %d %d\n",e,x,y,z);
}
