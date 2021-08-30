#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter the valuei : \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    a=x+y;
    (x>z&&y>z)?printf("the triangle is valid"):printf("the triangle is not valid");
}
