//68)write a c program for given matrics find sum of minor diagnol using pointers..?

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
    maj(&a,m);
}
int maj(int (*ptr)[3][3],int m)
{
    int i,j,k=0,n;
    int (*p)[3]=(int (*)[])ptr;
    int *p1=(int *)p;
    for(n=2,i=0;i<m;i++)
    {
	for(j=0;j<n;j++,p1++);	
	k =k + *(p1);
    }
	printf("the sum of minor diagnol is :%d ",k);
	printf("\n");
}
