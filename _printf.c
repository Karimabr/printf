#include "main.h"
#include <stdarg.h>

/**
 * main - Entry point
 * Deescription: a function that produces output according to a format
 * _printf - produces output according to a format.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte used).
 */

int _printf(const char *format, ...)

{
	int i, len = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 's':
				len += print_str(args);
				i += 2;
				break;
				case 'c':
				len += print_int(args);
				i = i + 2;
				break;
				case 'i':
				len += print_int(args);
				i = i + 2;
				break;
				case'd':
				len += print_int(args);
				i = i + 2;
				break;
				case'%':
				i += 1;
				break;
			default:
				i += 1;
			}
		}
		len += _putchar(format[i]);
	}
	va_end(args);
	return (len);
}
