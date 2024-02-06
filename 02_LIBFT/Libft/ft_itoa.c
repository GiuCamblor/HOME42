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

size_t	af_divcalc(int n);
size_t	af_memcalc(int n);

size_t	af_divcalc(int n)
{
	size_t div;

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
	return(div);
}

size_t	af_memcalc(int n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return 1;
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
	return(i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		div;

	div = af_divcalc(n);
	i = af_memcalc(n);
printf("DÍGITOS: %i\n", i);
printf("DIVISOR: %i\n", div);
	str = malloc((i + 1) * sizeof(char));
	if(!str)
		return NULL;
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
		i++;
	}
	while (div >= 1)
	{
		str[i] = n / div + '0';
		n = n % div;
		div = div / 10;
		i++;
	}
	i++;
	str[i] = '\0';
	return(str);
}
int main()
{
    int num = -123456;
    char *result = ft_itoa(num);
    printf("\nResultado: %s\n", result);
    free(result);
    return 0;
}
/*
*/