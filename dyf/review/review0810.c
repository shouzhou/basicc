#include <stdio.h>
void main()
{/*
	int a,b;
	for(a=3;a<1000;a++)
	{
		for(b=2;b<a;b++)
		{
		if(a%b==0)
		break;
		}
		if(a==b)
		printf("%d\r\n",a);
	}*/
	int a,b,c;
	for(a=2;a<10000;a++)
	{
		c=1;
		for(b=2;b<a;b++)
		{
			if(a%b==0)
			c=c+b;
		}
		if(a==c)
		printf("%d\r\n",a);
	}
	
	
	
}
