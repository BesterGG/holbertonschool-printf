#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

typedef struct ops
{
	char op;
	int (*func)(va_list args);
} ops_t;
int _putchar(char);
int (*runner(char c))(va_list);
int _printf(const char *format, ...);
int p_char(va_list args);
int p_int(va_list args);
int p_str(va_list args);
#endif
