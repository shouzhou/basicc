#include <stdio.h>  // ���1 
#include "math.h"
#define PI 3.1415926
int main()  //���2 
{           //���3 
	double x,s;
	printf("������x��ֵ��\r\n");
	scanf("%lf",&x);  //l  long 
	s = sin(x*PI/180);
	printf("sin(%f) = %f\r\n",x,s);
	return 0 ; //���4 
}

