#include <stdio.h>
int main()
{
	// 1. if
	// 2. switch
	int a,b,c;
	printf("请输入变量值：\r\n");
	scanf("%d",&a);
	//1. if --单独的if
//	if(a>0) 
	//	printf("变量a为正数\r\n"); 
	//2. if 和 else 是成对出现的
	// if(a>0) 
	//	printf("变量a为正数\r\n");
//	 else 
	// 	printf("变量a 小于等于0\r\n"); 
	//3. if  else if  else  if 。。。else  多种条件判断 
//	 if(a>=90)
	 //	printf("成绩优秀\r\n");
	// else if (a>=80) 
//		printf("成绩良好\r\n");
	// else if (a>=70) 
	//	printf("成绩中等\r\n");
	// else if (a>=60) 
	//	printf("成绩及格\r\n");
	// else 
	//	printf("成绩不及格\r\n");
		
//		==============================switch===================== 
//   if一般跟的是逻辑判断
//   switch 里面跟的一般是一个值 --可以变
     switch(a)
	 {
		case 1 : printf("选择分支1\r\n"); break;
		case 2 : printf("选择分支2\r\n"); break;
		case 3 : printf("选择分支3\r\n"); break;
	 } 
	return 0;
}
