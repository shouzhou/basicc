#include "stdio.h"
#include "windows.h" 
int main()
{
	int i,j;
	while(1)
	{
	for(j=0;j<50;j++)
	{
		for(i=0;i<j;i= i+2)
		{
		  printf("*");
		  Sleep(5);
		}
		printf("\r\n");
	}
	for(j=50;j>0;j--)
	{
		for(i=0;i<j;i= i+2)
		{
		  printf("*");
		  Sleep(5);
		}
		printf("\r\n");
	}
	
	}
	return 0;	
}
