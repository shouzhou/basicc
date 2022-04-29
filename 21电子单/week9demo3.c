#include <stdio.h>
void main() 
{
	int i,j,k;
	int n;
	printf("请输入你要实现的菱形行数：\r\n");
	scanf("%d",&n); 
	for(k=0;k<5;k++)
	{ 
	    for(i=1;i<=n;i++) //N行 
	    {
			// 输出空格 
			for(j=1;j<=n-i;j++)
				printf(" ");
			
			//输出 星星
			for(j=1;j<=2*i-1;j++)
				printf("*"); 
			printf("\n"); 
		}
		
		for(i=1;i<=n-1;i++) //N-1行 
		{
			//输出空格 
			for(j=1;j<=i;j++)
			printf(" "); 
			//输出星星
			for(j=2*(n-i)-1;j>=1;j--) 
				printf("*");
			printf("\n"); 
		} 
	}
			
    	
}
