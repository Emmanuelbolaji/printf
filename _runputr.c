#include <unistd.h>

/**
 * run_putr - prints to the standard output
 * @c: character to be printed
 * return: 1 on success -1 on failurr
 */

int run_putr(char c)
{
	return (write(1, &c, 1));
}
