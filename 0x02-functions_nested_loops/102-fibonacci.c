#include <stdio.h>

long int fibonacci(int n)
{
	if (n == 1)
	{ 
		return (1);
	}
	if (n == 2)
	{ 
		return (2);
	}
	if (n > 2)
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
	return (0);
}
int main(void)
{
	int i = 1;
	long int fib;

	while (i <= 10)
	{
		fib = fibonacci(i);
		if (i == 10)
		{
			printf("%ld", fib);
		}
		else
		{
			printf("%ld, ", fib);
		}
		i++;
	}
	printf("\n");
	return (0);
}

