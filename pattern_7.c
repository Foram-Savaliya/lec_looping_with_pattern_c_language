#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j='A';j<='E';j++)
		{
			if(i%2==0)
			{
				printf("* ");
			}
			else if(j%2==0){
				printf("# ");
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
}
