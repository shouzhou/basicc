#include <stdio.h>
#define  N  40
void main()
{
	int a[N]={1,1};
	int i;
	
	for(i=2;i<N;i++)
		a[i]= a[i-1]+a[i-2];
	//  a[2] =a[1]  + a[0]; i=2
	//  a[3] =a[2]  + a[1]; i =3
	//  ....i=4,5,,............19
	for(i=0;i<N;i++)
	{
	   if(i%5 ==0) printf("\r\n");
	   printf("%15d",a[i]);
	}
	
}
