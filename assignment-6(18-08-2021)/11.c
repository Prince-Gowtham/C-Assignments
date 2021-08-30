// 11) write the program to read roll no,name and marks of three subjects and calculate the total persentage and division?


#include<stdio.h>
int main()
{
    char x;
    int y,z,a,b,c,d,e;
    printf("enter the name of the student : \n");
    scanf("%c",&x);
    printf("enter the roll number of the student : \n");
    scanf("%d",&y);
    printf("enter the computer application marks : \n");
    scanf("%d",&z);
    printf("enter the physics marks : \n");
    scanf("%d",&a);
    printf("enter the chemistry marks : \n");
    scanf("%d",&b);
    e=z+a+b;
    d=(e*100/300);
    printf("the name of the student : %s\n",x);
    printf("Roll Number : %d\n",y); 
    printf("computer application marks : %d\n",z);
    printf("physics marks : %d\n",a);
    printf("chemistry marks : %d\n",b);
    printf("student total marks : %d\n",e);
    printf("student total percent : %d\n",d);
    ( (d>=90)?printf("he is first class with distintion"):( (d>=80)?printf("second grade \n"):( (d>=60)?printf("third grade\n"):(d<=50)?printf("not in division"):printf("good"))));
} 
