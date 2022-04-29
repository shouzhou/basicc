//需求 ，实现9X9的乘法口诀表
#include <stdio.h>
int main()
{
	
	int i,j;
	j=1;
	for(i=1;i<=9;i++) //大循环 
	{
		for(j=1;j<=9;j++) //小循环 
		{
			printf("%d * %d = %02d  ",i,j,i*j);
		}
		printf("\r\n");
	}
	return 0;
} 
