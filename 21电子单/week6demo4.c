#include <stdio.h>
int main()
{
	int a,b,c;
	char cc; 
	printf("���������a��b��ֵ�����������������\r\n");
	printf("�����ʽ�� 10 20 + \r\n");
	scanf("%d %d %c",&a,&b,&cc);
	switch(cc)
	{
		case '+': c= a+b; break; 
		case '-': c= a-b; break;
		case '*': c= a*b; break;
		case '/': c= a/b; break;
	}
	printf("������Ϊ:   "); 
	printf("%d %c %d = %d",a,cc,b,c);
	return 0;
}
