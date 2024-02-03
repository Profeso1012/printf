#include "main.h"

/**
 * print_ptr - print pointer address in hexadecimal
 * @arg: va_list argument containing the pointer
 * Return: number of printed characters
 */
int print_ptr(va_list arg)
{
	int count = 0;
	void *ptr = va_arg(arg, void *);

	count += _putchar('0');
	count += _putchar('x');
	count += print_HEX_P((unsigned long int)ptr);
	return (count);
}

/**
 * print_HEX_P - Prints an unsigned long integer in uppercase hexadec
 * @num: The unsigned long integer to be printed.
 * Return: The number of characters printed.
 */
int print_HEX_P(unsigned long int num)
{
	int count = 0;
	char *ptr;
	char *buffer;

	buffer = malloc(sizeof(unsigned long int) * 2 + 1);
	if (buffer == NULL)
	{
		return (-1);
	}
	ptr = buffer + sizeof(unsigned long int) * 2;
	*ptr = '\0';
	do {
		unsigned long int digit = num % 16;
		*--ptr = (digit < 10) ? '0' + digit : 'a' + digit - 10;
		num /= 16;
	} while (num > 0);
	count += write(1, ptr, _strlen(ptr));
	free(buffer);
	return (count);
}

/**
 * _strlen - calcs length of str
 * @str: str passed
 *
 * Return: length of str
 */

int _strlen(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
