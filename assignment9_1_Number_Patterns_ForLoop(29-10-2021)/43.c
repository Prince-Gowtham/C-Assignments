//43)wrrite a c program for given number pattern...?


#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=i;j++)
	{
	    printf("%d",j);
	}
	for(j=i-1;j>=1;j--)
	{
	    printf("%d",j);
	}
	printf("\n");
    }
}
