// �ҳ����� 6= 1+2+3  ��28 = 1+2+4+7+14 
// �ҵ�����  % 
#include <stdio.h>
void main()
{

	int num ;
	int i,j,k;
	int add=0;
	for(num=2;num<1000;num++)
	{
		for(i=1;i<num;i++)
		{
			if(num%i == 0)
			   add = add+i;
		}
		if(num == add) 
		{
		printf("\n����һ������ %d ,��������Ϊ��\r\n",num);
		for(i=1;i<num;i++)
		{
			if(num%i == 0)
				printf("%d ",i);	
		} 
		}
		add =0; 
	} 
		

}
