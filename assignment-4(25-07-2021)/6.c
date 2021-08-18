#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1,e;
   int x=11,y=15,z=5;
   e=c+y+z+(z=21,z++,z%2)/2+c-(d*2);
   printf("%f %d %d %d\n",e,x,y,z);

}
