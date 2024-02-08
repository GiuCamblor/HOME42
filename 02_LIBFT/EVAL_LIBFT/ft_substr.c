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

	if (start > ft_strlen(s) || !s || len == 0)
		return (ft_strdup(""));
	if (ft_strlen((char *)s) - start < len)
		len = ft_strlen((char *)s) - start;
	d = (char *) malloc(sizeof(char) * (len + 1));
	if (!d)
		return (0);
	ft_memcpy(d, s + start, len);
	d[len] = '\0';
	return (d);
}
