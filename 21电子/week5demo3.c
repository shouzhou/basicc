#include <stdio.h>
// 实现功能：比较出两个数的大小，从小到大  
int main()
{
	int a,b,c;
	printf("请输入两个数:\n") ;
	scanf("%d%d",&a,&b);
	printf("a= %d  b= %d\n",a,b);
	printf("min = %d\n",a<b?a:b);
	printf("max = %d\n",a>b?a:b); 
	return 0;
} 
