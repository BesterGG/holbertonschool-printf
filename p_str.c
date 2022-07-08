#include "main.h"
int p_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	while (str[i] != '\0' && str != NULL)
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
