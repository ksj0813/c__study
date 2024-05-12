#include <stdio.h>

void main()
{	
	int i;

	for(i=2; i<=9; i++){ 
		printf("#Á¦%d´Ü# " ,i);
	} printf("\n\n");

	int a,b;

	for( a = 1 ; a<=9; a++){
		for ( b=2 ; b<=9; b++){
			printf("%2dX%2d=%2d", a,b,a*b);
		}
		printf("\n");
	}
}

