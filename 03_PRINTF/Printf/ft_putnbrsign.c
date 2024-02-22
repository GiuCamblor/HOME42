/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrsign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor- <gcamblor-@student.42urdul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:28:18 by gcamblor-         #+#    #+#             */
/*   Updated: 2024/02/22 18:28:35 by gcamblor-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrsign(long nbr)
{
	if (nbr < 0)
	{
		ft_putchar_cnt('-');
		nbr = -nbr;
	}
	ft_putnbrbase((unsigned long) nbr, DEC);
	return(0);
}