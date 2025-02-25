#include "main.h"

void puts_half(char *str)
{
	int n;

	n = _strlen(str);
	n = (n - 1) / 2;
	str = (str + n);
	while (*str != '\0')
	{
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}
