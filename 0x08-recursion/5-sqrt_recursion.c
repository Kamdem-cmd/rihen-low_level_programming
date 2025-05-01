#include "main.h"

/**
 * _sqrt_helper - Recursively checks for the natural sqrt
 * @n: Number to find sqrt of
 * @guess: Current guess
 * Return: sqrt if found, else -1
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess > n)
        return (-1);
    if (guess * guess == n)
        return (guess);
    return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural sqrt of n
 * @n: The number
 * Return: sqrt or -1 if not natural
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0));
}