#include <stdio.h>
#include "main.h"


int main(void)
{
	int i, fib;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		fib = fibonacci(1);
		if (fib % 2 == 0 )
		{
			sum += i;
		}
	}
	printf("%d \n", sum);
	return (0);
}
