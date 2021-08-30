// 9) Write a program to find the eligiblity of addmision for professional corse based on following criteria?


#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("input the marks obtained in mathamatics : \n");
    scanf("%d",&x);
    printf("input the marks obtained in chemistry : \n");
    scanf("%d",&y);
    printf("intput the marks obtained in physics : \n");
    scanf("%d",&z);
    a=x+y+z;
    ( (x>=65&&y>=55&&z>=50&&a>=140)?printf("canditate eligble for admission"):printf("canditate not eligble"));
}
