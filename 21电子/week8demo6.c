#include<stdio.h>
void main()
{
	int i,j,k,ii;
	int n;
	printf("请输入行数n :\r\n");
	scanf("%d",&n); 
	//n行 上面的图形 
	
for(ii=0;ii<3;ii++)	
{


	for(i=1;i<=n;i++)
	{
		//1. 输入空格
		for(j=1;j<=n-i;j++) 
			printf(" ");
		//2. 输入* 
		for(k=1;k<=2*i-1;k++)
			printf("*"); 
		printf("\n"); 
	}
	
	//  n-1行  下面的图形 
	for(i=1;i<=n-1;i++)
	{
		//1. 输入空格
		for(j=1;j<=i;j++) 
			printf(" ");
		//2. 输入* 
		for(k=1;k<=2*(n-i)-1;k++)
			printf("*"); 
		printf("\n"); 
	} 
	
}
	
} 
