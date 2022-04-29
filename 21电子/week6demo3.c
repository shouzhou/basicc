#include <stdio.h>
void main()
{
	int year; 
	//闰年  1.  能被4整除，(&&)并且不能被100整除 || 2.  能被400整除  
	printf("请输入一个年份:\r\n");
	scanf("%d",&year);
//	printf("year = %d",year);
	if(((year%4 ==0)&&(year%100 !=0))||(year %400 ==0)) 
	{
		printf("%d年 是闰年！\r\n",year);
	}
	else
	{
		printf("%d年不是闰年！\r\n",year); 
	}
	/*
	int a,b;
	printf("请输入一个数的值：\r\n");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("该数是正数\r\n");	
	} 
	else
	{
		printf("该数是负数\r\n");
	}
	
	*/
}
