//19)sum of 2 Matrix additions...?


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
	printf("\n");
    for(i=0;i<l;i++)
	for(j=0;j<m;j++)
	    scanf("%d",&b[i][j]);
	printf("\n");
	add(&a,&b,l,m);
}
int add(int (*ptr)[3][3],int (*ptr1)[3][3],int l,int m)
{
    int j,k=0,n=0;
    int (*p)[3]=(int (*)[])ptr;
    int (*p1)[3]=(int (*)[])ptr1;
    int *p2=(int *)p;
    int *p3=(int *)p1;
    for(j=0;j<l*m;j++)
    {
	n++;
	k = *(p2+j) + *(p3+j);
	printf("%d ",k);
	if(n==3)
	{
	    n=0;
	    printf("\n");
	}
    }
}
