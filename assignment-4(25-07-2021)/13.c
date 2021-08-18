#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1;
   int x=11,y=15,z=5;
   float e=12.5+x+2.3+y+(++x,y++,x+y,21,x=17,y=4,x+y)/2+d*1.5+c-10.5;
   float g=x+y+10+(x++,++z,(d+2.3*d/1.2))-a-b;
   printf("%f %f %d %d \n",e,g,x,y);
}
