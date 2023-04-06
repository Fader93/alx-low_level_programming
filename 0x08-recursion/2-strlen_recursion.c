#include "main.h"

/**
 * _strlen_recursion - function to getb length of string
 * @s: string parameters
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	s = "lpa\0";

	if (*s == '\0')
	    return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
