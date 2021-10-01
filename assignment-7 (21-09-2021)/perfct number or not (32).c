//32)write a c program to find perfect numbers or not?


#include<stdio.h>
int main()
{
    int x,y,z,c=1,sum=0;
    scanf("%d",&x);
    y=x;
    while(c<y)
    {
	if(y%c==0)
	{
	    sum=sum+c;
	}
	c++;
    }
    if(sum==c)
    {
	printf("it is perfect number\n");
    }
    else
    {
	printf("it is not perfect number\n");
    }
}
