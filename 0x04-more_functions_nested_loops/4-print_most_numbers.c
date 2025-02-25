# include "main.h"

void print_most_numbers(void)
{
	char c = '0';

	while (c < '9' + 1)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;

	}
	_putchar('\n');
}
