#include<stdio.h>
int main()
{
   int x=1,y=-1,z=0;
   int a =x++||y--&&z++;//a=1,x=2
   int b=--x&&y++||--z;//b=1,x=1,y=0
   int c=++x||++y&&z--;//c=1,x=2
   int d=x--&&--y||z--;//d=1,x=1,y=-1
   int e=x++||y--&&z++;//e=1,x=2
   printf("%d  %d %d %d %d %d %d %d \n",a,b,c,d,e,x,y,z);
}
