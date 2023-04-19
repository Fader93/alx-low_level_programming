#include "function_pointers.h"
#include <stdio.h>
/*8
 * print_name - print name using pointer to function
 * @nmae: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
