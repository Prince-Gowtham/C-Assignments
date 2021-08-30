// 18)write a c program in c to read any digit display in the word?


#include<stdio.h>
int main()
{
    int x;
    printf("Enter the digit : \n");
    scanf("%d",&x);
    (x==0)?printf("Zero"):( (x==1)?printf("one"):( (x==2)?printf("Two"):( (x==3)?printf("Three"):( (x==4)?printf("Four"):( (x==5)?printf("Five"):( (x==6)?printf("Six"):( (x==7)?printf("Seven"):( (x==8)?printf("Eight"):( (x==9)?printf("Nine"):printf("Enter the single digit"))))))))));
}					    
