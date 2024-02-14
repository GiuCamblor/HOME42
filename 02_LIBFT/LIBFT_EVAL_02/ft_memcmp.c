/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:15:07 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/24 18:15:12 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*membl1;
	unsigned char	*membl2;
	size_t			i;

	i = 0;
	membl1 = (unsigned char *) s1;
	membl2 = (unsigned char *) s2;
	while (i < n)
	{
		if (membl1[i] != membl2[i])
			return (membl1[i] - membl2[i]);
		i++;
	}
	return (0);
}
