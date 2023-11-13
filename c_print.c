#include "main.h"

/**
  *c_print - function that prints character
  *@arg_list: arguments
  *Return: returns integer
  */

int c_print(va_list arg_list)
{
	char c;

	c = va_arg(arg_list, int);
	run_putr(c);
	return (1);
}
