#include <stdio.h>
int main()
{
	int num1,num2,num3;
	float pr1,pr2,pr3;
	float money;
	//scanf(); //���� 
	num1= 10;
	pr1 = 5.6;
	num2 = 20;
	pr2 = 6.3;
	num3 = 3;
	pr3 = 15.3;
	//�Լ�ѡ�� 
	//scanf("%d %d %d",&num1,&num2,&num3); 
	
	money = num1*pr1+ num2*pr2 +num3*pr3;
	printf("2112121212ĳĳĳ ��ҵ\n") ;
	printf("ƻ������%.1f,����%d\n",pr1,num1) ;
	printf("���ӵ���%.1f,����%d\n",pr2,num2) ;
	printf("���ܵ���%.1f,����%d\n",pr3,num3) ;
	printf("����Ҫ���ܵ�Ǯ= %.1f\n",money);
	return 0;
}
