//N���� ����ѭ��--�ҵ����е����ֵ-��N-1��
//        Сѭ��  �����ֵ�����У�Ҫ�ȽϵĴ��� N-1 ,N-2 ,N-3.....2,1;
/*
		��ѭ��      Сѭ�� 
			1         N-1
            2         N-2 
            3
            ..		  ..
            N-1        1
*/ 
#include <stdio.h>
#define  N   10 
int main()
{
	int a[N];
	int i;
	int j;
	int temp;
	printf("��������Ҫ����ĵ�����\r\n");
	for(i=0;i<N;i++)
	 	scanf("%d",&a[i]);
	
	
   for(i=0;i<N-1;i++)//��ѭ�� N-1  
   		for(j=0;j<N-1-i;j++) //N-1-i :N-1 
   		{
			//�Ƚ��������Ĵ�С �����ҽ���
			if(a[j]<a[j+1])  //ǰ����� �Ⱥ�������� ������������ 
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] =temp;	
			} 
			
			 
		}
		
    printf("����������Ϊ��\r\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]); 
	return 0;
}







