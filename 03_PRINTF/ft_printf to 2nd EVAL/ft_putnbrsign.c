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

int	ft_putnbrsign(int j, int nbr)
{
	if (nbr < 0)
		return (ft_putchar_cnt('-') + ft_putnbrbase(j, -nbr, DEC));
	else
		return (ft_putnbrbase(j, nbr, DEC));
}
