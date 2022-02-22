//123)write a c program to find sum of upper triangle of given matrix using pointers..?


#include<stdio.h>
int main()
{
    int i,j,k,m,n,l=0;
    printf("Enter the rows and column:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
    printf("\n");
    for(i=0;i<m;i++)
    {
	l=l + fun(&a[i],m,n,i);
    }
	printf("the sum of lower triangle is : %d\n",l);
}
int fun(int (*ptr)[],int m,int n,int i)
{
    int j,k,l=0;
    int *p=(int *)ptr;
    for(j=0;j<n;j++)
    {
	if(j>=i)
	    l=l+*(p+j);
    }
    return l;
}
