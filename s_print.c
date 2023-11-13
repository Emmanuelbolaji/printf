#include "main.h"

/**
  * s_print - function prints a string
  * @arg_list: arguments
  * Return: the length of string
  */

int s_print(va_list arg_list)
{
	int i;
	int length;
	char *str;

	str = va_arg(arg_list, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			run_putr(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			run_putr(str[i]);
		return (length);
	}
}

