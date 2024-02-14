/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:08:07 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/24 18:08:13 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		slen;

	slen = ft_strlen(s);
	if ((char)c == '\0')
		return (&((char *)s)[slen]);
	if (slen)
	{
		i = slen - 1;
		while (i >= 0)
		{
			if (s[i] == (char)c)
				return (&((char *)s)[i]);
			i--;
		}
		if (s[0] == (char)c)
			return (&((char *)s)[0]);
	}
	return (0);
}
