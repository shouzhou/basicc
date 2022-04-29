// 从键盘上输入三个整形变量 ，按照从大到小的顺序输出
//  10 20 15 ====》  20 15 10
//  if  else   
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三个变量的值：\r\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d %d %d\r\n",a,b,c);
	
	/*
	   if((a>b&&a>c))
	   {
			
	   }
	   else if((b>a)&&(b>c))
	   else if(c>a && c>b)
	*/ 
 	if(a>b)
	{
		if(a>c)
		{	if(b>c)  printf("%d>%d>%d\r\n",a,b,c); 
			else     printf("%d>%d>%d\r\n",a,c,b); 
		}
		
		else  //a<c
					printf("%d>%d>%d\r\n",c,a,b); 	
    } 
	else  //a<b
	{
		if(b>c)
		{
			if(a>c)  printf("%d>%d>%d\r\n",b,a,c); 
			else     printf("%d>%d>%d\r\n",b,c,a); 
		}
		else         printf("%d>%d>%d\r\n",c,b,a); 
	}
	return 0;
}







