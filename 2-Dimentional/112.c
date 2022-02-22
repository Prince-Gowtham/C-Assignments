//112)write a c program to find sum of lower triangle of given matrix using pointers..?


#include<stdio.h>
int main()
{
    int i,j,k,m,n,l=0,q=0;
    printf("Enter the rows and column:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
    printf("\n");
    for(i=0;i<m;i++)
    {
	int (*ptr)[m]=&a[i];
	int *p=(int *)ptr;
	for(j=0;j<n;j++,p++)
	{
	    if(j<=i)
		l=l+*(p);
	}
	printf("\n");
    }
	printf("the sum of lower triangle is : %d\n",l);
}
