#include "main.h"

void print_number(int nombre)
{
	int multiple10 = 10000;
	int count = 0;
	int i, n;
	char c;
	
	while (n != 0)
	{
		while (n >= mutiple10 && n < (multiple10 * 10))
		{
			n -= multiple10;
			count++;
		}
		putInt(count);
		multiple10 /= 10;
	}

	if (nombre == 0)
	{
		count = 0;
		putInt(count);
	}
	
		
}

void putInt(int i)
{
	char c;

	c = (char)(i + 48);
	_putchar(c);

}
