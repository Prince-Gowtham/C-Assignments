//57)write a c program for given matrics find sum of main diagnol using pointers..?

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
    int i,j,k=0;
    int (*p)[3]=(int (*)[])ptr;
    int *p1=(int *)p;
    for(j=0,i=0;i<m;i++)
    {
	k =k + *(p1);
	for(j=0;j<m+1;j++,p1++);
    }
	printf("the sum of main diagnol is :%d ",k);
	printf("\n");
}
