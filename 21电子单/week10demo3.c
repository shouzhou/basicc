#include<stdio.h>
int main()
{
	int max,min;
	int a[10];
	//int a,b,c;
	int i;
	printf("������ɼ�:\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 
//	for(i=0;i<10;i++)
	//	printf("%d ",a[i]);
	//�����ֵ����Сֵ
	max =a[0];
	min =a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i]) max = a[i];
		if(min>a[i]) min = a[i];	
	} 
	//���
	printf("���ֵ %d ��Сֵ%d",max,min) ;
	return 0;
}
