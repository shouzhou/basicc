/*
     输入：
	 圆的半径r以及圆柱高h
	输出： 
	圆周长C1、
	圆面积Sa、
	圆球表面积Sb、
	圆球体积Va、
	圆柱体积Vb

*/
#include <stdio.h>
#define PI  3.1415 
int main()
{
	float r,h;
	float cir,sa,sb,va,vb; 
	printf("1211212姓名作业\r\n"); 
	printf("请输入圆的半径和圆柱的高，例如：3.2,10.1\r\n");
	scanf("%f,%f",&r,&h);
	printf("r=%.2f, h= %.2f\r\n",r,h);
	//1. 周长  2 PI R
	cir = 2*PI*r; 
	printf("圆的周长= %.2f\r\n",cir); 
	//2. 面积   PI R R
	sa = PI*r*r; 
	printf("圆的面积= %.2f\r\n",sa);
	//3. 球表面积  4 PI R R
	sb = 4*PI*r*r; 
	printf("圆的表面积= %.2f\r\n",sb);
	//4. 球的体积  4/3 PI RRR
	va = 4.0/3*PI*r*r*r; //1 
	printf("球的体积= %.2f\r\n",va);
	//5. 圆柱体积  PIRRH 
	vb = PI*r*r*h; 
	printf("圆柱的体积= %.2f\r\n",vb);
	return 0;
}








