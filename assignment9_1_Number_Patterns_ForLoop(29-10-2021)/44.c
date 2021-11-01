//44)write a c program for given number pattern..?


#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
	k=i+1;
	for(j=3;j<=i;j++)
	{
	    printf("%d",k);
	    k++;
	}
	for(j=(i*2)-1;j>=i;j--)
	{
	    printf("%d",j);
	}
	printf("\n");
    }
}
