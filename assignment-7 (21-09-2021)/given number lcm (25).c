//25)write a c program for given two numbers lcm ?


#include<stdio.h>
int main()
{
    int x,y,z,a=1;
    scanf("%d%d",&x,&y);
    z=(x>y)?x:y;
    while(a)
    {
	if(z%x==0 && z%y==0)
	{
	    printf("Lcm of %d and %d is %d",x,y,z);
	    break;
	}
	z++;
    }
}
