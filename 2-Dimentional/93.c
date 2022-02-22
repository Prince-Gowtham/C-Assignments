//93)write a c program to find upper triangle of given matrix using pointers..?


#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    printf("Enter the rows and column:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
    printf("\n");
    for(i=0;i<m;i++)
	fun(&a[i],m,n,i);
}
int fun(int (*ptr)[],int m,int n,int i)
{
    int j,k;
    int *p=(int *)ptr;
    for(j=0;j<n;j++)
    {
	if(j<=i)
	    printf("%d ",*(p+j));
	else
	    printf("0 ");
    }
    printf("\n");
}
