#include <stdio.h>
int main()
{
	float price ;//����
	float pay ;//�˿͸����ܽ��
	int  count;//��Ʒ����
	float total ;//����ǰ����Ʒ�۸�
	float discount ;//�ۿ� 
	float income ; //���ۺ��ʵ�ʼ۸�
	float change;  //���� 
	//=========�����Ļ�������ϵͳ===================
	printf("�������㹺�����Ʒ�����������Լ���ĸ�����\r\n");
	scanf("%d%f%f",&count,&price,&pay);
	//1. ���ܼ۸� 
	total = price * count;
	//2. ���ۿ�
	if(total>= 8000)        discount = 0.2;
	else if(total >=6000)   discount = 0.15;
	else if(total >=3000)   discount = 0.1;
	else if(total >=1000)   discount = 0.05;
	else                    discount = 0;
	//3. ���ۿۺ�ļ۸�
	income = total*(1-discount) ;
	// 4. ������ 
	change = pay - income; 
	//4. ������ 
	printf("���ʵ��Ӧ�ս��Ϊ%.1fԪ��,����Ϊ%.1fԪ��",income,change);
	return 0;
} 
