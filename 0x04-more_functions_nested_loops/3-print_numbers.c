#include "main.h"

void print_numbers(void)
{
	char c = '0';

	while (c < '9' + 1)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
