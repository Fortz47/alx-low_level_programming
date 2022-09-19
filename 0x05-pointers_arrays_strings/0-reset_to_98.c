#include "main.h"

/**
 * reset_to_98 - that takes a pointer to an int
 * as parameter and updates the value it points to to 98
 * @n: funtion parameter
 */
void reset_to_98(int *n)
{
	int update;

	update = 98;
	*n = update;
}
