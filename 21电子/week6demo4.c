/*
	�ɼ� >=90 ����
	>=80   ����
	>=70   �е�
	>=60   ����
	<60   ������ 
*/
#include <stdio.h>
void main()
{
	int score;
	printf("������ɼ���\r\n");
	scanf("%d",&score);
	if(score>=90)
		printf("�ɼ�����\r\n");
	else if(score>=80)
		printf("�ɼ�����\r\n");
	else if(score>=70)
		printf("�ɼ��е�\r\n");
	else if(score>=60)
		printf("�ɼ�����\r\n");
	else 
		printf("�ɼ�������\r\n");
} 
