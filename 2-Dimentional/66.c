//66)write a c program for given matrics find sum of minor diagnol using pointers..?

#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,n=0;
    printf("Enter the row and column\n");
    scanf("%d%d",&l,&m);
    int a[l][m];
    for(i=0;i<m;i++)
	for(j=0;j<l;j++)
	    scanf("%d",&a[i][j]);
    int (*ptr)[3][3]=&a;
    int (*p)[3]=(int (*)[])ptr;
    int *p1=(int *)p;
    j=2;
    for(i=0;i<m;i++)
    {
	for(n=0;n<j;n++,p1++);
	k =k + *(p1);	
    }
	printf("the sum of main diagnol is :%d ",k);
	printf("\n");
}
