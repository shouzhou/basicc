#include <stdio.h>
int main()
{
	int a,b,c;
	float f;
	char cc;
	a= 0x0c;
	b= 0x12;
	c= a/b;  // 1    
	c= a%b ; // 2   
	//Î»²Ù×÷ =Âß¼­ ÒÆÎ»  Óë»ò·Ç   ×óÒÆ ÓÒÒÆ 
	c = a&b;  //1010 & 1000  ==>1000  8
	c = a|b;  //1010 | 1000  ==>1010  10
	c = a^b;  //1010 ^ 1000  ==>0010  2
	c = ~b;   //0111  ===> 7
	c = ~((a&b)|(a|b)); // ~(1000 | 1010)  0101
	
	c &= b; // c= c&b;
	c |=b; // c= c|b;
	c +=b; // c= c+b;
	c /=b; // c= c/b
	// ×óÒÆ  ÓÒÒÆ  
	c =  a<<2; //00 00_110000        c= 0x20  
	c =  b>>2; //0001_0010     0100  c= 0x04;
	
	
	f = 2.3;
	
	a= 10.1;  //int  10.1  float 
	cc = '%';
	
    a=3;
	b=3;
	
	c = a/b; //0;
/*	
	f= (float)a/(float)b ;  3.0 / 4.0
	printf("f= %f\n",f);   // 0.75
	f= (float)(a/b);    // 0-> 0.0
	printf("f= %f\n",f);   // 0.00
*/
	// ++ --
	
	a = a+1;
//	b--;   // ==>a= a+1;
	c= ++a/b; 
    printf("%d  %d ",a,b);	 
	
	
//	printf("int a= %d float f = %f char cc = %c",a,f,cc);
	return 0;
}







