//33)write a c program for print 1 to n perfect numbers ?


#include<stdio.h>
int main()
{
    int x,y=1,z,sum=0;
    scanf("%d",&z);
    while(y<=z)
    {	
	x=1;
	while(x<=(y/2))
	{
	    if(y%x==0)
		sum=sum+x;
		x++;
	}
	    if(sum==y)
		printf("%d\n",y);
		sum=0; 
		y++;
    }
}

