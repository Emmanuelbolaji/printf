
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	if (format == NULL)
		return (-1);
	
	va_start(args, format);
	
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					{
						int percent = va_arg(args, int);
						putchar(percent);
						break;
					}
				case 'c':
					{
						char c = va_arg(args, int);
						putchar(c);
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);
						while (*str)
						{
							putchar(*str);
							str++;
						}
						break;
					}
				default:
					{
						putchar(format[i]);
						break;
					}
			}
		}
		else
		{
			putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
