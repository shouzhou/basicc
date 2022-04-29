#include <stdio.h>
void main()
{/*
	int a,g,s,b,k;
	a=1;
	while(a<10000)
	{
		k=a/1000;
		b=(a%1000)/100;
		s=(a%100)/10;
		g=a%10;
		if(k*k*k+b*b*b+s*s*s+g*g*g==a)
		printf("%d*%d*%d+%d*%d*%d+%d*%d*%d+%d*%d*%d=%d\r\n",k,k,k,b,b,b,s,s,s,g,g,g,a);
		a++;
	}*//*
	int a,b;
	a=3;
	while(a<10000)
	{
		b=2;
		while(b<a)
		{
			if(a%b==0)
			break;
			b++;		
		}
		if(a==b)
		printf("%d\t",a);
		a++;	
	}*/
	int a,b,c;
	a=3;
	while(a<30000)
	{
		c=1;
		b=2;	
		while(b<a)
		{
			if(a%b==0)
			c=c+b;
			b++;	
		}
		if(a==c)
		printf("%d\r\n",a);
		a++;		
	}
}

