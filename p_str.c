#include "main.h"
#include <stdlib.h>

int p_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
	{
		return (NULL);
	}
	else
	{
		while(str)
		{
			_putchar(*str);
			count++;
			str++;
		}
	}
return (count);
}
