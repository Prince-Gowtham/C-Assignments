#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    ( (x<0&&y<0)?printf("first quadrent"):( (x>0&&y<0)?printf("2nd Quadrent"):( (x<0&&y>0)?printf("third quadrend"):( (x>0&&y>0)?printf("forth quadrent"):printf("orgin")))));
}
