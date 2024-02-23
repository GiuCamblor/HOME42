/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor- <gcamblor-@student.42urdul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:17:22 by gcamblor-         #+#    #+#             */
/*   Updated: 2024/02/21 21:17:52 by gcamblor-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"

int	ft_putnbrbase(unsigned long nbr, char *base)
{
	size_t			i;
	int				count;

	i = 0;
	while (base[i] != '\0')
		i++;
	count = 0;
	if (nbr >= i)
		count += ft_putnbrbase(nbr / i, base);
	count += ft_putchar_cnt(base[nbr % i]);
	return (count);
}
