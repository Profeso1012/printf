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
	 return (0);
}
