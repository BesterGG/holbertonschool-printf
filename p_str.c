#include "main.h"
#include <stdlib.h>

int p_str(va_list args)
{
    char *str = va_arg(args, char *);
    int i;

    if (str == NULL)
    {
        _putchar('(');
        _putchar('n');
        _putchar('u');
        _putchar('l');
        _putchar('l');
        _putchar(')');
        return (6);
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    return (i);
}
