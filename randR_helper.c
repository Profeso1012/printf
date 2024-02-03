#include "main.h"

/**
 * print_rev - Prints a reversed string.
 * @str: The string to be reversed.
 * Return: The number of characters printed.
 *
 * Description: This function prints a reversed string and returns the number
 * of characters printed.
 */
int print_rev(char *str)
{
	int count = 0;
	int length = 0;

	while (str[length] != '\0')
		length++;

	for (length--; length >= 0; length--)
	{
		_putchar(str[length]);
		count++;
	}

	return (count);
}


/**
 * rot13 - Encode a string using ROT13.
 * @str: A pointer to the string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
                *ptr += 13;
            else
                *ptr -= 13;
        }
        ptr++;
    }

    return (str);
}

