#include <stdio.h>
int main() 
{
//  ����
    int j;
   	//int a[5]={10,11,3,5,6};
   	int a[5]={0};
   	int i;
   	int c;
	
	
	printf("����A�ĵ�ַ %d\r\n",a);
	printf("a[1]�ĵ�ַ %d\r\n",&a[1]);
	printf("a[2]�ĵ�ַ %d\r\n",&a[2]);
	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\r\n",i,a[i]);
	}
	 
	
	return 0;
}
