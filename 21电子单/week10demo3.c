#include<stdio.h>
int main()
{
	int max,min;
	int a[10];
	//int a,b,c;
	int i;
	printf("请输入成绩:\r\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 
//	for(i=0;i<10;i++)
	//	printf("%d ",a[i]);
	//找最大值和最小值
	max =a[0];
	min =a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i]) max = a[i];
		if(min>a[i]) min = a[i];	
	} 
	//输出
	printf("最大值 %d 最小值%d",max,min) ;
	return 0;
}
