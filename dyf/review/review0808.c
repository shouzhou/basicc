#include <stdio.h>
void main()
{
	int a,b,s,g;
	scanf("%d",&a);
	b=a/100;
	s=(a%100)/10;
	g=a%10;
	printf("b=%d s=%d g=%d",b,s,g);	
}
