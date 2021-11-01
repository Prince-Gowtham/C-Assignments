//21)write a c program for power of numbers...?


#include<stdio.h>
int main()
{
    int x,y,z=0;
    for(scanf("%d%d",&x,&y),z=x;x>1;--x)
    {
	z=z*y;
    }
    printf("%d",z);
}
