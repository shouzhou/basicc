#include <stdio.h>
int main()
{
	int num1,num2,num3;
	float pr1,pr2,pr3;
	float money;
	//scanf(); //输入 
	num1= 10;
	pr1 = 5.6;
	num2 = 20;
	pr2 = 6.3;
	num3 = 3;
	pr3 = 15.3;
	//自己选择 
	//scanf("%d %d %d",&num1,&num2,&num3); 
	
	money = num1*pr1+ num2*pr2 +num3*pr3;
	printf("2112121212某某某 作业\n") ;
	printf("苹果单价%.1f,数量%d\n",pr1,num1) ;
	printf("梨子单价%.1f,数量%d\n",pr2,num2) ;
	printf("菠萝单价%.1f,数量%d\n",pr3,num3) ;
	printf("所需要的总的钱= %.1f\n",money);
	return 0;
}
