#include<stdlib.h>

int _putchar(char c);

int main(void)
{
	char msg[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i = 0;

	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
