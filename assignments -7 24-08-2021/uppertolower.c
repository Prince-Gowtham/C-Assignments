#include<stdio.h>
#include<ctype.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(int toupper(x))
    {
	printf("%c",x);
    }
    else if(int tolower(x))
    {
	printf("%c",x);
    }
}
