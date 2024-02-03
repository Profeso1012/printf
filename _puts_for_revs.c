#include "main.h"

/**
 * _rputs - Print a string.
 * @str: string to be printed.
 * Return: The number of characters printed.
 */
int _rputs(char *str)
{
    int count = 0;

    if (!str)
        str = "(null)";

    while (*str)
    {
        _putchar(*str);
        count++;
        str++;
    }

    return (count);
}
