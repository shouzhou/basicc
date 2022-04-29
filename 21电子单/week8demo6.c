#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("请输入小星星行数n ：\r\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //行数 
	{
		for(j=1;j<=n-i;j++)
			printf(" "); 
		for(k=1;k<=2*i-1;k++)
			printf("*") ;
		printf("\n");
	}	
	
	return 0;
} 
