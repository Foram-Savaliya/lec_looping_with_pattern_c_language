#include<stdio.h>

void main()
{
	int i,j,k=1;
	char a='A';
	for(i=1;i<=5;i++)
	{
		for(j='A';j<='E';j++)
		{
			if(i%2==0)
			{
				printf("%c ",a++);
			}
			else{
				printf("%d ",k++);
			}
		}
		printf("\n");
	}
}
