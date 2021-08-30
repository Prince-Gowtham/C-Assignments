// 12) Write a c program for weather conditions?
//Author: Gowtham.,            19/08/2021:
//Purpose: in this program we are using ternary operator;




#include<stdio.h>
int main()
{
    int x;
    printf("enter the temprature : \n");
    scanf("%d",&x);
    (x<0)?printf("freasing Wether"):( (x>0&&x<=10)?printf("very cold weather"):( (x>=10&&x<=20)?printf("cold weather"):( (x>=30&&x<=40)?printf("it is hot"):( (x>=40)?printf("it is very hot"):( (x>=20&&x<=30)?printf("normal temprature"):printf("write the condition"))))));
}
