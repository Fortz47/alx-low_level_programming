#include "main.h"

/**
 * _isalpha - entry point
 * @c: function parameter
 * Return: 0 (false) 1 (true)
 */

int _isalpha(int c);
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'));
}
