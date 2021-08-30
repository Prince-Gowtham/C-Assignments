// 6) Write a c program to read the value of an integer m and display th value of n is 1 when m is larger than 0,0 when mis 0 and -1 when m is less than 0?


#include<stdio.h>
int main()
{
    int m,n;
    printf(" enter the m value : \n");
    scanf("%d",&m);
    ( (m>0?printf("the value of n : %d",n=1):( (m==0)?printf("the value of n : %d",n=0):( (m<0)?printf("the value of n : %d",n=-1):printf("check the input")))));
}

