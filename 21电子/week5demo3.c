#include <stdio.h>
// ʵ�ֹ��ܣ��Ƚϳ��������Ĵ�С����С����  
int main()
{
	int a,b,c;
	printf("������������:\n") ;
	scanf("%d%d",&a,&b);
	printf("a= %d  b= %d\n",a,b);
	printf("min = %d\n",a<b?a:b);
	printf("max = %d\n",a>b?a:b); 
	return 0;
} 
