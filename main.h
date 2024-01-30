#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

#define BUFSIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct choose - a struct to hold function pointers and character choice
 * @f: the function pointer
 * @c: character to choose with
 */
typedef struct choose
{
	char c;
	int (*f)(va_list);
} choose;

int choice(va_list ar, char car);
int _puts(va_list ar);
int myputchar(va_list arg);
int percent(va_list arg);
int print_number(va_list arg);
int numprint(int num);

#endif /* MAIN_H */
