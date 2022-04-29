#include <stdio.h>
int main()
{
	float price ;//单价
	float pay ;//顾客付款总金额
	int  count;//商品数量
	float total ;//打折前的商品价格
	float discount ;//折扣 
	float income ; //打折后的实际价格
	float change;  //找零 
	//=========基本的货物售卖系统===================
	printf("请输入你购买的商品数量，单价以及你的付款金额\r\n");
	scanf("%d%f%f",&count,&price,&pay);
	//1. 算总价格 
	total = price * count;
	//2. 算折扣
	if(total>= 8000)        discount = 0.2;
	else if(total >=6000)   discount = 0.15;
	else if(total >=3000)   discount = 0.1;
	else if(total >=1000)   discount = 0.05;
	else                    discount = 0;
	//3. 算折扣后的价格
	income = total*(1-discount) ;
	// 4. 算找零 
	change = pay - income; 
	//4. 输出结果 
	printf("你的实际应收金额为%.1f元￥,找零为%.1f元￥",income,change);
	return 0;
} 
