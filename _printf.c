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
			run_putr(va_arg(arg_list, int));
			i++;
		}
		else if (*format == 's')
		{
			const char *string = va_arg(arg_list, const char *);

			for (; *string; string++)
			{
				run_putr(*string);
				i++;
			}
		}
		else if (*format == '%')
		{
			run_putr('%');
			i++;
		}
		}
		else
		{
			run_putr(*format);
			i++;
		}
	}
	va_end(arg_list);
	return (i);
}
