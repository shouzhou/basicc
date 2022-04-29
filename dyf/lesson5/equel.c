/*#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,s,area;
	scanf("%f%f%f",&a,&b,&c);
	s= (a+b+c)/2 ;
	area = sqrt(s*(s-a)*(s-b)*(s-c));

}
*/
#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,s,s1;
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2; 
	s1=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",s1);
} 
