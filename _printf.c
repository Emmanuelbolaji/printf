#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    va_start(args, format);
 

    while (*format) {
        if (*format == '%') {
            format++; 
            switch (*format) {
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    {
                        const char *str = va_arg(args, const char *);
                        while (*str) {
                            putchar(*str);
                            count++;
                            str++;
                        }
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                   
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}
