/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:43:25 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/17 17:43:27 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	//char	*str;

	i = 0;
	//str = (char *) s;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&((char*)s)[i]);
		i++;
	}
	if (s[i] == (char)c)
			return (&((char*)s)[i]);
	return (0);
}
