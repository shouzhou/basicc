//算一下阶乘 
#include <stdio.h>
int main()
{
	int i=1;
	int n; //输入阶乘数值 
	float result=1.0;//结果 
 
	printf("请输入阶乘数：\r\n");	
	scanf("%d",&n);
   while(i<=n) 
   {
		result = result*i;
		i++;	
   	}
	printf("%d! = %.1f",n,result);
	return 0;
}








