#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1;
   int x=11,y=15,z=5;
   float e=x+y+z+(x=x+2,y++,10,x/2)+(a+z++)-(b+c+d-a);
   printf("%f %d %d %d\n",e,x,y,z);
}


