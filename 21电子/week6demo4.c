/*
	成绩 >=90 优秀
	>=80   良好
	>=70   中等
	>=60   及格
	<60   不及格 
*/
#include <stdio.h>
void main()
{
	int score;
	printf("请输入成绩：\r\n");
	scanf("%d",&score);
	if(score>=90)
		printf("成绩优秀\r\n");
	else if(score>=80)
		printf("成绩良好\r\n");
	else if(score>=70)
		printf("成绩中等\r\n");
	else if(score>=60)
		printf("成绩及格\r\n");
	else 
		printf("成绩不及格\r\n");
} 
