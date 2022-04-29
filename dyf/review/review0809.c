#include <stdio.h>
void main() 
{
	int a,g,s,b,k;
	for(a=1;a<10000;a++)
	{ 
		k=a/1000;
		b=(a%1000)/100;
		s=(a%100)/10;
		g=a%10; 
		if(k*k*k+b*b*b+s*s*s+g*g*g==a)
		{
		   if(k==0)	
		     	printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\r\n",a,b,b,b,s,s,s,g,g,g);
		   else
		        printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d+%d*%d*%d\r\n",a,k,k,k,b,b,b,s,s,s,g,g,g);
			
	    }
		
	
			
	} 
}
