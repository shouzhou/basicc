#include <stdio.h>
void main()
{
	int a = 100; 
	while(a)  //非零为真 0 为假 
	{ 
		printf("%02d*\r\n",a);  //循环体 
		a--; 
	}
	//return 0;
} 
