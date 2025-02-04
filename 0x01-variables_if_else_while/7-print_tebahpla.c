#include <stdlib.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	char ch = 'z';
	
	while (ch != 'a' - 1)
	{
		putchar(ch);
		ch -= 1;
	}
	putchar('\n');
	return (0);
}

