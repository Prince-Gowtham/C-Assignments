//18)write a c program for frequncy of given each digits?


#include<stdio.h>
int main()
{
    int x,y,z,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    scanf("%d",&x);
    while(x!=0)
    {
	y=x/10;
	z=x%10;
	x=y;
	while(x)
	{
	    if(z==0)
	    {
		a++;
		break;
	    }
	    else if(z==1)
	    {
		b++;
		break;
	    }
	    else if(z==2)
	    {
		c++;
		break;
	    }
	    else if(z==3)
	    {
		d++;
		break;
	    }
	    else if(z==4)
	    {
		e++;
		break;
	    }
	    else if(z==5)
	    {
		f++;
		break;
	    }
	    else if(z==6)
	    {
		g++;
		break;
	    }
	    else if(z==7)
	    {
		h++;
		break;
	    }
	    else if(z==8)
	    {
		i++;
		break;
	    }
	    else if(z==9)
	    {
		j++;
		break;
	    }
	}
    }
	printf("given integer number zero presents in %d\n",a);
	printf("given integer number one presents in %d\n",b);
	printf("given integer number two presents in %d\n",c);
	printf("given integer number three presents in %d\n",d);
	printf("given integer number four presents in %d\n",e);
	printf("given integer number five presents in %d\n",f);
	printf("given integer number six presents in %d\n",g);
	printf("given integer number seven presents in %d\n",h);
	printf("given integer number eight presents in %d\n",i);
	printf("given integer number nine presents in %d\n",j);
}
