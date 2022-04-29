/*
 1. C语言框架
 2. 变量和常量的类型  
 3. 进制转换
 4. 常量 define  转义符 
*/
#include <stdio.h>
#define  A  10 
int main()
{
   // 1. 整形 、浮点型、字符型 
   int a,b,c;
   float f;
   char  ch;
   a = 10;
   a = 11;
   a = 0x10; //16进制
   f= 3.14;
   ch = '%';
   printf("%d  %f   %c\n",a,f,ch); 
   
    // 2. 进制转换  50以内 10进制转换成十六进制 和二进制
    // 33 = 16*2 + 1   ==>  21   =>  00100001 
    // 42 = 16 *2 + 10 ==>  2A   =>  00101010
    // 4. #define 预编译指令
	// 4. 转义符   \t \n   \b  \001  \x11 \0 
    a = 10 + 10;
    printf("a= %d\n",a);
	return 0;
} 




