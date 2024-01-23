#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "abcdefghij";
	unsigned int start;
	size_t len;

	start = 0;
	len = 4;
	printf("%d",substr(str, start, len));
	return(0);
}