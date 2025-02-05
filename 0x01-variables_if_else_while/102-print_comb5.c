#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char digit_1;
	char digit_2;
	char digit_3;
	char digit_4;
	int i, j, k, l;

	digit_1 = '0';
	for (i = 0; i <= 9; i++)
	{
		digit_2 = '0';
		for (j = 0; j <= 9; j++)
		{
			digit_3 = '0';
			for (k = 0; k <= 9; k++)
			{
				digit_4 = '0';
				for (l = 0; l <= 9; l++)
				{
					if (digit_1 <= digit_3 && digit_2 < digit_4)
					{
						putchar(digit_1);
						putchar(digit_2);
						putchar(' ');
						putchar(digit_3);
						putchar(digit_4);
						if (digit_1 == '9' && digit_2 == '8' && digit_3 == '9' && digit_4 == '9')
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
					digit_4 += 1;
				}
				digit_3 += 1;
			}
			digit_2 += 1;
		}
		digit_1 += 1;
	}
	putchar('\n');
	return (0);
}

