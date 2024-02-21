/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor- <gcamblor-@student.42urdul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:17:22 by gcamblor-         #+#    #+#             */
/*   Updated: 2024/02/21 21:17:52 by gcamblor-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr_base(int n, base)
{
	long	nbr;
	size_t	i;
	int		count;

	i = 0;
	while (base[i] != '\0')
		i++;
	nbr = n;
	if (nbr > i)
		count = count + ft_putnbr_base(nbr / base);
	count = count + ft_putchar_cnt(base[nbr % base]);
	return(count);
}
