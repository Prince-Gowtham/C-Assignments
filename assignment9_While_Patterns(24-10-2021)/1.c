//1)write a c program for print number pattern 11111 11111 11111...?


#include<stdio.h>
int main()
{
    int i,j=1,k;
    i=5;
    while(i)
    {
	k=1;
	while(k)
	{
	    printf("%d ",j);
	    k++;
	    if(k==6)
		break;
	}
	printf("\n");
	i--;
    }
}
