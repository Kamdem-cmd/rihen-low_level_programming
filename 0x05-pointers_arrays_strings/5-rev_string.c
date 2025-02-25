#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	char *p;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	while (i != 0)
	{
		i--;
		p += i;
		*s = *p;
		s++;
	}
}
