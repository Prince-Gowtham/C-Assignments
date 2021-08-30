#include<stdio.h>
int main()
{
    char x;
    printf("Enter the charecter : \n");
    scanf("%c",&x);
    (x>=33&&x<=47||x>=58&&x<=64||x>=91&&x<=96)?printf("it is special charecters"):( (x>=65&&x<=90||x>=97&&x<=122)?printf("it is alphabets"):( (x>=48&&x<=57)?printf("it is digit"):printf("given input was not in condition")));
}
