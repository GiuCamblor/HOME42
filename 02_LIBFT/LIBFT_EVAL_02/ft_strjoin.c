/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:06:16 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/24 18:06:19 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	total;
	int		i;

	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s2));
		else if (s2)
			return (ft_strdup(s1));
		else
			return (ft_strdup(""));
	}
	total = ft_strlen(s1) + ft_strlen(s2);
	d = (char *) malloc(total + 1);
	if (!d)
		return (d);
	i = 0;
	while (*s1)
		d[i++] = *s1++;
	while (*s2)
		d[i++] = *s2++;
	d[i] = '\0';
	return (d);
}
