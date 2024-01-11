/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:03:35 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/11 16:03:38 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;
	size_t i;
	
	i = 0;
	str = (unsigned char *) b;
	while(i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}