#include "main.h"

/**
  * _strlen - looks for length of a string
  * @s: string
  * Return: integer
  */

int _strlen(char *s)
{
	int b;
	for (b = 0; s[b] !=0; b++);

	return (b);
}

/**
  * _strlenconst - finds length of a string, for constant characters
  * @s: string
  * Return: integer
  */

int _strlenconst(const char *s)
{
	int b;
	for (b = 0; s[b] != 0; b++);
	
	return (b);
}
