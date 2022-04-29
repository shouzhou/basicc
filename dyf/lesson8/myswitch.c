/*ÒªÇó°´ÕÕ¿¼ÊÔ³É¼¨µÄµÈ¼¶Êä³ö°Ù·ÖÖÆ·ÖÊý¶Î£¬
AµÈÎª85·ÖÒÔÉÏ£¬BµÈÎª70¡«84·Ö£¬
CµÈÎª60¡«69·Ö £¬DµÈÎª 60·ÖÒÔÏÂ ¡£
³É¼¨µÄµÈ¼¶ÓÉ¼üÅÌÊäÈë¡**/
#include<stdio.h>
void main()
{
	// int    %d
	// char   %c
	// float  %f
//	char a;
    int a;
	printf("qing shu ru yige zifu \r\n") ;
	scanf("%d",&a);
	//printf("%",a);//
	switch(a)
	{
		case 1:printf("SCORE >85");break;
		case 2:printf("SCORE 70~84");break;
		case 3:printf("SCORE 60~69");break;
		case 4:printf("SCORE <60");break;
	
		
		default :printf("INPUT ERROR!");break; //
			
	}
		
		
}
