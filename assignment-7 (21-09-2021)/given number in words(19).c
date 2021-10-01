//19)write a c program for given number in words?


#include<stdio.h>
int main()
{
    int x,y,z=1,a,b;
    scanf("%d",&x);
    y=x;
    while(y)
    {
	z=z*10;
	y=y/10;
    }
    z=z/10;
    while(z)
    {
	a=x/z;
	b=x%z;
	z=z/10;
	x=b;
	if(a==0)
	{
	    printf("Zer0\n");
	}
	else if(a==1)
	{
	    printf("One\n");
	}
	else if(a==2)
	{
	    printf("Two\n");
	}
	else if(a==3)
	{
	    printf("Three\n");
	}
	else if(a==4)
	{
	    printf("Four\n");
	}
	else if(a==5)
	{
	    printf("Five\n");
	}
	else if(a==6)
	{
	    printf("Six\n");
	}
	else if(a==7)
	{
	    printf("Seven\n");
	}
	else if(a==8)
	{
	    printf("Eight\n");
	}
	else if(a==9)
	{
	    printf("Nine\n");
	}
    }
}
    

