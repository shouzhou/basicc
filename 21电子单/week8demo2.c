#include <stdio.h>
int main()
{
	int n;
	int i=1;
	float result=1.0;
	printf("请输入阶乘的数据\r\n");
	scanf("%d",&n);
	if(n==0 || n==1) result = 1;
	else
	{
		/*
		while(i<=n)
		{
			result = result *i;
			i++;		
		}
		*/
		do
		{
			result = result *i;
			i++;
		}while(i<=n); 
			
	}
	printf("%d!= %.1f",n,result);
	
	return 0;
} 
