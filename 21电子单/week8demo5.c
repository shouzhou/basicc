//���� ���ҳ� 1-999 �����ˮ�ɻ��� 153
#include <stdio.h>
int main()
{
	/*
	int i;
	int g,s,b;
	for(i=100;i<1000;i++)
	{
		g = i%10;
		s = i/10%10;
		b = i/100;
		if(i == g*g*g+s*s*s+b*b*b)
			printf("ˮ�ɻ��� %d = %d^3 +%d^3+%d^3 \r\n",i ,b,s,g); 
	} */
	// ���� ѭ��Ƕ��
	int  i,j,k;
	for(i=1;i<=9;i++) 
		for(j=0;j<=9;j++) 
			for(k=0;k<=9;k++) 
			  if(i*i*i + j*j*j +k*k*k == 100*i+10*j+k)
			  	printf("ˮ�ɻ��� %d = %d^3 +%d^3+%d^3 \r\n",100*i+10*j+k ,i,j,k); 
	
	
	return 0;
} 
