#include <stdlib.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	char ch = '0';
	
	while (ch != '9' + 1)
	{
		putchar(ch);
		if (ch == '9')
		{
			break;
		}
		ch += 1;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
