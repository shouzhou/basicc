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
	printf("���꣬��������ĳɼ���\r\n");
	scanf("%d",&score);
	if(score>90)
	{
		printf("�ȼ�Ϊ����\r\n");	
	}
	else if(score>=80)
	{
		printf("�ȼ�Ϊ����\r\n");		
	} 
	else if(score>=70)
	{
		printf("�ȼ�Ϊ�е�\r\n");	
	}
	else if(score>=60)
	{
		printf("�ȼ�Ϊ����\r\n");	
	}
	else
	{
		printf("�ȼ�Ϊ������\r\n");
	}
	return 0;
}
