#include "main.h"

/**
 * _strlen_rec - returns the length of a string (helper)
 * @s: the string
 * Return: length
 */
int _strlen_rec(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_rec(s + 1));
}

/**
 * _check_pal - recursively checks for palindrome
 * @s: the string
 * @debut: start index
 * @fin: end index
 * Return: 1 if palindrome, 0 otherwise
 */
int _check_pal(char *s, int debut, int fin)
{
    if (debut >= fin)
        return (1);
    if (s[debut] != s[fin])
        return (0);
    return (_check_pal(s, debut + 1, fin - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_rec(s);
    return (_check_pal(s, 0, len - 1));
}
