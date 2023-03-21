#include <stdio.h>
int main(void)
{
	int i,j;
	for(i = 1; i < 6; i++)
	{	
		for(j=1; j<12; j++)
		{	
			printf("%d\t", i * j);
		}	
		printf("\n");
	}
	return(0);
}
