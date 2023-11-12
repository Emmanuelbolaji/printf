#include "main.h"

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
			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
                    i++;
                    break;
                case 's':
                    {
                        const char *string = va_arg(args, const char *);
                        for (;*string; string++) {
                            putchar(*string);
                            i++;
                        }
                    }
                    break;
                case '%':
                   putchar('%');
                    i++;
                    break;
                default:
                  
                    break;
            }
        } else {
            putchar(*format);
            i++;
      }
    }
	va_end(args);
	return i;
}
