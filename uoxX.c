#include "main.h"

/**
 * print_unsigned - print unsigned int
 * @arg: va_list argument containing the unsigned int
 * Return: number of printed characters
 */
int print_unsigned(va_list arg)
{
	return (numprint(va_arg(arg, unsigned int)));
}

/**
 * print_octal - print unsigned int in octal format
 * @arg: va_list argument containing the unsigned int
 * Return: number of printed characters
 */
int print_octal(va_list arg)
{
	return (dectooct(va_arg(arg, unsigned int)));
}

/**
 * print_hex - print unsigned int in hexadecimal format
 * @arg: va_list argument containing the unsigned int
 * Return: number of printed characters
 */
int print_hex(va_list arg)
{
	return (dectohex(va_arg(arg, unsigned int), 0));
}

/**
 * print_HEX - print unsigned int in uppercase hexadecimal format
 * @arg: va_list argument containing the unsigned int
 * Return: number of printed characters
 */
int print_HEX(va_list arg)
{
	return (dectohex(va_arg(arg, unsigned int), 1));
}
