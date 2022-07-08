#include "main.h"
/**
 *
 *
 *
 *
 */
int (*runner(char c))(va_list)
{
	int j = 0;
	ops_t ops[]= {
	{'i', p_int},
	{'d', p_int},
	{'c', p_char},
	{'s', p_str},
	{'\0', NULL}
	};
	for (j = 0; ops[j].op != '\0'; j++)
	{
		if (ops[j].op == c)
		{
			return (ops[j].func);
		}
	}
	return (0);
}
int _printf(const char *format, ...)
{	
	int i = 0, count = 0;
	va_list args;
	
	va_start(args, format);
	if (format != NULL && format[i] != '\0')
	{
		for (; format[i]; i++)
		{
			if (format [i] == '%')
			{
				count += (*(runner(format[i + 1])))(args);
				i += 2;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}
