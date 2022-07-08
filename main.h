#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct ops - struct used for get a function
 * @op: is a character to find
 * @func: is a function to return
 *
 * Description: ops is a array of struct
 */
typedef struct ops
{
	char op;
	int (*func)(va_list args);
} ops_t;
int _putchar(char);
int _printf(const char *format, ...);
int p_char(va_list args);
int p_int(va_list args);
int p_str(va_list args);
#endif
