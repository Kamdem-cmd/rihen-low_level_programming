#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int i, j, k, l = 0;

	for (i =0; i <= 2; i++)
	{
		for (j =0; j <= 9; j++)
		{
			for (k =0; k <= 5; k++)
			{
				for (l =0; l <= 9; l++)
				{
					if (i == 2 && j >3)
					{
						break;
					}
					else
					{
						printf("%d%d:%d%d \n", i, j, k, l);
					}
				}
			}
		}
	}
}
