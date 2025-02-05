#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char digit_1;
	char digit_2;
	char digit_3;
	int i, j, k;

	digit_1 = '0';
	for (i = 0; i <= 9; i++)
	{
		digit_2 = '0';
		for (j = 0; j <= 9; j++)
		{
			digit_3 = '0';
			for (k = 0; k <= 9; k++)
			{			
				if (digit_1 < digit_2 && digit_2 < digit_3)
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar(digit_3);
					if (digit_1 == '7' && digit_2 == '8' && digit_3 == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
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

