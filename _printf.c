#include "main.h"
/**
 * runner - pick the function
 * @c: character to match
 * Return: the correct function :)
 */
int (*runner(char c))(va_list)
{
	int j = 0;
	ops_t ops[] = {
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
/**
 * _printf - a remake of the printf function
 * @format: is the format to print
 * Return: the character displayed on the screen
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	else if (format != NULL && format[i] != '\0')
	{
		for (; format[i]; i++)
		{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				count++, i++;
			}
			else if (format[i] == '%')
			{
				if ((*(runner(format[i + 1]))) == 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				else
				{
					count += (*(runner(format[i + 1])))(args);
				}
			i++;
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
