#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: function  pointer argument that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
