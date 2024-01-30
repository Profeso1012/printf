#include "main.h"

/**
 * choice - function that will choose the function pointer
 * @car: the format specifier
 * @ar: va_list variable
 * Return: Result of the choice
 */
int choice(va_list ar, char car)
{
choose great[] = {{'c', myputchar}, {'s', _puts}, {'%', percent}};
int iter = 0;
int count = 0;
int (*func)(va_list a);

for (iter = 0; iter < 3; iter++)
{
if (car == great[iter].c)
{
func = great[iter].f;
count += func(ar);
return (count);
}
}
return (-7);
}

/**
 * _puts - a function that prints a string
 * @ar: va_list variable to be printed
 * Return: number of characters in the strings
 */
int _puts(va_list ar)
{
	int i, count = 0;
	char *str = va_arg(ar, char *);

	if (!(str))
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

/**
 * myputchar - a function to print chars
 * @arg: va_list variable argument
 * Return: number of chars(1)
 */
int myputchar(va_list arg)
{
	char c = (va_arg(arg, int));

	return (_putchar(c));
}

/**
 * percent - a function to print %
 * @arg: va_list variable argument
 * Return: number of chars(1)
 */
int percent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}
