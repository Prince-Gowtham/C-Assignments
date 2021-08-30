// 23)write a c program in c to read any month number in integer and  display ths number of the days the month?
// AUTHOR : Gowtham S B.E(CSE).,



#include<stdio.h>
int main()
{
    int x;
    printf("Enter the digit : \n");
    scanf("%d",&x);
    ( (x==1)?printf("January Month have 31 days "):( (x==2)?printf("Feburary month have 28/29 days"):( (x==3)?printf("March month have 31 days"):( (x==4)?printf("April month have 30 days"):( (x==5)?printf("May month have 31 days"):( (x==6)?printf("June month have a 30 days"):( (x==7)?printf("July month have a 31 days"):( (x==8)?printf("Auguest month have 30 days"):( (x==9)?printf("September month have a 31 days"):( (x==10)?printf("October month have a 30 days"):( (x==11)?printf("November month have a 31 days "):( (x==12)?printf("December month have a 30 days"):printf("per year only have 12 months")))))))))))));
}
