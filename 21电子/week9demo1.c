// 找出 1000 以内的完数
// 6 = 1 +2 +3   
#include <stdio.h>
void main()
{
	int i,j;
	int sum =0 ;
	for(i=2;i<1000;i++)
	{
		sum =0; 
		for(j=1;j<i;j++)
		{
			if(i%j ==0)
			sum = sum+j;	
		}
		if(i ==sum )
		{
		printf("找到了一个完数 %d ,各个因子为：",i);	
		for(j=1;j<i;j++)
		{
			if(i%j ==0)
			printf("%d ",j); 
		}
		printf("\n");
		}	
	} 
    
}
