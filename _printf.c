#include "main.h"
/**
 * _printf - implements a costume printf
 * @format: a character string
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
		if (*format == 'c')
		{
			putchar(va_arg(args, int));
		}
		else if (*format == 's')
		{
			const char *string = va_arg(args, const char *);

			for (; *string; string++)
			{
				putchar(*string);
			}
		}
		else if (*format == '%')
		{
			putchar('%');
		}
		i++;
		}
		else
		{
			putchar(*format);
			i++;
		}
	}
	va_end(args);
	return (i);
}
