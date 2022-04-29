#include <stdio.h>
void main()
{
	int i=1;
	// 1. while
	/*
	while(i<11)
	{
		printf("我是循环体，执行第%d次循环\r\n",i);
		i++;	
	}
	*/
	// 2. do while
	/*
	do
	{
		printf("我是循环体，执行第%d次循环\r\n",i);
		i++;	
	}while(i<11); 
	*/ 
	//3. for
	 //for(;;)    //while(1) 
	 for(i=1;i<11;i++)
	 {
		printf("我是循环体，执行第%d次循环\r\n",i);	
        //i++;	
	 } 
	 
	
}
