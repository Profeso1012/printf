#include "main.h"

/**
 * choice - function that will choose the function pointer
 * @car: the format specifier
 * @ar: va_list variable
 * Return: Result of the choice
 */
int choice(va_list ar, char car)
{
	choose great[] = {
		{'c', myputchar},
		{'s', _puts},
		{'%', percent},
		{'d', print_number},
		{'i', print_number},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'p', print_ptr},
		{'r', print_rev_string},
		{'R', print_rot13}
		/*{'S', print_ascii}*/
	};
	int iter = 0;
	int count = 0;
	int (*func)(va_list a);

	for (iter = 0; iter < 13; iter++)
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
