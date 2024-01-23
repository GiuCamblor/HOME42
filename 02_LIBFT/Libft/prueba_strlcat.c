#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
size_t k;
char *dst = ft_strdup("pqrstuvwxyz");
char *dst2 = ft_strdup("pqrstuvwxyz");

char *src = ft_strdup("abcd");
/*
char *str1;
char *str2; 
str1 = "ABC";
str2 = "FGH";
*/
k = 10;
printf("%d tamaño frase dst\n",(int)ft_strlen(dst));
printf("%d tamaño frase src\n",(int)ft_strlen(src));
printf("%d tamaño final suma\n",(int)(ft_strlen(dst)+ft_strlen(src)));


printf("El mio -> %zu\n", ft_strlcat(dst, src, k));
printf("la frase: %s\n", dst);

printf("El otro-> %zu\n",strlcat(dst2, src, k));
printf("la frase: %s\n", dst2);
return(0);
}