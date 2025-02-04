#include <stdlib.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	char ch = '0';
	
	while (ch != '9' + 1)
	{
		printf("%c", ch);
		ch += 1;
	}
	printf("\n");
	return (0);
}

