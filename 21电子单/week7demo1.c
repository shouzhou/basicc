// 1. if else
// 2. switch
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("���������ֵ:\r\n");
	scanf("%d",&a);
	//1. ����if
	//if(a>0) printf("����a ������"); 
	
	//2. if  -else ���
	/*
	if(a>0)
		printf("����a ������");
	else
		printf("����a �Ǹ���");	
		*/ 
	//3. if  else if  else  ����  else if �����ж��
	if(a>90) // x>90
		printf("�߼�\r\n"); 
	else if(a>80)  // 80<x<=90 
		printf("�м�\r\n"); 
	else if(a>70)  //70<x<=80 
		printf("����\r\n"); 
	else //ǰ���ȫ�������� 
		printf("�޼���\r\n"); 	
	///////////////////////switch /////////////////////////////
	printf("������ּ���Ŀ��\r\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1: printf("�߼�\r\n"); break;
		case 2: printf("�м�\r\n"); break;		
		case 3: printf("����\r\n"); break;	
		case 4: printf("�޼���\r\n"); break;	
	}
	
		
		
		
	return 0;
}
