#include "main.h"
/**
 *
 *
 */
int p_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c + '0');
	return (1);
}