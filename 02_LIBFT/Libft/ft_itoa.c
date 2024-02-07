/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:40:05 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/02 17:40:12 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

//size_t	af_divcalc(int n);
//size_t	af_memcalc(int n);

size_t	af_divcalc(long n)
{
	size_t	div;

	div = 10;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n / 10 >= 10)
	{
		n = n / 10;
		div = div * 10;
	}
	return (div);
}

size_t	af_memcalc(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*af_str_fill(char *str, long nbr)
{
	int div;
	int i;

	i = 0;
	div = af_divcalc(nbr);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
		i++;
	}
	if (nbr <= 9)
		str[i++] = nbr + '0';
	else
	{
		while (div >= 1)
		{
			str[i] = nbr / div + '0';
			nbr = nbr % div;
			div = div / 10;
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		arrlen;
	long	nbr;

	nbr = n;
	arrlen = af_memcalc(nbr);
	str = malloc((arrlen + 1) * sizeof(char));
	if(!str)
		return NULL;
	str = af_str_fill(str, nbr);
	return(str);
}
/*
int main()
{
    int num = -9;
    char *result = ft_itoa(num);
    printf("\nResultado: %s\n", result);
    free(result);
    return 0;
}
*/