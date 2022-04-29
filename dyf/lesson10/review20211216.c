#include <stdio.h>
void main()
{
	int a[5];
	int b=0;
	int s=0;
	for(b=0;b<4;b++)
	{
	scanf("%d",&a[b]);
	if(b%2!=0)
		{
		if(a[b]%2==0)
			{
				s++;
			}
		}	
	}
	printf("%d",s);
 /*
 scanf("%d,%d,%d",&a,&b,&c);
		 if( (a>b) &&(a>c))
		 {
			if(b>c)	
			printf("%d %d %d",a,b,c);
			else
			printf("%d %d %d",a,c,b);
		}
		if( (b>a) &&(b>c))
		 {
			if(a>c)	
			printf("%d %d %d",b,a,c);
			else
			printf("%d %d %d",b,c,a);
		}		
		if( (c>a) &&(c>b))
		 {
			if(a>b)	
			printf("%d %d %d",c,a,b);
			else
			printf("%d %d %d",c,b,a);
		}
		
		*/		
} 
