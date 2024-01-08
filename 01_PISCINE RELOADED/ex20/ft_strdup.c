
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int	ft_strlen(const char *str)
{
    int len;

	while (str[len] != '\0')
		len++;
    return(len);
}

char *ft_strdup(const char *src, int len)
{
    char *copy;
    copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy != NULL) {
        for (int i = 0; i <= len; i++) {
            copy[i] = src[i];
        }
    }
    return copy;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(const char *str)
{
	char i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	const char *str;
    char *copy;
    int len;

    str = "CARDENA";
    len = ft_strlen(str);
    copy = ft_strdup(str, len);
    ft_putstr(str);
    ft_putstr(copy);

	str = "CADENA";
    printf("\n");
	return(0);
}