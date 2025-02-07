#include "main.h"

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch != 'z' + 1)
		{
			_putchar(ch);
			ch += 1;
		}
		_putchar('\n');
		i++;
	}
}
