//117)write a c program to find sum of lower triangle of given matrix using pointers..?


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
    fun(&a,n,m);
}
int fun(int (*ptr)[3][3],int m,int n)
{
    int i,j,l=0;
    int (*ptr1)[m]=(int (*)[])ptr;
    int *p=(int *)ptr1;
    for(i=0;i<n;i++)
    {
	for(j=0;j<m;j++,p++)
	{
	    if(j<=i)
		l=l+*(p); 	
	}
	printf("\n");
    }
	printf("the sum of lower triangle is : %d\n",l);
}
