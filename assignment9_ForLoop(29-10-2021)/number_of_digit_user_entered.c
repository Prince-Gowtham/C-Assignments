//10)write a c program for number of digit user enterd..?


#include<stdio.h>
int main()
{
    int x,y,z=0;
    scanf("%d",&x);
    for( ;x;)
    {
	y=x/10;
	x=y;
	z++;
    }
    printf("%d digits user entered\n",z);
}
