//43)write a c program for given matrix scaler multiplications...?


#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    printf("Enter the row and column\n");
    scanf("%d%d",&l,&m);
    int a[l][m];
    for(i=0;i<m;i++)
	for(j=0;j<l;j++)
	    scanf("%d",&a[i][j]);
    printf("Enter the scaler multiplication number :\n");
    scanf("%d",&n);
    for(i=0;i<m;i++)
	scaler(&a[i],l,m,n);
}
int scaler(int (*ptr)[3],int l,int m,int n)
{
    int j,k;
    int *p=(int *)ptr;
    for(j=0;j<l;j++)
    {
	k= *(p++) * n;
	printf("%d ",k);
    }
    printf("\n");
}
