/*要求按照考试成绩的等级输出百分制分数段，
A等为85分以上，B等为70～84分，
C等为60～69分 ，D等为 60分以下 。
成绩的等级由键盘输入?**/
#include<stdio.h>
void main()
{
	// int    %d
	// char   %c
	// float  %f
//	char a;
    int a;
	printf("qing shu ru yige zifu \r\n") ;
	scanf("%d",&a);
	//printf("%",a);//
	switch(a)
	{
		case 1:printf("SCORE >85");break;
		case 2:printf("SCORE 70~84");break;
		case 3:printf("SCORE 60~69");break;
		case 4:printf("SCORE <60");break;
	
		
		default :printf("INPUT ERROR!");break; //
			
	}
		
		
}
