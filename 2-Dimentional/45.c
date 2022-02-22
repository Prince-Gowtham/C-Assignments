//45)write a c program for given matrix scaler multiplications...?


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
    int (*ptr)[3][3]=&a;
    int (*p)[3]=(int (*)[])ptr;
    int *p1=(int *)p;
    for(k=0,j=0;j<l*m;j++,p1++)
    {
	k++;
	i= n * *(p1);
	printf("%d ",i);
	if(k==3)
	{
	    printf("\n");
	    k=0;
	}
    }
    printf("\n");
}
