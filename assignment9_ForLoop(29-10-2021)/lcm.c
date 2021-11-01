//25)write a c program for given numbers lcm..?


#include<stdio.h>
int main()
{
    int x,y,z,a=1,b=1;
    for(scanf("%d%d",&x,&y),z=x>y?x:y; a<=z ;z++)
    {
	if(z%x==0 && z%y==0)
	{
	    printf("the least common divisor is %d\n",z);
	    break;
	}
    }
}
