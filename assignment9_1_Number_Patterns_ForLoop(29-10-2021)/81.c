//81)write a c program fot given diamond pyramid star pattern...?


#include<stdio.h>
int main()
{
    int x,y,z,a=5;
    for(x=1;x<=9;x=x+2)
    {
	for(z=a;z;z--)
	{
	    printf(" ");
	}
	for(y=1;y<=x;y++)
	{
	    printf("*");
	}
	printf("\n");
	a--;
    }
    if(x==11)
	for(a=1,x=9;x;x=x-2)
	{
	    if(x<0)
		break;
	    for(z=1 ;z<=a;z++)
	    {
		printf(" ");
	    }
	    for(y=1;y<=x;y++)
	    {
		printf("*");
	    }
	    printf("\n");
	    a++;
	}
}
