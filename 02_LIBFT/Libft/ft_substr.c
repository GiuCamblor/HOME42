/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:08:47 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/24 18:08:52 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	int		i;
	int		j;

	d = malloc(len + 1);
	if (!d)
		return (0);
	i = start;
	j = 0;
	while (i < ((start + len)) && s[i])
	{
		d[j] = s[i];
		i++;
		j++;
	}
	j++;
	d[j] = '\0';
	return (d);
}
