//10) write a c program for count the number of digits user entered ?


#include<stdio.h>
int main()
{
   long long int x,y,z=0,a;
    scanf("%lld",&x);
    while(x!=0)
    {
	z++;
	y=x/10;
	a=x%10;
	x=y;
    }
    printf("%lld digits user entered \n",z);
}
