#include "main.h"

/**
 * print_rev_string - print reversed string
 * @arg: va_list argument containing the string
 * Return: number of characters printed
 */
int print_rev_string(va_list arg)
{
    char *str = va_arg(arg, char *);
    int count = 0;

    if (!str)
        str = "(null)";

    count += print_rev(str);

    return (count);
}

/**
 * print_rot13 - print rot13'ed string
 * @arg: va_list argument containing the string
 * Return: number of characters printed
 */
int print_rot13(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;
	char rot;

	while (*str != '\0')
	{
		rot = *str;
		if ((rot >= 'A' && rot <= 'Z') || (rot >= 'a' && rot <= 'z'))
		{
			if (rot >= 'A' && rot <= 'M')
				rot += 13;
			else if (rot >= 'N' && rot <= 'Z')
				rot -= 13;
			else if (rot >= 'a' && rot <= 'm')
				rot += 13;
			else if (rot >= 'n' && rot <= 'z')
				rot -= 13;
		}
		count += _putchar(rot);
		str++;
	}
	return (count);
}
