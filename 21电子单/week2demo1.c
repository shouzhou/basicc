/*
	这个是第二周的测试程序
	编写时间2022-3-3
	作者 ：董李江
	功能：介绍基本的数据类型
	备注：无 
*/
#include <stdio.h>
int main()
{
	//整型数据
	int a;
	a = 10;
	printf("整型变量a= %d\r\n",a); 
	
	//浮点型数据
	float  b;
	b = 3.0; 
	printf("浮点型数据b = %f\r\n",b);
	
	//字符型数据 
	char  c;
	c = 0;
	for(a=0;a<128 ;a++) 
	{
	printf("%x = %c\t",c,c);
	c= c+1;
	if(c%5 ==0)
	printf("\r\n"); 
	} 
	return 0; //返回值 
}

