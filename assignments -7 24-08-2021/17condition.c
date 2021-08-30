#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter the three number : \n");
   scanf("%d %d %d",&x,&y,&z);
   x==y&&x==z?printf("xyz are equal"):( (x==y&&y<z)?printf("xy are equal z is greater"):( (x==y&&y>z)?printf("xy are equal z is lesser"):( (y==z&&x<y)?printf("yz are equal x is lesser"):( (y==z&&x>y)?printf("yz are equal x is greater"):( (x<y&&y<z)?printf("x is lesserthan y z is different z is greater"):( (x<y&&y==z)?printf("x is lesser than y and yz are equal y is greater"):( (x>y&&x>z&&y>z)?printf("x is greater than y and z Greater xyz are different"):( (x>y&&x==z)?printf("x is greater than y and xz are equal"):( (y<x&&y<z&&x<z)?printf("y is lesser than x zis greater xyz are different"):( (y<x&&y==z)?printf("y is lesser than x and yz are equal"):( (y>x&&y<=z)?printf("y is greater than x and y is lessthanorequal to z"):( (y>x&&y==z)?printf("y is greater than x and y z are equal"):( (z<y&&x>z&&x<y)?printf("z is lesser than xy y is greater"):( (z<y&&z==x)?printf("z is lesserthan y xz are equal"):( (z>y&&x<z)?printf("z is greater than xy and different"):( (z>y&&z==x)?printf("z is graterthan y and xz are equal"):( (x>y&&x>z&&y<z)?printf("y is lesser xyz is different x is greater"):( (y>x&&y>z)?printf("yis greater all are different"):( (z>x&&z>y)?printf("z is greater all are different"):printf("all are different")))))))))))))))))))); 
}  
