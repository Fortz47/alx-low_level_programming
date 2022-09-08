#include <stdio.h>

int main(void)
{
	const char h[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(h, sizeof(h) - 1, 1, stdout);
	return (0);
}
