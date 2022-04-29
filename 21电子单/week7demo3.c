//输入商品单价price、购买数量count和收款金额pay
#include<stdio.h>
int main()
{
	float price ; //商品单价 
	int count;  //商品数量 
	float total ;//原始总价 
	float discount; //折扣 0.x 
	float pay ;   //收到金额 
	float income ;//实收金额
	float change ; //找零  
	printf("请输入商品单价price、购买数量count和收款金额pay\r\n");
	scanf("%f%d%f",&price,&count,&pay);
	total = price * count;
	/*	当total<1000时,discount=0； 
		1000<=total<3000时,discount=5%; 
		3000<=total<6000时,discount=10%; 
		6000<=total<8000时,discount=15% 
		total>=8000时, discount=20%。
	*/
	if(total >=8000) 			discount = 0.2;
	else if(total>=6000) 		discount = 0.15;
	else if(total>=3000) 		discount = 0.1;
	else if(total>=1000) 		discount = 0.05;
	else                 		discount = 0;
	income = total*(1-discount);	
	change = pay- income;
	printf("实收金额为 %.1f,折扣为%.2f ,找零为 %.1f\r\n",income,discount,change);
	return 0;
} 
