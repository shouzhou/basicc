/*
     ���룺
	 Բ�İ뾶r�Լ�Բ����h
	����� 
	Բ�ܳ�C1��
	Բ���Sa��
	Բ������Sb��
	Բ�����Va��
	Բ�����Vb

*/
#include <stdio.h>
#define PI  3.1415 
int main()
{
	float r,h;
	float cir,sa,sb,va,vb; 
	printf("1211212������ҵ\r\n"); 
	printf("������Բ�İ뾶��Բ���ĸߣ����磺3.2,10.1\r\n");
	scanf("%f,%f",&r,&h);
	printf("r=%.2f, h= %.2f\r\n",r,h);
	//1. �ܳ�  2 PI R
	cir = 2*PI*r; 
	printf("Բ���ܳ�= %.2f\r\n",cir); 
	//2. ���   PI R R
	sa = PI*r*r; 
	printf("Բ�����= %.2f\r\n",sa);
	//3. ������  4 PI R R
	sb = 4*PI*r*r; 
	printf("Բ�ı����= %.2f\r\n",sb);
	//4. ������  4/3 PI RRR
	va = 4.0/3*PI*r*r*r; //1 
	printf("������= %.2f\r\n",va);
	//5. Բ�����  PIRRH 
	vb = PI*r*r*h; 
	printf("Բ�������= %.2f\r\n",vb);
	return 0;
}








