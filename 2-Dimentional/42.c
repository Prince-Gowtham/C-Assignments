//42)write a c program for given matrix scaler multiplications...?


#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    printf("Enter the row and column\n");
    scanf("%d%d",&l,&m);
    printf("Enter the scaler multiplication number :\n");
    scanf("%d",&n);
    int a[l][m];
    for(i=0;i<m;i++)
	for(j=0;j<l;j++)
	    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
	int (*ptr)[3]=&a[i];
	int *p=(int *)ptr;
	for(j=0;j<l;j++,p++)
	{
	    k= n * *(p);
	    printf("%d ",k);
	}
	printf("\n");
    }
}
