# include "main.h"

void more_numbers(void)
{
	char c = '0';
	char a = '0' - 1;
	bool check = False;

	print_numbers();
	while (c != '5')
	{
		a++;
		_putchar(a);
		if (check == True)
		{
			a = '0';
			_putchar(c);
			c++;
		}
		if (a == '9')
		{
			check == True;
			c = '0';
			a = '0';
		}
	}
	_putchar('\n');

}
