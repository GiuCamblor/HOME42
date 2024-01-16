/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:29:29 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/16 20:29:33 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (src == NULL || dst == NULL)
		return (0);
	while(src[i])
		i++;
	if(dstsize < 1)
		return(i);
	if (dst[j])
	{
		while(src[j] && j < dstsize - 1)
			{
				dst[j] = src[j];
				j++;
			}
		dst[j] = '\0';
	}
	return(i);
}