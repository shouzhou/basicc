// 需求，想要计算 1+2 +3 +。。+X
// X这个数   可以手工输入 
#include <stdio.h>
int main()
{
	int x;
	int result=0;
	int i;
	printf("请输入X的值：\r\n");
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{
		result = result +i;	
	    	
	}
		printf("1+2+3+.....+%d = %d\r\n",x,result); 
	return 0;
} 
