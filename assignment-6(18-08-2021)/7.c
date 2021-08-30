// 7) Write a program for largest three numbers?


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the values : \n");
    scanf("%d %d %d",&x,&y,&z);
    ( (x>y&&x>z)?printf(" 1st number x: %d,2nd number y : %d,3rd number z :%d  the 1st number is greatest number among three number",x,y,z):( (y>x&&y>z)?printf("1st number x:%d ,2nd number y:%d,3rd number z:%d the 2n number is greatest number among three number",x,y,z):( (z>y&&z>x)?printf("1st number x:%d,2nd number y:%d,3rd number z: %d the 3rd number is greatest number among three number",x,y,z):printf("all are equal"))));
}		
