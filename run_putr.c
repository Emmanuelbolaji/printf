#include <unistd.h>

/**
  * run_putr - prints to the standard output
  * @c: character to be printed
  * Return: 1 on success -1 on failure
  */

int run_putr(char c)
{
	return (write(1, &c, 1));
}
