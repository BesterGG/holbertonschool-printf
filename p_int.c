#include "main.h"
/**
 * p_int_aux - Calcule lenght of number and print numbers
 * @n: number
 * Return: count
*/
int p_int_aux(int n)
{
	long int i = 0, count = 0;

	for (i = 10; i <= n; i *= 10)
	{
	}
	i /= 10;
	for (; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
		count++;
	}
	return (count);
}
/**
 * p_int - print various cases of numbers and call aux fun
 * @args: Arguments
 * Return: count
 */
int p_int(va_list args)
{
	long int n = va_arg(args, int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count += 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		count += p_int_aux(n) + 1;
	}
	else
	{
		count += p_int_aux(n);
	}
	return (count);
}
