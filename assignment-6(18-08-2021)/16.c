// 16) write a c program for check whether an alphabet is vowel or constant?


#include<stdio.h>
int main()
{
    char x;
    printf("enter the charecter : \n");
    scanf("%c",&x);
    (x==65||x==69||x==73||x==79||x==85||x==97||x==101||x==105||x==111||x==117)?printf("the alphabet is a vowel"):printf("its alphabets is constants");
}
