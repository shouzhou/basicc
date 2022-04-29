//需求 ：找出 1-999 里面的水仙花数 153
#include <stdio.h>
int main()
{
	/*
	int i;
	int g,s,b;
	for(i=100;i<1000;i++)
	{
		g = i%10;
		s = i/10%10;
		b = i/100;
		if(i == g*g*g+s*s*s+b*b*b)
			printf("水仙花数 %d = %d^3 +%d^3+%d^3 \r\n",i ,b,s,g); 
	} */
	// 利用 循环嵌套
	int  i,j,k;
	for(i=1;i<=9;i++) 
		for(j=0;j<=9;j++) 
			for(k=0;k<=9;k++) 
			  if(i*i*i + j*j*j +k*k*k == 100*i+10*j+k)
			  	printf("水仙花数 %d = %d^3 +%d^3+%d^3 \r\n",100*i+10*j+k ,i,j,k); 
	
	
	return 0;
} 
