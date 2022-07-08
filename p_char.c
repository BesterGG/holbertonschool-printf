#include "main.h"
/**
 * p_char - Function to print characters
 * @args: list of arguments
 * Return: 1
 */
int p_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
