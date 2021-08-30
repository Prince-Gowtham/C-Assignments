#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(isalnum(x))
    {
	printf("it is alphanumeric\n");
	if(isdigit(x))
	{
	    printf("it is digit\n");
	}
	else if(isupper(x))
	{
	    printf("it is uppercase\n");
	}
	else if(islower(x))
	{
	    printf("it is lowercase\n");
	}
	 if(isxdigit(x))
	{
	    printf("it is hexadecimal digits\n");
	}
    }
    else
    {
            printf("it is not alphanumeric");
    }

}
