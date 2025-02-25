#include "main.h"

void print_diagonal(int n)
{
	int i, j = 0;

	while (j < n)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
