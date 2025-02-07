#include "main.h"

 void print_alphabet(void)
{
	char ch = 'a';

	while (ch != 'z' + 1)
	{
		_putchar(ch);
		ch += 1;
	}
	_putchar('\n');
}
