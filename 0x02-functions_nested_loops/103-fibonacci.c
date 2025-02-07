#include <stdio.h>

long long int fibonacci(int n)
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
	int i;
	long long int fib;
	long long int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		fib = fibonacci(1);
		if (fib % 2 == 0 )
		{
			sum += i;
		}
	}
	printf("%lld \n", sum);
	return (0);
}
