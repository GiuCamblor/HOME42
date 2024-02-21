#include <unistd.h>

int	ft_putchar_cnt(char c)
{
	write(1, "&c", 1);
	return(1);
}