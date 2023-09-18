#include "main.h"

/**
 * get_width - Calculates the width
 * @format: Formatted string.
 * @i: pointer argument
 * @list: list of argumens.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	while (is_digit(format[*i]))
    {
	    width *= 10;
	    width += format[(*i)++] - '0';
    }
    if (format[*i] == '*')
    {
	    (*i)++;
	    width = va_arg(list, int);
    }
    return (width);
}
