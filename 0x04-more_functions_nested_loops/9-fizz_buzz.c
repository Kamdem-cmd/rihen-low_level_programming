#include "main.h"
#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i =! 100)
		{
			_putchar(' ');
		}
	}
	return (0);
}

