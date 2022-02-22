//62)write a c program for given matrics find sum of minor diagnol using pointers..?

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
    j=2;
    for(i=0;i<m;i++)
    {
	int (*ptr)[3]=&a[i];
	int *p=(int *)ptr;
	for(n=0;n<j;n++,p++);
	j--;
	k=k + *(p);
    }
	printf("the sum of minor diagnol is :%d ",k);
	printf("\n");
}
