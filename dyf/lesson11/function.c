#include <stdio.h> 
int mydyf(int aa,int bb,char cc)
{
	int result;	
	if(cc=='+')
	{
		result = aa+bb;	
	}
	else if(cc== '*')
	{
		result = aa* bb;	
	}
	else if(cc=='-')
	{
		result = aa-bb;
	}
	else if(cc=='/')
	{
		result = aa/bb;
	}
	return result;
}
void main()
{
	int bb;
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	bb = mydyf(a,b,c);
	printf("%d %c %d = %d",a,c,b,bb);
	//printf("a= %d,b= %d,c=%c",a,b,c);
}
