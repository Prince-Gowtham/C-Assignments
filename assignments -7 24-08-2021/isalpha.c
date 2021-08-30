#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(isalpha(x))
    {
	printf("it is alpha\n");
	if(isupper(x))
		{
		printf("it is upper \n");
		}
		else if(islower(x))
		{
		    printf("it is lower\n");
		}
    }
    else 
    {
	printf("it is not alpha");
    }
}

