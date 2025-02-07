#include <stdio.h>
#include "main.h"

int print_last_digit(int n)
{
	int last_digit = n;

	if (n > 0)
	{
		while (last_digit > 9)
		{
			last_digit -= 10;
		}
		printf("%d", last_digit);
	}
	if (n < 0)
	{
		last_digit = -n;
		while (last_digit >  9)
		{
			last_digit -= 10;
		}
		printf("%d", last_digit);
	}
	if (n == 0)
	{
		printf("%d", last_digit);
	}
	return (last_digit);

}
