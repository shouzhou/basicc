#include <stdio.h>
void main()
{
	int year; 
	//����  1.  �ܱ�4������(&&)���Ҳ��ܱ�100���� || 2.  �ܱ�400����  
	printf("������һ�����:\r\n");
	scanf("%d",&year);
//	printf("year = %d",year);
	if(((year%4 ==0)&&(year%100 !=0))||(year %400 ==0)) 
	{
		printf("%d�� �����꣡\r\n",year);
	}
	else
	{
		printf("%d�겻�����꣡\r\n",year); 
	}
	/*
	int a,b;
	printf("������һ������ֵ��\r\n");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("����������\r\n");	
	} 
	else
	{
		printf("�����Ǹ���\r\n");
	}
	
	*/
}
