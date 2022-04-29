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
	int level; 
	//=========基本的货物售卖系统===================
	printf("请输入你购买的商品数量，单价以及你的付款金额\r\n");
	scanf("%d%f%f",&count,&price,&pay);
	//1. 算总价格 
	total = price * count;
	//2. 算折扣
	// [Error] 'level' undeclared (first use in this function) 
	level = (int)total/1000; //根据购买的值来定你的级别 
	switch(level) 
	{// [Error] stray '\243' in program --中文字符出现在程序中 
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
	//3. 算折扣后的价格
	income = total*(1-discount) ;
	// 4. 算找零 
	change = pay - income; 
	//4. 输出结果 
	printf("你的实际应收金额为%.1f元￥,找零为%.1f元￥",income,change);
	return 0;
} 
