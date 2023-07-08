/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *byte_pointer;

	unsigned int value = 1;

	byte_pointer = (char *)&value;

	return ((byte_pointer[1] == 1) ? 1 : 0);
}
