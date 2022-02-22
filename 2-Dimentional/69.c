//69)write a c program for given matrics find sum of minor diagnol using pointers..?

#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,n;
    printf("Enter the row and column\n");
    scanf("%d%d",&l,&m);
    int a[l][m];
    for(i=0;i<m;i++)
	for(j=0;j<l;j++)
	    scanf("%d",&a[i][j]);
    for(j=2,i=0;i<m;i++)
    {
	int *ptr=a[i];
	k=k + *(ptr+j);
	j--;
    }
	printf("the sum of main diagnol is :%d ",k);
	printf("\n");
}
