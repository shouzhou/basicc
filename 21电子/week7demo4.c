// Ŀ�� �������� �����Ӵ��С���  ����
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("��������������ֵ:\r\n");
	scanf("%d%d%d",&a,&b,&c);
	/*
	if(a>b)
	{
		if(c>a) printf("%d>%d>%d",c,a,b);
		else // a>c
		{
			if(b>c) printf("%d>%d>%d",a,b,c);
			else    printf("%d>%d>%d",a,c,b);
		}
	}
	else//b>a
	{
	    if(c>b)  printf("%d>%d>%d",c,b,a);
	    else
	    {
			if(a>c) printf("%d>%d>%d",b,a,c);
			else    printf("%d>%d>%d",b,c,a);
		}
	}*/
	
	if((a>c)&&(a>b))
	{
		if(b>c)  printf("%d>%d>%d",a,b,c);	
		else     printf("%d>%d>%d",a,c,b);		
	} 
	else if((b>a)&&(b>c))
	{
		if(a>c) printf("%d>%d>%d",b,a,c);
		else    printf("%d>%d>%d",b,c,a);	
	}
	else if((c>a)&&(c>b))
	{
		if(a>b) printf("%d>%d>%d",c,a,b);
		else    printf("%d>%d>%d",c,b,a);	
	}
	
	
	
	

	return 0;
} 
