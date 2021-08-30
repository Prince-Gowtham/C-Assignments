#include<stdio.h>
int main()
{
   int x,y,z,a;
   printf("Enter the values\n");
   scanf("%d %d %d %d",&x,&y,&z,&a);
   x==y&&y==z&&z==a?printf("xyza All Are Equal"):( (x<y&&y<z&&z<a)?printf("x is lesser all are different "):( (x>y&&y==z&&z==a)?printf("x is grater yza equal"):( (x>y&&y>z&&z>a)?printf("x is Graeter all are differnet"):( (x<y&&y==z&&z==a?printf("x is lesser yza is equal"):( (y>x&&x==z&&z==a)?printf("y is grater xza equal"):( (y<x&&x==z&&z==a?printf("y is lesser xza is equal"):( (y>x&&y>z&&y>a)?printf("y is grater xza is different"):( (y<x&&y<z&&y<a)?printf("y is lesser xza is different"):( (z>x&&x==y&&y==a)?printf("z is grater xya is equal"):( (z<x&&x==y&&y==a)?printf("z is lesser xya equal"):( (z<x&&x<y&&y<a)?printf("z is lesser xya different"):( (z>x&&x>y&&y>a)?printf("z is grater all are different"):( (a>x&&x==y&&y==z)?printf("a is grater xyz are equal"):( (a>x&&x<y&&y<z&&x<z)?printf("a is grater xyz are different"):( (a<x&&x==y&&y==z)?printf("a is lesser xyz are equal"):( (a<x&&x<y&&y<z)?printf("a is lesser all are diffenrent"):printf("add this condition")))))))))))))))))));
}
