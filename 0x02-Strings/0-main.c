#include "strings.h"


int main(void)
{
	char str[] = "Hello";
	int i;
	printf("%s\n", str);

	for (i = 0; i < 6; i++)
		printf("%c\n", str[i]);
	return (0);
}
