// �ҳ� 1000 ���ڵ�����
// 6 = 1 +2 +3   
#include <stdio.h>
void main()
{
	int i,j;
	int sum =0 ;
	for(i=2;i<1000;i++)
	{
		sum =0; 
		for(j=1;j<i;j++)
		{
			if(i%j ==0)
			sum = sum+j;	
		}
		if(i ==sum )
		{
		printf("�ҵ���һ������ %d ,��������Ϊ��",i);	
		for(j=1;j<i;j++)
		{
			if(i%j ==0)
			printf("%d ",j); 
		}
		printf("\n");
		}	
	} 
    
}
