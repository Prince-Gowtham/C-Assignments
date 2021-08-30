// 20)write a c program in c to read any day in number and display in the name in the word?


#include<stdio.h>
int main()
{
    int x;
    printf("Enter the digit : \n");
    scanf("%d",&x);
    (x==1)?printf("Monday"):( (x==2)?printf("Thesday"):( (x==3)?printf("Wednesday"):( (x==4)?printf("Thersday"):( (x==5)?printf("Friday"):( (x==6)?printf("Saturday"):( (x==7)?printf("Sunday"):printf("Per weak seven days only")))))));
}					    
