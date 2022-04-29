// 1. if else
// 2. switch
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入变量值:\r\n");
	scanf("%d",&a);
	//1. 单个if
	//if(a>0) printf("变量a 是正数"); 
	
	//2. if  -else 配对
	/*
	if(a>0)
		printf("变量a 是正数");
	else
		printf("变量a 是负数");	
		*/ 
	//3. if  else if  else  其中  else if 可以有多个
	if(a>90) // x>90
		printf("高级\r\n"); 
	else if(a>80)  // 80<x<=90 
		printf("中级\r\n"); 
	else if(a>70)  //70<x<=80 
		printf("初级\r\n"); 
	else //前面的全部不满足 
		printf("无级别\r\n"); 	
	///////////////////////switch /////////////////////////////
	printf("请输入分级数目：\r\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1: printf("高级\r\n"); break;
		case 2: printf("中级\r\n"); break;		
		case 3: printf("初级\r\n"); break;	
		case 4: printf("无级别\r\n"); break;	
	}
	
		
		
		
	return 0;
}
