//105)write a c program to find lower triangle of given matrix using pointers..?


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
    int (*ptr)[3][3]=&a;
    int (*ptr1)[m]=(int (*)[])ptr;
    int *p=(int *)ptr1;
    for(i=0;i<n;i++)
    {
	for(j=0;j<m;j++,p++)
	{
	    if(j>=i)
		printf("%d ",*(p));
	    else
		printf("0 ");
	}
	printf("\n");
    }
}
