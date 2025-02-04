#include <stdio.h>
#include <stdlib>

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch != 'z' + 1)
	{
		putchat(ch);
		ch += 1;
	}
	while (CH != 'Z' + 1)
	{
		putchar(CH);
		CH += 1;
	}
	putchar('\n');
	return (0);
}
