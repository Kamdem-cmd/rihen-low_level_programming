int _strlen_recursion(char *s)
{
    while (*s != '\0')
    {
        s++;
        return(_strlen_recursion(s) + 1);
    }
    return 0;
}