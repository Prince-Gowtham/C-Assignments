//18)write a c program for given numbers frequncy..?


#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n=1;
    a=b=c=d=e=f=g=h=i=j=k=0;
    scanf("%d",&x);
    l=m=x;
    for( ;l; )
    {
	l=l/10;
	n=n*10;
    }
    n=n/10;
    for( ;n; )
    {
	z=x/n;
	y=x%n;
	x=y;
	n=n/10;
	if(z==1)
	    printf("ONE\n");
	else if(z==2)
	    printf("TWO\n");
	else if(z==3)
	    printf("THREE\n");
	else if(z==4)
	    printf("FOUR\n");
	else if(z==5)
	    printf("FIVE\n");
	else if(z==6)
	    printf("SIX\n");
	else if(z==7)
	    printf("SEVEN\n");
     	else if(z==8)
	    printf("EIGHT\n");
	else if(z==9)
	    printf("NINE\n");
	else if(z==0)
	    printf("ZERO\n");
    }
} 
