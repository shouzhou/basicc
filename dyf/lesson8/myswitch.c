/*Ҫ���տ��Գɼ��ĵȼ�����ٷ��Ʒ����Σ�
A��Ϊ85�����ϣ�B��Ϊ70��84�֣�
C��Ϊ60��69�� ��D��Ϊ 60������ ��
�ɼ��ĵȼ��ɼ�������**/
#include<stdio.h>
void main()
{
	// int    %d
	// char   %c
	// float  %f
//	char a;
    int a;
	printf("qing shu ru yige zifu \r\n") ;
	scanf("%d",&a);
	//printf("%",a);//
	switch(a)
	{
		case 1:printf("SCORE >85");break;
		case 2:printf("SCORE 70~84");break;
		case 3:printf("SCORE 60~69");break;
		case 4:printf("SCORE <60");break;
	
		
		default :printf("INPUT ERROR!");break; //
			
	}
		
		
}
