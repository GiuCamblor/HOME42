/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:23:54 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/17 21:23:59 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && (needle[j] <= ft_strlen((char *)needle - 1)))
	{
		while (haystack[i] != needle[j])
		{
			write(1, haystack[i], 1);
			i++;
		}
		i++;
		j++;
	}
	j = 0;
	return((int*)needle[j]);
	return (0);
}
