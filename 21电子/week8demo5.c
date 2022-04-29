//  需求 ：找出 100-999中的水仙花数 
  
#include <stdio.h>
int main()
{
	//1. 循环嵌套的方式
	int i,j,k;
	int g,s,b; 
	for(i=1;i<=9;i++)
		for(j=0;j<=9;j++)
		   for(k=0;k<=9;k++)
		       if(i*i*i + j*j*j +k*k*k == i*100+j*10+k) 
		       		printf("找到了水仙花数 %d\r\n ",i*100+j*10+k);
		       		
		       		
    // 2. 单循环的方式
	printf("================分割线========================\r\n");
	for(i=100;i<1000;i++)
	{
		g= i%10;
		s= i/10%10;
		b= i/100;
		if(g*g*g+s*s*s+b*b*b == i)
			printf("找到了水仙花数 %d\r\n ",i);	
	}		       		
		       		
	return 0;
}
