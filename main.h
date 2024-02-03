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
int print_binary(va_list arg);
int dectobin(unsigned int num);
int print_unsigned(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int dectohex(unsigned int num, int upper);
int dectooct(unsigned int num);
int print_buffer(char *buffer, int size, int upper);
int print_ascii(va_list arg);
int print_HEX_S(va_list arg);
int print_ptr(va_list arg);
int print_HEX_P(unsigned long int num);
int _strlen(const char *str);
int print_rev_string(va_list arg);
int print_rot13(va_list arg);
int print_rev(char *str);
char *rot13(char *str);
int _rputs(char *str);

#endif /* MAIN_H */
