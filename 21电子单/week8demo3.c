// ������Ҫ���� 1+2 +3 +����+X
// X�����   �����ֹ����� 
#include <stdio.h>
int main()
{
	int x;
	int result=0;
	int i;
	printf("������X��ֵ��\r\n");
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{
		result = result +i;	
	    	
	}
		printf("1+2+3+.....+%d = %d\r\n",x,result); 
	return 0;
} 
