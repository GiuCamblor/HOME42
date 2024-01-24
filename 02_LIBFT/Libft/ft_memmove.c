/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:59:47 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/24 17:59:50 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	if (dst == src)
		return (dst);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		if (d > s)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		else
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
