// ͨ����������x ʵ��  1+2 +3 +������+x ��ֵ 
#include <stdio.h>
int main()
{
	int i;
	int result =0;
	int x;
	printf("������x��ֵ:\r\n");
	scanf("%d",&x); 
	for(i=1;i<=x;i++)
	{
		result = result + i;
	}
	
	printf("1+2+3+...+%d = %d\r\n",x,result);
	return 0;
}
