//53)write a c program for given matrics find sum of main diagnol using pointers..?

#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,n,o=0;
    printf("Enter the row and column\n");
    scanf("%d%d",&l,&m);
    int a[l][m];
    for(i=0;i<m;i++)
	for(j=0;j<l;j++)
	    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
	n=maj(&a[i],i);
	o=o+n;
    }
    printf("\n");
    printf("the sum of main diagnol is :%d ",o);
}
int maj(int (*ptr)[3],int i)
{
    int j,k=0,n;
    int *p=(int *)ptr;
    for(j=i;j<=i;j++)
    {
	k=k + *(p+j);
    }
    return k;
}
