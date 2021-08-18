#include<stdio.h>
int main()
{
    int x;
    printf("enter the year : \n");
    scanf("%d",&x);
    ((x%4==0)&&(x%100!=0)||(x%400==0))?printf("its leap year"):printf("its not leap year");
}
	
