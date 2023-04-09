#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int add = 0;
	int i, j;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (i = 1, i < argc; i++)
	{
	
	j = 0;

		while (argv[i][j] != '\0')
		{
			if(!isdigiit(argv[i][j])) 
			{	
				printf("Error\n");
				return (1);
			}
			j++;
		}

		int num = atoi(argv[i]);

		if (add >0)
		{
			add = add + num; 
		}
	}

	printf("%d\n", add);
	return 0;
}
