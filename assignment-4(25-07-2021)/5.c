#include<stdio.h>
int main()
{
   float a=7.5,b=20,c=21.3,d=8.1;
   int x=11,y=15,z=5;
   float e=a+c-(++x,y=y+z,z=2)/2.0+x+++(d*2);
   printf("%f %d %d\n",e,x,y);
}
