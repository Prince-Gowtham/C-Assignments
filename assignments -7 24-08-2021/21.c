#include<stdio.h>
int main()
{
   int x,y,z,a;
   printf("Enter the values\n");
   scanf("%d %d %d %d",&x,&y,&z,&a);
   (x<y&&x<z&&x<a)?printf("x is lesser all are different"):( (x<y&&y==z&&z==a)?printf("x is lesser yza all are equal"):( (x>y&&x>z&&x>a)?printf("x is Grater all are different"):( (x>y&&y==z&&z==a)?printf("x is grater yza is equal"):( (y>x&&y>z&&y>a)?printf("y is grater all are different"):( (y>x&&x==z&&z==a)?printf("y is grater all are equal"):
