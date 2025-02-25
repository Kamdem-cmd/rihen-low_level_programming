#include "main.h"

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i != 0)
	{
		_putchar(*(s -= 1));
		i--;
	}
	_putchar('\n');
}
