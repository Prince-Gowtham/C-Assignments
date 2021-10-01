//4)write a c program to print all even number in 1 to 100?


#include<stdio.h>
int main()
{
    int x=0;
    while(x<=100)
    {
	printf("%d \n",x++);
	x++;
	if(x==102)
	    break;
    }
}
