#include <stdio.h>
int main()
{
	int a,b,c;
	char cc; 
	printf("请输入变量a和b的值，并且输入运算符：\r\n");
	printf("输入格式： 10 20 + \r\n");
	scanf("%d %d %c",&a,&b,&cc);
	switch(cc)
	{
		case '+': c= a+b; break; 
		case '-': c= a-b; break;
		case '*': c= a*b; break;
		case '/': c= a/b; break;
	}
	printf("运算结果为:   "); 
	printf("%d %c %d = %d",a,cc,b,c);
	return 0;
}
