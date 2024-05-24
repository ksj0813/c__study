#include <stdio.h>

void main()
{
	int gugu[9][9];
	int i, k;
	

	for(int a=0; a<9; a++)
	{
		for(int b=0; b<8; b++)
		{
			gugu[a][b] = (b+2) * (a+1);
		}
	}


	for( i=0; i<9; i++)
	{
		for(k=0; k<8; k++){
	
		printf("%dX%d=%2d  ",k+2,i+1,gugu[i][k]);
	}
	printf("\n");

	}
}	

