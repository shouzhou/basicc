/*
 >90  
 80-90
 70-80
 60-70
 <60
*/
#include <stdio.h>
int main()
{
	int score;
	printf("少年，请输入你的成绩：\r\n");
	scanf("%d",&score);
	if(score>90)
	{
		printf("等级为优秀\r\n");	
	}
	else if(score>=80)
	{
		printf("等级为良好\r\n");		
	} 
	else if(score>=70)
	{
		printf("等级为中等\r\n");	
	}
	else if(score>=60)
	{
		printf("等级为及格\r\n");	
	}
	else
	{
		printf("等级为不及格\r\n");
	}
	return 0;
}
