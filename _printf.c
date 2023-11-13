#include "main.h"
/**
 * _printf - implements a costume printf
 * @format: a character string
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0;

	va_start(arg_list, format);
	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
		if (*format == '\0')
			break;
		if (*format == 'c')
		{
			putchar(va_arg(arg_list, int));
			i++;
		}
		else if (*format == 's')
		{
			const char *string = va_arg(arg_list, const char *);

			for (; *string; string++)
			{
				putchar(*string);
				i++;
			}
		}
		else if (*format == '%')
		{
			putchar('%');
			i++;
		}
		}
		else
		{
			putchar(*format);
			i++;
		}
	}
	va_end(arg_list);
	return (i);
}
