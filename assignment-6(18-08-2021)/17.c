// 17) write a program to calculate profit and loss on a transation?


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the selling price : \n");
    scanf("%d",&x);
    printf("enter the cost price : \n");
    scanf("%d",&y);
    ((x>y)&&(z=x-y))?printf("your profit was : %d",z):( (x<y)&&(z=y-x))?printf("you loss was : %d",z):printf("no profit and no loss");
}

    
