#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n  > 15)
		{
			break;
		}

		for (j = 0; j <= n; j++)
		{
			if (j == n)
			{
				printf("%d", i*j);
			}
			else
			{
				if (i*(j + 1) > 99)
				{
					printf("%d, ", i*j);
				}
				else if (i*(j + 1) > 9 && i*(j + 1) < 100)
				{
					printf("%d,  ", i*j);
				}
				else
				{
					printf("%d,   ", i*j);
				}
			}
			
		}
		printf("\n");
	}
}
