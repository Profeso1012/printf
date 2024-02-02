#include "main.h"

/**
 * dectohex - convert decimal to hexadecimal and print
 * @num: decimal number to be converted
 * @upper: flag to determine uppercase or lowercase
 * Return: number of printed characters
 */
int dectohex(unsigned int num, int upper)
{
	int count = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char buffer[100];

	if (num == 0)
		return (_putchar('0') + 1);
	while (num > 0)
	{
		buffer[count++] = hex_digits[num % 16];
		num /= 16;
	}
	print_buffer(buffer, count, upper);
	return (count);
}

/**
 * dectooct - convert decimal to octal and print
 * @num: decimal number to be converted
 * Return: number of printed characters
 */
int dectooct(unsigned int num)
{
	int count = 0;
	char octal_digits[] = "01234567";
	char buffer[100];

	if (num == 0)
		return (_putchar('0') + 1);

	while (num > 0)
	{
		buffer[count++] = octal_digits[num % 8];
		num /= 8;
	}
	print_buffer(buffer, count, 0);
	return (count);
}

/**
 * print_buffer - print a buffer in reverse order
 * @buffer: buffer to be printed
 * @size: size of the buffer
 * @upper: flag to determine uppercase or lowercase
 * Return: number of printed characters
 */
int print_buffer(char *buffer, int size, int upper)
{
	int count = 0;
	char hex_upper[] = "ABCDEF";

	for (size--; size >= 0; size--)
	{
		if (upper)
		{
			char digit = buffer[size];

			if (digit >= 'a' && digit <= 'f')
				digit = hex_upper[digit - 'a'];
			count += _putchar(digit);
		}
		else
			count += _putchar(buffer[size]);
	}
	return (count);
}
