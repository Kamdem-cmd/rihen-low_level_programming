#include "main.h"

void _print_rev_recursion(char *s)
{
    unsigned int i = 0;

    while (*s != '\0')
    {
        s++;
        i++;
    }
    while (i != 0)
    {
        s--;
        _putchar(*s);
        i--;
    }  
}