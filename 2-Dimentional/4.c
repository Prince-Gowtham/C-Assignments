//4)Matrix equal or not using pointers


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
	int *ptr=a[i];
	int *ptr1=b[i];
	for(j=0;j<l;j++)
	{
	    if(*(ptr+j)!=*(ptr1+j))
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
