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
	int level; 
	//=========�����Ļ�������ϵͳ===================
	printf("�������㹺�����Ʒ�����������Լ���ĸ�����\r\n");
	scanf("%d%f%f",&count,&price,&pay);
	//1. ���ܼ۸� 
	total = price * count;
	//2. ���ۿ�
	// [Error] 'level' undeclared (first use in this function) 
	level = (int)total/1000; //���ݹ����ֵ������ļ��� 
	switch(level) 
	{// [Error] stray '\243' in program --�����ַ������ڳ����� 
		case 0 :  discount = 0;    break; 
		case 1 : 
		case 2 :  discount = 0.05; break; 
		case 3 : 
		case 4 : 
		case 5 :  discount = 0.1;  break; 
		case 6 : 
		case 7 :  discount = 0.15; break; 
		default : discount = 0.2 ; break;        //else  --
	}
	//3. ���ۿۺ�ļ۸�
	income = total*(1-discount) ;
	// 4. ������ 
	change = pay - income; 
	//4. ������ 
	printf("���ʵ��Ӧ�ս��Ϊ%.1fԪ��,����Ϊ%.1fԪ��",income,change);
	return 0;
} 
