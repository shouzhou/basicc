/*
	����ǵڶ��ܵĲ��Գ���
	��дʱ��2022-3-3
	���� �����
	���ܣ����ܻ�������������
	��ע���� 
*/
#include <stdio.h>
int main()
{
	//��������
	int a;
	a = 10;
	printf("���ͱ���a= %d\r\n",a); 
	
	//����������
	float  b;
	b = 3.0; 
	printf("����������b = %f\r\n",b);
	
	//�ַ������� 
	char  c;
	c = 0;
	for(a=0;a<128 ;a++) 
	{
	printf("%x = %c\t",c,c);
	c= c+1;
	if(c%5 ==0)
	printf("\r\n"); 
	} 
	return 0; //����ֵ 
}

