/*
	1. �������
	2. ���߽���
	3. ˵��������
	4. ���������� 
*/
#include <stdio.h>   // ����ͷ�ļ� 
int main()
{
    // 1. ����
	int a,b;
	a = 10;
	b = 20;
	//printf("a= %d a = %x\r\n",a,a); //���a  ֵ 
	//printf("b= %d b = %x\r\n",b,b);
    // 2. ������
	float f1,f2;
	f1 = 3.14;
	f2 = 10.01; 
//	printf("f1= %f,f2 = %f\r\n",f1,f2);
	// 3. �ַ���
	int i ;
	char c= '!'; 
	for(i=33;i<128;i++)
	{
		printf("�ַ���%c ʮ����Ϊ�� %d ʮ������Ϊ��%x\r\n",c,c,c);	
		c++;
	}
//	c = 'A';
//	printf("c= %c   c��ASCII ֵ = %d   = %x\r\n",c,c,c);
	return 0;	
}











