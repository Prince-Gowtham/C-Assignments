// 5) write a c program for print all odd numbers ?


#include<stdio.h>
int main()
{
    int x=1;
    while(x)
    {
	printf("%d\n",x++);
	x++;
	if(x==101)
	    break;
    }
}
