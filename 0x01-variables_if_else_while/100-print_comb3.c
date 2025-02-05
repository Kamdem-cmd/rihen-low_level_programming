#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char digit_1 = '0';
	char digit_2 = '0';
	int i, j;

	digit_1 = '0';
	for (i = 0; i <= 9; i++)
	{
		digit_2 = '0';
		for (j = 0; j <= 9; j++)
		{
			if (digit_1 < digit_2)
			{
				putchar(digit_1);
				putchar(digit_2);
				if (digit_1 == '8' && digit_2 == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			digit_2 += 1;
		}
		digit_1 += 1;
	}
	putchar('\n');
	return (0);
}
