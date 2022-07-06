#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct ops
{
	char op;
	void (*func)(va_list args);
} ops_t;
int _putchar(char);
#endif
