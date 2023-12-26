
#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
    printf ("Valor 2: %i\n", *nbr);
}

int main(void)
{
    int num;
    num = 0;
    printf ("Valor 1: %i\n", num);
    ft_ft(&num);
    printf ("Valor 2: %i\n", num);
    return (0);
}
