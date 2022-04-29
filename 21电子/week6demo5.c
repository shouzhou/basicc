#include <stdio.h>
void main()
{
	int a,b;
	int s;
	char c;
	printf("请输入运算符和数值 ，例如：3 + 4 \r\n");
	scanf("%d %c %d",&a,&c,&b);
//	printf("%d %c %d",a,c,b); 
	switch(c)
	{
		case '+' : s = a+b; break;
		case '-' : s = a-b; break;
		case '*' : s = a*b; break;
		case '/' : s = a/b; break;
	} 
	
	printf("%d %c %d = %d\r\n",a,c,b,s);
}
