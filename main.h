#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int c_print(va_list arg_list);
int s_print(va_list arg_list);
int print_37(void);

int run_putr(char c);
int _strlen(char *s);
int _strlenconst(const char *s);
#endif
