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
	int  num; //用来选择折扣的一个变量  
	printf("请输入商品单价price、购买数量count和收款金额pay\r\n");
	scanf("%f%d%f",&price,&count,&pay);
	total = price * count;
	/*	当total<1000时,discount=0； 
		1000<=total<3000时,discount=5%; 
		3000<=total<6000时,discount=10%; 
		6000<=total<8000时,discount=15% 
		total>=8000时, discount=20%。
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
		default : discount = 0.2; break;  //上面的情况都不满足时，执行这个语句 
								
	}
              	
	income = total*(1-discount);	
	change = pay- income;
	printf("实收金额为 %.1f,折扣为%.2f ,找零为 %.1f\r\n",income,discount,change);
	return 0;
} 






