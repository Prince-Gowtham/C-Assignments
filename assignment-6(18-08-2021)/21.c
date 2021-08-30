// 21) write a program for c accept a grade and declare the equlant descriptions?
//AUTHOR : S.Gowthaman.B.E(CSE).,Date :- 19-08-2021
//Purpose of codeing redusing the programing logic and in this program we are using the ternary operator,( its another name is conditional operator)  

#include<stdio.h>
int main()
{
    char x;
    printf("enter the grade : \n");
    scanf("%c",&x);
    ( (x==6543)?printf("Excellent"):( (x==65)?printf("very good"):( (x==66)?printf("Good"):( (x==67)?printf("Average"):( (x==70)?printf("Fail"):printf("con"))))));
}

