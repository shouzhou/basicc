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
	printf("��������Ʒ����price����������count���տ���pay\r\n");
	scanf("%f%d%f",&price,&count,&pay);
	total = price * count;
	/*	��total<1000ʱ,discount=0�� 
		1000<=total<3000ʱ,discount=5%; 
		3000<=total<6000ʱ,discount=10%; 
		6000<=total<8000ʱ,discount=15% 
		total>=8000ʱ, discount=20%��
	*/
	if(total >=8000) 			discount = 0.2;
	else if(total>=6000) 		discount = 0.15;
	else if(total>=3000) 		discount = 0.1;
	else if(total>=1000) 		discount = 0.05;
	else                 		discount = 0;
	income = total*(1-discount);	
	change = pay- income;
	printf("ʵ�ս��Ϊ %.1f,�ۿ�Ϊ%.2f ,����Ϊ %.1f\r\n",income,discount,change);
	return 0;
} 
