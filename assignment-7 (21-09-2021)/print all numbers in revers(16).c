//16)write a c program in print enter the number in reverse?


#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    while(x)
    {
	printf("%d\n",x--);
    }
}
