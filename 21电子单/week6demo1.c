#include <stdio.h>
#define  PI  3.14159
int main()
{
	float r ,h ;
	float result; 
	printf("1212121212������ҵ\r\n");
	printf("������Բ�İ뾶�͸ߣ�\r\n");
	scanf("%f,%f",&r,&h);
	//Բ�����  pi rr 
	result = PI *r *r;
	printf("Բ����� = %.2f\r\n",result); 
	//Բ���ܳ� 2PI r
	result = 2*PI *r;
	printf("Բ���ܳ� = %.1f\r\n",result); 	
	//Բ������ 4PIrr
	result = 4*PI *r *r;
	printf("Բ������ = %.2f\r\n",result); 
	// Բ�����  4.0/3 pi rrr 
	result = 4.0/3*PI *r*r*r;
	printf("Բ������ = %.3f\r\n",result); 
	//Բ�����   PI rr h 
	result = PI *r *r*h;
	printf("Բ����� = %.3f\r\n",result); 
}
