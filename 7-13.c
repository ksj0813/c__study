#include <stdio.h>
void main()
{
	int a,b,c ;
	int i;
	int hap = 0;
	
	printf("�հ��� ���۰� ==> ");
	scanf("%d" , &a);
	printf("�հ��� ���� ==> ");
	scanf("%d", &b);
	printf("��� ==> ");
	scanf("%d", &c);

	for(i=0; i<=b; i++)
	{	
		if((i%c==0)&&(i>=a))
		{
			
			hap += i;
		}
	}
	
	printf("%d���� %d������ %d����� �հ� ==> %d ",a,b,c,hap);
}

