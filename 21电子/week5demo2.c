#include <stdio.h>
void main()
{
    int num1,num2,num3;
    float pr1,pr2,pr3;
    float money;
    num1 = 10;
    num2 = 20;
	num3 = 5;
	
	pr1 = 5.6;
	pr2 = 6.3;
	pr3 = 15.7;
	money = num1*pr1+num2*pr2+num3*pr3;
	
	printf("12121212姓名 作业提交\n");
	printf("总价格= %.1f\n",money);
	printf("苹果价格为= %.1f 苹果数量为%d\n",pr1,num1);
	printf("梨子价格为= %.1f 梨子数量为%d\n",pr2,num2);
	printf("菠萝价格为= %.1f 菠萝数量为%d\n",pr3,num3);

	/* 
	int a,b,c;
	float f;
	char cc;
	double dd; 
	a =10;
	b = 8;
	//a++;  // a= a+1; 
	//printf("a = %d",a--);
  // 三目运算符  --C语言中唯一的一个三目运算符 
  // ? : 
  // 逻辑中 非零为真   --不是0  就是真的 		
   	c = 0 ? a:b;  //if  else 
   	
//	printf("c= %d\n",c);	
    printf("int类型占的字节数为%d\n",sizeof(a));
	printf("double类型占的字节数为%d\n",sizeof(dd));
	printf("char类型占的字节数为%d\n",sizeof(cc));	
	*/
	
	
	
				
} 
