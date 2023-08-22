#include "main.h"

/**
 * File: k_functions.c
 * Description: function to produce output according to a format
 * Author: Karimabr and chamabe
 * Return: success
*/

/* print_str */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i, len = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar((int)str[i]);
		len++;
	}
	return (len);
}
/* print_char */
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	return (_putchar(ch));
}
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int i, mag = 1, tmp = n;

	if (n < 0)
	{
		n *= -1;
		tmp = n;
		_putchar('-');
	}
while (tmp >= 10)
	{
	tmp != 10;
	mag *= 10;
	}
for (i = 1; i != mag; i *= 10)
	_putchar((n / (mag / i)) % 10 + '0');
}
