//3)write a number pattern 010101 010101 010101.....?


#include<stdio.h>
int main()
{
    int i=5,j,k=0;
    while(i)
    {
	j=5;
	k=0;
	while(j)
	{
	    printf("%d",k);
	    j--;
	    if(k==0)
	    {
		k=1;
	    }
	    else if(k==1)
	    {
		k=0;
	    }
	}
	i--;
	printf("\n");
    }
}
