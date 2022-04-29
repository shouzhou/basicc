//N个数 ，大循环--找到其中的最大值-找N-1次
//        小循环  找最大值过程中，要比较的次数 N-1 ,N-2 ,N-3.....2,1;
/*
		大循环      小循环 
			1         N-1
            2         N-2 
            3
            ..		  ..
            N-1        1
*/ 
#include <stdio.h>
#define  N   10 
int main()
{
	int a[N];
	int i;
	int j;
	int temp;
	printf("请输入需要排序的的数：\r\n");
	for(i=0;i<N;i++)
	 	scanf("%d",&a[i]);
	
	
   for(i=0;i<N-1;i++)//大循环 N-1  
   		for(j=0;j<N-1-i;j++) //N-1-i :N-1 
   		{
			//比较两个数的大小 ，并且交换
			if(a[j]<a[j+1])  //前面的数 比后面的数大 ，两个数交换 
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] =temp;	
			} 
			
			 
		}
		
    printf("排序后的数组为：\r\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]); 
	return 0;
}







