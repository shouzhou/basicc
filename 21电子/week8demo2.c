//��һ�½׳� 
#include <stdio.h>
int main()
{
	int i=1;
	int n; //����׳���ֵ 
	float result=1.0;//��� 
 
	printf("������׳�����\r\n");	
	scanf("%d",&n);
   while(i<=n) 
   {
		result = result*i;
		i++;	
   	}
	printf("%d! = %.1f",n,result);
	return 0;
}








