#include <stdio.h>
void main()
{
	int i,j;	
	//1. break 跳出 当前  循环	
	//2. continue 跳出 本次 循环 
	for(i=1;i<6;i++)
	 {
	    if(i==3) continue; 
	    printf("大循环第 %d 次 \r\n",i);
	    for(j=1;j<6;j++) 
	    {
			printf("小循环 第%d 次 \r\n",j);	
			
        }
		
			
	 } 
	 		
} 
