#include "main.h"

/**
 * print_number - Print a decimal number.
 * @arg: The va_list argument containing the number.
 * Return: Number of characters printed.
 */
int print_number(va_list arg)
{
	int num = va_arg(arg, int), count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}


	count += numprint(num);

	return (count);
}

/**
 * numprint - Print an integer using recursion.
 * @num: The integer to be printed.
 * Return: Number of digits printed.
 */
int numprint(int num)
{
	unsigned int k = num;
	int count = 0;

	k /= 10;
	if (k)
		count += numprint(k);
	count += _putchar(((unsigned int)num % 10) + '0');

	return (count);
}
