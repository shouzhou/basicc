#include <stdio.h>
#define  PI  3.14159
int main()
{
	float r ,h ;
	float result; 
	printf("1212121212姓名作业\r\n");
	printf("请输入圆的半径和高：\r\n");
	scanf("%f,%f",&r,&h);
	//圆的面积  pi rr 
	result = PI *r *r;
	printf("圆的面积 = %.2f\r\n",result); 
	//圆的周长 2PI r
	result = 2*PI *r;
	printf("圆的周长 = %.1f\r\n",result); 	
	//圆球表面积 4PIrr
	result = 4*PI *r *r;
	printf("圆球表面积 = %.2f\r\n",result); 
	// 圆球体积  4.0/3 pi rrr 
	result = 4.0/3*PI *r*r*r;
	printf("圆球的体积 = %.3f\r\n",result); 
	//圆柱体积   PI rr h 
	result = PI *r *r*h;
	printf("圆柱体积 = %.3f\r\n",result); 
}
