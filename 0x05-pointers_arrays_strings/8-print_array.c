#include "main.h"

void print_array(int *a, int n)
{
	while (n > 0)
	{
		if (*(a + 1) != '\0')
		{
			_putchar(*a);
			_putchar(',');
			_putchar(' ');
		}else
		{
			_putchar(*a);

		}
		n--;
	}
	_putchar('\n');
}
