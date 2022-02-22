//9)Matrix equal or not using pointers


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
    int (*ptr)[3][3]=&a;
    int (*ptr1)[3][3]=&b;
    int (*p)[3]=(int (*)[])ptr;
    int (*p1)[3]=(int (*)[])ptr1;
    int *p2=(int *)p;
    int *p3=(int *)p1;
    for(j=0;j<l*m;j++)
    {
	if(*(p2++)!=*(p3++))
	{
	    k++;
	    break;
	}
    }
    if(k==0)
	printf("the matrics is equal\n");
    else
	printf("the matrix is not equal\n");
}
