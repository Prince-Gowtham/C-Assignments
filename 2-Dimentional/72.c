//72)write a c program for given matrics find sum of rows and columns using pointers..?

#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,n;
    printf("Enter the row and column\n");
    scanf("%d%d",&l,&m);
    int a[l][m];
    for(i=0;i<m;i++)
	for(j=0;j<l;j++)
	    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
	int (*ptr)[3]=&a[i];
	int *p=(int *)ptr;
	for(j=0;j<m;j++,p++)
	{
	    k=k + *(p);
	}
    }
	printf("the sum of rows and columns is :%d ",k);
	printf("\n");
}
