int get_endianness(void)
{
	char *byte_pointer;

	unsigned int value = 1;

	byte_pointer = (char *)&value;

	return ((byte_pointer[1] == 1) ? 1 : 0);
}
