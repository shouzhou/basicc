/*
	1. 程序介绍
	2. 作者介绍
	3. 说明性文字
	4. 。。。。。 
*/
#include <stdio.h>   // 包括头文件 
int main()
{
    // 1. 整形
	int a,b;
	a = 10;
	b = 20;
	//printf("a= %d a = %x\r\n",a,a); //输出a  值 
	//printf("b= %d b = %x\r\n",b,b);
    // 2. 浮点型
	float f1,f2;
	f1 = 3.14;
	f2 = 10.01; 
//	printf("f1= %f,f2 = %f\r\n",f1,f2);
	// 3. 字符型
	int i ;
	char c= '!'; 
	for(i=33;i<128;i++)
	{
		printf("字符：%c 十进制为： %d 十六进制为：%x\r\n",c,c,c);	
		c++;
	}
//	c = 'A';
//	printf("c= %c   c的ASCII 值 = %d   = %x\r\n",c,c,c);
	return 0;	
}











