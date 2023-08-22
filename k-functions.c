#include "main.h"

/**
<<<<<<< HEAD
 * print_str  - function to produce output according to a format.
 * @args: The format string.
=======
 * print_str  - produces output according to  format
 * @args: The format string
>>>>>>> 2dd45f57874e8092dd0f9ec40d100cba41e606da
 *
 * Return: The numbr of characters printed.
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i, len = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}

/**
 * print_char  - produces output according to a format.
 * @args: The format string.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	return (_putchar(ch));
}

/**
 * print_int  - produces output according to a format.
 * @args: The format string.
 *
 * Return: The number of characters printed.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int i, mag = 1, tmp = n, len = 0;

	if (n < 0)
	{
		n *= -1;
		tmp = n;
		len += _putchar('-');
	}

	while (tmp >= 10)
	{
		tmp /= 10;
		mag *= 10;
	}

	for (i = 1; i <= mag; i *= 10)
		len += _putchar((n / (mag / i)) % 10 + '0');

	return (len);
}
