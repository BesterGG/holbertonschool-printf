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
	for (j = 0; ops[j]; j++)
	{
		if (ops[j].op == c)
		{
			return (op[j].func);
		}
	}
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
				if (format [i + 1] == '%')
				{
					_putchar('%');
				}
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
}
