#include<stdio.h>
int main()
{
    int x;
    printf("Enter the values : \n");
    scanf("%d",&x);
    (x>0)?printf("its Positive"):( (x<0)?printf("its Negative"):printf("its alphabets"));
}
