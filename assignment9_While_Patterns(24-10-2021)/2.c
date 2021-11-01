//2) write a c program for number pattern 11111 00000 11111?


#include<stdio.h>
int main()
{
    int i=5,j=1,k;
    while(i)
    {
	k=5;
	j=1;
	i--;
	while(k)
	{
	    printf("%d",j);
	    k--;
	}
	printf("\n");
	if(i==0)
	    break;
	j--;
	k=5;
	while(k--)
	{
	    printf("%d",j);
	}
	printf("\n");	
	i--;
    }
}
