//��������10��ͬѧ�ĳɼ������ƽ��ֵ���ܷ� 
#include <stdio.h>
int main()
{
	int i=1;
	int score; //����ĳɼ� 
	int result=0; //�ܷ� 
	float ave;//ƽ����
	//��дһ��ͬѧ�Ĺ���
//	while(i<=10) 
/*
    do 
	{
		printf("�������%d��ͬѧ�ĳɼ���\r\n",i);	
		scanf("%d",&score);
		result = result+score;
		i++;
	}while(i<=10); */
	
	for(i=1;i<=10;i++)
	{
		printf("�������%d��ͬѧ�ĳɼ���\r\n",i);	
		scanf("%d",&score);
		result = result+score;	
	} 
	
	ave = result/10.0;
	
	printf("�ܹ���%d��ͬѧ���ܷ���%d,ƽ������%.1f",i-1,result,ave);
	return 0;
}








