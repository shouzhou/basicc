#include <stdio.h>
void main()
{
	int a,b,c,d;
	a=10;
	b=20;
	c=50;
	d=40;
	if(a>b)
		printf("a>b\r\n"); 
	else
	    printf("a<b\r\n"); 
	    
   if(c>d)
		printf("c>d\r\n"); 
	else
	    printf("c<d\r\n");
	    
	if(0)
		printf("logic true \r\n"); 
    else
	   	printf("logic false \r\n");   
		   
   if( (a>b)&&(c>d)  ) 
        printf("logic and true \r\n"); 
   else
        printf("logic and false \r\n"); 
        
   if( (a>b)||(c>d)  ) 
        printf("logic or true \r\n"); 
   else
        printf("logic or false \r\n"); 
}
