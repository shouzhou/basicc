#include <stdio.h>
int main()
{
	//   /  % 用途 ：A  用来判断两个数是否可以整除 
	//  if( a%b ==0)  --> 能整除  质数 
	//  取 个位  十位 百位 千位 。。。 
	//  a = 2134  ; 请你提取出  它的 个十百千位 
	//  int  g,s ,b,q  ; 
    int  a = 7841;
	int  g,s,b,q;
	g = a%10;
//	s = a/10%10;   
//	s = a/100*10%10 ;  错误的 
    s = a%100/10;
	b = a/100%10;
	q = a/1000;
	printf("%d 千位 = %d  百位=%d 十位= %d 个位 = %d \n",a,q,b,s,g); 
	return 0;
}
