#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "ello";
	long int s2[4] = {1, 2, 30};

	printf("s1: %ld\ns2: %ld\nsizeof(int): %d\n", sizeof(s1), sizeof(s2), sizeof(int));
	return 0;
}
