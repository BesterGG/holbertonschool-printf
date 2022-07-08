#include "main.h"
/**
 * p_int - print various cases of numbers and call aux fun
 * @args: Arguments
 * Return: count
 */
int p_int(va_list args)
{
	long int n = va_arg(args, int), i = 0;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count += 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	for (i = 10; i <= n; i *= 10)
	;
	i /= 10;
	for (; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
		count++;
	}
	return (count);
}
