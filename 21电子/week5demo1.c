#include <stdio.h>
int main()
{
	//1. ��������  int float  char
	int a,b,c;
	int g,s,bb,q;
	float f;
	char cc;
	a= 10;
	f= 10.5; 
	cc = '*';
	/*
	printf("����int %d\n",a);
	printf("������float %f\n",f);
	printf("�ַ���char %c\n",cc); 
	*/
	//2. ���ֽ���
	// 4�� B-������  O -�˽���  D-ʮ���� H-ʮ������
	// 0-15��D)  --H  B
	a= 20;
//	printf("%d %x %o",a,a,a);  //20 14 24
	//3. �����   + - * / %  &  |  ~  ^ 
	a = 10;
	b = 8 ;
	c = a/b;  //1
	//printf("%x\n",c);
	c = a%b;  //2
	//printf("%x\n",c);
	c = a&b; //   1000 
//	printf("%x\n",c);
	c = a|b; //   10100
//	printf("%X\n",c);
	//  1010
	//  1000
	//  0111
	c = a^b; //2
	c = ~b;  //7 
	//  c=7  b=8;
	//  0111
	//  1000
	//  0000 
	c &= b;   // C = C&B  0 *
//	printf("%x\n",c);
	c += b;   // c = c+b; 8
//	printf("%x\n",c);
	c |= b;   // c = c|b; 8
//	printf("%x\n",c);
	
	c = ~((a&b)|(a*b));
//	printf("%x\n",c);
	/*
	   = ~(8|80) = ~(01011000)
	             =  (10100111)
	             =   0xa7
	             
   */
	             
	             
	//4. ȡĳһ������ ��ʮ��ǧλ -4λ�� 
	 a  = 7834;
	 g  = a%10;
	  
	// s  = a/10%10;   //��һ��д�� 
	 s  = a%100/10 ;
	 bb = a/100%10;  //��һ��д�� 
	 q  = a/1000; 
	 printf("%d  - %d - %d -- %d",q,bb,s,g);
	             
	return 0;
}











