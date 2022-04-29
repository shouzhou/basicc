//需求：键盘输入10个同学的成绩，求总分和平均分 
#define NUM  100 
#include <stdio.h>
int main()
{
	int score ,sum,i;
    int  num;
	float ave;
	score =0; //每次输入的分数 
	sum = 0; //总成绩 -开始的时候肯定等于0
	i = 1; //控制循环的变量
	num = NUM;
	printf("请输入%d个同学的成绩：\r\n",num);
	/*
	while(i<=NUM)
	{
		printf("第%d个同学的成绩：\r\n",i);
		scanf("%d",&score);
		sum = sum +score; 
		i++;
	} */
	do
	{
		printf("第%d个同学的成绩：\r\n",i);
		scanf("%d",&score);
		sum = sum +score; 
		i++;	
	} while(i<=NUM);
	ave = (float)sum/NUM;
	printf("总成绩为%d,平均成绩为%.1f",sum,ave); 
	
	 
	return 0;
}



















