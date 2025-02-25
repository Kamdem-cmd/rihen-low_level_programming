#include "main.h"

void print_square(int size)
{
	int i, j = 0;

	while (j < size)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		j++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
