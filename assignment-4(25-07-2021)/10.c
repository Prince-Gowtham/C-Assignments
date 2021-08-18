#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1;
   int x=11,y=15,z=5;
   float e=a*d+2-(x++,y++,y=y+2,z=x+y)/5+x+++b/1.5*b-c+a;
   printf("%f %d %d \n",e,x,y);
}
