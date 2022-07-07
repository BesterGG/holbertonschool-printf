#include "main.h"
/**
 *
 *
 *
 */
int p_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0, i;
	if( n == 0)
	{
		_putchar('0');
		count += 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		count += (p_int(n) + 1);
	}
	else
	{
		for (i = 10; i <= n; i *= 10)
		{
		}
		i /= 10;
		for (; i > 0; i /= 10)
		{
			_putchar(((n / i) % 10) + '0');
			count++;
		}
	}
	return (count);
}
