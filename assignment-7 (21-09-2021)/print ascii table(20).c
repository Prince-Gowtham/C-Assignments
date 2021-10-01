//20)write a c program for print all ascii charecter for ascii table?


#include<stdio.h>
int main()
{
    char x=1;
    while(x>=1&&x<=127)
    {
	printf(" %3c integer value is %3d \n",x,x);
	x++;
    }
}    
