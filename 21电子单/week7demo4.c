//������Ʒ����price����������count���տ���pay
#include<stdio.h>
int main()
{
	float price ; //��Ʒ���� 
	int count;  //��Ʒ���� 
	float total ;//ԭʼ�ܼ� 
	float discount; //�ۿ� 0.x 
	float pay ;   //�յ���� 
	float income ;//ʵ�ս��
	float change ; //����  
	int  num; //����ѡ���ۿ۵�һ������  
	printf("��������Ʒ����price����������count���տ���pay\r\n");
	scanf("%f%d%f",&price,&count,&pay);
	total = price * count;
	/*	��total<1000ʱ,discount=0�� 
		1000<=total<3000ʱ,discount=5%; 
		3000<=total<6000ʱ,discount=10%; 
		6000<=total<8000ʱ,discount=15% 
		total>=8000ʱ, discount=20%��
	*/
	num = (int)total/1000; // 
	switch(num)
	{
		case 0: discount = 0; break;
		case 1: 
		case 2: discount = 0.05; break;
		case 3: 
		case 4: 
		case 5: discount = 0.1; break;
		case 6:
		case 7: discount = 0.15; break;
		default : discount = 0.2; break;  //����������������ʱ��ִ�������� 
								
	}
              	
	income = total*(1-discount);	
	change = pay- income;
	printf("ʵ�ս��Ϊ %.1f,�ۿ�Ϊ%.2f ,����Ϊ %.1f\r\n",income,discount,change);
	return 0;
} 






