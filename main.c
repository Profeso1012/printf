#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int len, len2, len3, len4;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
       	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Len:[%b]\n", len);
	printf("Len:[%d]\n", len);
	len3 = _printf("Length:[%d, %i]\n", len, len2);
       	len4 = printf("Length:[%d, %i]\n", len, len2);
	printf("Len:[%d]\n", len3);
	printf("Len:[%d]\n", len4);
	len2 = _printf("Len:[%b]\n", len);
	printf("Len:[%d]\n", len2);
       	len = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	printf("Length:[%d, %d]\n", len, len2);
	len = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	printf("Length:[%d, %d]\n", len, len2);
	len = _printf("Unsigned hexadecimal:[%x]\n", ui);
	len2 = _printf("Unsigned hexadecimal:[%X]\n", ui);
	len3 = printf("Unsigned hexadecimal:[%x]\n", ui);
	len4 = printf("Unsigned hexadecimal:[%X]\n", ui);
	printf("Length:[%d, %d, %d, %d]\n", len, len2, len3, len4);
	_printf("%S\n", "Best\nSchool");

	return (0);
}
