//6)Matrix equal or not using pointers


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
	int (*ptr)[3]=&a[0]+i;
	int (*ptr1)[3]=&b[0]+i;
	int *p=(int *)ptr;
	int *p1=(int *)ptr1;
	for(j=0;j<l;j++)
	{
	    if(*(p+j)!=*(p1+j))
	    {
		k++;
		break;
	    }
	}
    }
    if(k==0)
	printf("the matrics is equal\n");
    else
	printf("the matrix is not equal\n");
}
