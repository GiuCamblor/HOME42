#include <stdio.h>

char *reverseString(char *str) {
    int i;
    int f;
	char temp;

	i = 0;
	while (str[i])
	{
		i++;
	}
	f = 0;
	char rts[i];
    while (i > 0) {
		temp = str[i];
		rts[f] = str[i];
        i--;
        f++;
    }
	return(rts);
}

int main() {
    char cadena[] = "123456";
	char *cadena2;
    
    printf("Caena original: %s\n", cadena);
	cadena2 = reverseString(cadena);
    printf("Cadena revertida: %s\n", cadena2);

    return 0;
}