/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:04:26 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/24 18:04:29 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	int		div;
	char	res;
	int		mod;

	div = 1;      //CALCULA EL DIVISOR
	while ((n / 10) > 0)
	{
		n = n / 10;
		div = div * 10;
	}
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n > -2147483648)
	{
		write(fd, "-", 1);
		n = -1 * n;
	}
	while(div > 0)
	{
		res = (n / div) + 48;
		write(fd, &res, 1);
		mod = n % div;
		n = mod;
		div = div / 10;
	}
}
	