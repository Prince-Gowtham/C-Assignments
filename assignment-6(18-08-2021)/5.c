// 6) write a c program to read the age of a candidate and determine whether it is eligble for casting his/her own vote?


#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Voter age : \n");
    scanf("%d",&x);
    (x>=18)?printf("congratulations! you are eligble for voting"):printf("your not eligble for voting");
}
