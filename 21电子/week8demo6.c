#include<stdio.h>
void main()
{
	int i,j,k,ii;
	int n;
	printf("����������n :\r\n");
	scanf("%d",&n); 
	//n�� �����ͼ�� 
	
for(ii=0;ii<3;ii++)	
{


	for(i=1;i<=n;i++)
	{
		//1. ����ո�
		for(j=1;j<=n-i;j++) 
			printf(" ");
		//2. ����* 
		for(k=1;k<=2*i-1;k++)
			printf("*"); 
		printf("\n"); 
	}
	
	//  n-1��  �����ͼ�� 
	for(i=1;i<=n-1;i++)
	{
		//1. ����ո�
		for(j=1;j<=i;j++) 
			printf(" ");
		//2. ����* 
		for(k=1;k<=2*(n-i)-1;k++)
			printf("*"); 
		printf("\n"); 
	} 
	
}
	
} 
