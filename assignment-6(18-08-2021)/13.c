// 13) write a c program to check whether a triangle is equilateral,isosceless or scalene?

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of triangle : \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    ( (x==y&&y==z)?printf("this is the equlateral triangle"):( (x<y&&y<z)?printf("this is scalene triangle"):( (x==y&&y<z||x==z&&y<z)?printf("this is isosceles triangle"):printf("this all are equal"))));
}
