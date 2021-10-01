//11)write a c program for user enter first and last digit ?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b=1,l,k;
    scanf("%d",&x);
    a=x;
    while(a!=0)
    {
	y=a/10;
	z=z*10;
	a=y;
    }
    z=z/10;
    if(b==1)
    {
	l=x/z;
	k=x%10;
	printf("%d user enter first number last number is %d \n",l,k);
    }
}



