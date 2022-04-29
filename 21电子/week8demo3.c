// 通过键盘输入x 实现  1+2 +3 +。。。+x 的值 
#include <stdio.h>
int main()
{
	int i;
	int result =0;
	int x;
	printf("请输入x的值:\r\n");
	scanf("%d",&x); 
	for(i=1;i<=x;i++)
	{
		result = result + i;
	}
	
	printf("1+2+3+...+%d = %d\r\n",x,result);
	return 0;
}
