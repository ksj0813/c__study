#include <stdio.h>

void main(){
	int a,b;
	char str;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf(" %d", &a );
	scanf(" %c", &str);
	scanf(" %d", &b);
	switch (str)
	{ 
		case '+' :
		       	printf("%d + %d = %d 입니다. \n", a,b,a+b ); 
			break;
		case '-' :
		       	printf("%d - %d = %d 입니다. \n", a,b,a-b ); 
			break;
		case '*' :
		       	printf("%d * %d = %d 입니다. \n", a,b,a*b ); 
			break;
		case '/' :
		       	printf("%d / %d = %d 입니다. \n", a,b,a/b ); 
			break;
		case '%' :
		       	printf("%d %% %d = %d 입니다. \n", a,b,a%b ); 
			break;
		default :
		       	printf("연산자를 잘못 입력했습니다."); 
			break;

	}
}
