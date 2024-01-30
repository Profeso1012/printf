#include "main.h"

/**
 * print_integer - Prints an integer to the standard output.
 * @ar: A va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list ar)
{
	int num = va_arg(ar, int);
	char buffer[12];
	int count = 0, i = 0, j;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	while (num > 0)
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}
	buffer[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}

