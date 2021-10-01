//12)write a c program for user enter sum of first and last digit ?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b=1,l,k,c;
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
	c=l+k;
	printf("sum of first and last digit is : %d\n",c);
    }
}



