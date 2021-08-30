// 22)write a c program in c to read any month number in integer and  display month in the word?


#include<stdio.h>
int main()
{
    int x;
    printf("Enter the digit : \n");
    scanf("%d",&x);
    ( (x==1)?printf("January"):( (x==2)?printf("Feburary"):( (x==3)?printf("March"):( (x==4)?printf("April"):( (x==5)?printf("May"):( (x==6)?printf("June"):( (x==7)?printf("July"):( (x==8)?printf("Auguest"):( (x==9)?printf("September"):( (x==10)?printf("October"):( (x==11)?printf("November"):( (x==12)?printf("December"):printf("per year only have 12 months")))))))))))));
}					    
