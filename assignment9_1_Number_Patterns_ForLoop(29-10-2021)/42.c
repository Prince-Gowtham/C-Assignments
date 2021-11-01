//42)wrrite a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
	for(j=2;j<=i*2;j=j+2)
	{
	    printf("%d",j);
	}
	for(j=(i-1)*2;j>=2;j=j-2)
	{
	    printf("%d",j);
	}
	printf("\n");
    }
}
