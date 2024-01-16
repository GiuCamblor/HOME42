/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:38:43 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/16 19:38:47 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned const char *s;
	size_t i;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while(i > 0)
		{
			d[len] = s[len];
			i--;
		}
		return (d);
	}
	else
	{
		while(i < len - 1)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
}