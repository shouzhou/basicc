#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个数：\r\n");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("a>b\r\n");
	}
	else
	{
		printf("b>a\r\n");
	}
} 
