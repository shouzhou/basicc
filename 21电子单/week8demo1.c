//���󣺼�������10��ͬѧ�ĳɼ������ֺܷ�ƽ���� 
#define NUM  100 
#include <stdio.h>
int main()
{
	int score ,sum,i;
    int  num;
	float ave;
	score =0; //ÿ������ķ��� 
	sum = 0; //�ܳɼ� -��ʼ��ʱ��϶�����0
	i = 1; //����ѭ���ı���
	num = NUM;
	printf("������%d��ͬѧ�ĳɼ���\r\n",num);
	/*
	while(i<=NUM)
	{
		printf("��%d��ͬѧ�ĳɼ���\r\n",i);
		scanf("%d",&score);
		sum = sum +score; 
		i++;
	} */
	do
	{
		printf("��%d��ͬѧ�ĳɼ���\r\n",i);
		scanf("%d",&score);
		sum = sum +score; 
		i++;	
	} while(i<=NUM);
	ave = (float)sum/NUM;
	printf("�ܳɼ�Ϊ%d,ƽ���ɼ�Ϊ%.1f",sum,ave); 
	
	 
	return 0;
}



















