//���� ��ʵ��9X9�ĳ˷��ھ���
#include <stdio.h>
int main()
{
	
	int i,j;
	j=1;
	for(i=1;i<=9;i++) //��ѭ�� 
	{
		for(j=1;j<=9;j++) //Сѭ�� 
		{
			printf("%d * %d = %02d  ",i,j,i*j);
		}
		printf("\r\n");
	}
	return 0;
} 
