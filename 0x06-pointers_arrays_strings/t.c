#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "ello";
	char *s2 = "orld!";

	int res = strcmp(s1, s2);
	printf("%d\n%d\n", ('c' - 'C'), res);
	return 0;
}
