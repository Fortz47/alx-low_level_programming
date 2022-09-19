#include <stdio.h>

int main(void)
{
	int n = 60;
	int *p = &n;

	printf("p is %d and %p\n", *p, p);
	return (0);
}
