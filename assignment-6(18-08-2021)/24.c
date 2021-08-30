// 24) Write a cprogram for which is a menu-driven program to perform a simple calculation?
// Author : Gowtham B.E(CSE).,
//perpose of the code in this program we are using ternary operator and simplyfying the program


#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf(" 1 is Addition       :\n ");
    printf("2 is subration      :\n ");
    printf("3 is multiplication :\n ");
    printf("4 is division       :\n ");
    printf("Enter the number    : \n ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&a);
    ( (a==1)?printf("the addition of given two number x and y is  : %d ",z=x+y):( (a==2)?printf("the subtration of given two number  x and y is : %d ",z=x-y):( (a==3)?printf("the multiplication of given two number  x and y is  : %d ",z=x*y):(( a==4)?printf("the division of given two number  x and y is: %d ",z=x/y):printf("we need this conditions")))));
}    
