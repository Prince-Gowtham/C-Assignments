// 4) write a c program for given year is a leap year or not?


#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year : \n");
    scanf("%d",&x);
    ((x%4==0)&&(x%100!=0)||(x%400==0))?printf("given number is leap year"):printf("not leap year");
}
