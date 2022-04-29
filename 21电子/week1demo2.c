#include <stdio.h>  // ¿ò¼Ü1 
#include "math.h"
#define PI 3.1415926
int main()  //¿ò¼Ü2 
{           //¿ò¼Ü3 
	double x,s;
	printf("ÇëÊäÈëxµÄÖµ£º\r\n");
	scanf("%lf",&x);  //l  long 
	s = sin(x*PI/180);
	printf("sin(%f) = %f\r\n",x,s);
	return 0 ; //¿ò¼Ü4 
}

