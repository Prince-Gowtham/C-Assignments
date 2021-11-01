//11)write a c program for given number first and last digit..?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b=1;
    scanf("%d",&x);
    for(a=x;a; )
    {
	a=a/10;
	z=z*10;
    }
    z=z/10;
    if(b)
    {
	y=x/z;
	a=x%10;
	printf("User enter first and last digit is %d %d\n",y,a);
	b--;
    }
}

