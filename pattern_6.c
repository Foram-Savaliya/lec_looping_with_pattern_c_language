#include<stdio.h>

void main()
{
	char i,j,k='A';
	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}
