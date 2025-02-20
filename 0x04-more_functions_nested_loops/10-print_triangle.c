#include "main.h" 

void print_triangle(int size)
{
	int i, j = 1;
	int k = size;

	while (j <= size)
	{
		for (i = j; 0 < k-i; i++)
		{
			_putchar(' ');
		}
		for (i = k-i; i < k; i++ )
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
