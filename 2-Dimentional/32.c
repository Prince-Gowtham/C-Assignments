//32)sum of 2 Matrix Multiplications...?


#include<stdio.h>
int main()
{
    int i,j,k=0,l,m;
    printf("Enter the row and column :\n");
    scanf("%d%d",&l,&m);
    int a[l][m],b[l][m];
    for(i=0;i<l;i++)
	for(j=0;j<m;j++)
	    scanf("%d",&a[i][j]);
    for(i=0;i<l;i++)
	for(j=0;j<m;j++)
	    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    {
	int *ptr=a[i];
	int *ptr1=b[i];
	int *p=(int *)ptr;
	int *p1=(int *)ptr1;
	for(j=0;j<l;j++)
	{
	    k = *(p+j) * *(p1+j);
	    printf("%d ",k);
	}
	printf("\n");
    }
}
