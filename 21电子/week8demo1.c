//键盘输入10个同学的成绩，求出平均值和总分 
#include <stdio.h>
int main()
{
	int i=1;
	int score; //输入的成绩 
	int result=0; //总分 
	float ave;//平均分
	//先写一个同学的过程
//	while(i<=10) 
/*
    do 
	{
		printf("请输入第%d个同学的成绩：\r\n",i);	
		scanf("%d",&score);
		result = result+score;
		i++;
	}while(i<=10); */
	
	for(i=1;i<=10;i++)
	{
		printf("请输入第%d个同学的成绩：\r\n",i);	
		scanf("%d",&score);
		result = result+score;	
	} 
	
	ave = result/10.0;
	
	printf("总共有%d个同学，总分是%d,平均分是%.1f",i-1,result,ave);
	return 0;
}








