#include <stdio.h>
int main() 
{
//  数组
    int j;
   	//int a[5]={10,11,3,5,6};
   	int a[5]={0};
   	int i;
   	int c;
	
	
	printf("数组A的地址 %d\r\n",a);
	printf("a[1]的地址 %d\r\n",&a[1]);
	printf("a[2]的地址 %d\r\n",&a[2]);
	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\r\n",i,a[i]);
	}
	 
	
	return 0;
}
