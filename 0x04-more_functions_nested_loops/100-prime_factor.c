#include "main.h"
#include <stdio.h>
#include <stdlib.h>

bool IsPrime (long int a);

int main (void)
{
	long int x =  612852475143;
	long int i;

	for (i = 3; i <= x / 3; i++)
	{
		if (x % i == 0 && IsPrime(i))
		{
			printf("%ld ", i);
		}
	}
	putchar('\n');
	
	return (0);
}

bool IsPrime (long int a)
{
	int count = 0;
	int i;

	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			count++;
		}
	}	

	if (count == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
