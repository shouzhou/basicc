/*#include<stdio.h>
void main()
{
	int a;
	printf("qing shu ru yi ge shu\r\n");
	scanf("%d",&a);
	if(a>100)
	printf("a>100\r\n");
	else
	printf("a<100\r\n");
}*/

//2. 输入一个数（小于10000），将它逆序输出，例如输入 135 ，输出531

#include<stdio.h>
void main()
{
	int a,g,s,b,q;
	printf("qing shu ru yi ge shu\r\n");
	scanf("%d",&a);
	if(a<=9)
	{
		printf("the result is %d\r\n",a);
	}
	else if(a<=99)	// 10-99
	{
		s= a/10;
		g= a%10;
		printf("the result is %d\r\n",g*10+s);
	}
	else if(a<=999)
	{
		b= a/100;
		s= a/10%10;
		g= a%10;
		printf("the result is %d\r\n",g*100+s*10+b);
	}
	else if(a<=9999)
	{
	    q= a/1000;
		b= a/100%10;
		s= a/10%10;
		g= a%10;	
		printf("the result is %d\r\n",g*1000+s*100+b*10+q);
	}
	else
	{
		printf("i am here \r\n");
	}
	
}
