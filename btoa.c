#include "main.h"

/**
 * print_binary - convert unsigned int to binary and print
 * @arg: va_list argument containing the binary number
 * Return: number of printed characters
 */
int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;

	count += dectobin(num);
	return (count);
}

/**
 * dectobin - prints a decimal number in binary
 * @num: number to print
 * Return: Number of characters printed
 */
int dectobin(unsigned int num)
{
	unsigned int remainder, quotient;
	int count = 0;

	if (!(num))
		return (_putchar('0'));
	quotient = num / 2;
	remainder = num % 2;
	if (quotient)
		count += dectobin(quotient);
	count += _putchar((remainder) + '0');
	return (count);
}
