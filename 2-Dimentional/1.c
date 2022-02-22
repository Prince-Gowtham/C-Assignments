//1)Matrix equal or not using pointers


#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("Enter the row and column :\n");
    scanf("%d%d",&l,&m);
    int a[l][m],b[l][m];
    for(i=0;i<l;i++)
	for(j=0;j<m;j++)
	    scanf("%d",&a[i][j]);
    for(i=0;i<l;i++)
	for(j=0;j<m;j++)
	    scanf("%d",&b[i][j]);
    for(i=0;i<l;i++)
    {
	k=fun(&a[i],&b[i],l,m);
	if(k!=0)
	    break;
    }
    if(k==0)
	printf("the martix is equal \n");
    else
	printf("the matrix is not equal \n");

}
int fun(int (*ptr)[],int (*ptr1)[],int l,int m)
{
    int i,j,k=0;
    int *p=(int *)ptr;
    int *p1=(int *)ptr1;
    for(j=0;j<m;j++)
    {
	if(*(p+j)!=*(p1+j))
	{
	    k++;
	    break;
	}
    }
    return k;
}
