#include <stdio.h>

int main(void)
{
	char *string = "abc123";
	FILE *myfile = fopen("101-crackme_password", "wb");
	fwrite(string, 6, 1, myfile);
	fclose(myfile);

	return 0;
}
