#include <stdio.h>

void main(){
	int a,b;
	char str;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf(" %d", &a );
	scanf(" %c", &str);
	scanf(" %d", &b);
	switch (str)
	{ 
		case '+' :
		       	printf("%d + %d = %d �Դϴ�. \n", a,b,a+b ); 
			break;
		case '-' :
		       	printf("%d - %d = %d �Դϴ�. \n", a,b,a-b ); 
			break;
		case '*' :
		       	printf("%d * %d = %d �Դϴ�. \n", a,b,a*b ); 
			break;
		case '/' :
		       	printf("%d / %d = %d �Դϴ�. \n", a,b,a/b ); 
			break;
		case '%' :
		       	printf("%d %% %d = %d �Դϴ�. \n", a,b,a%b ); 
			break;
		default :
		       	printf("�����ڸ� �߸� �Է��߽��ϴ�."); 
			break;

	}
}
