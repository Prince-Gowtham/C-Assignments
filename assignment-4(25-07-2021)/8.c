#include<stdio.h>
int main()
{
   float x=13.4,y=5.3,z=13.4;
   int a=10,b=12;
   float c=x+a/3.7+a+++(a++,21,++b,x+z)-x/5+20.5/b-(x,++a,a=10,z);
   printf("%f %f %f %d %d \n",c,x,y,a,b);
}
