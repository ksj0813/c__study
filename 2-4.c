#include <stdio.h>

void main()
{
	int a, b, c, d;
	int result;

	a = 100;
	b = 200;
	c = 300;
	d = 400;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);

	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);

	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &c);
	
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &d);

	result = a + b + c + d;
	printf(" %d + %d + %d + %d = %d \n", a, b, c, d, result);
}


