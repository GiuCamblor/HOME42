/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:00:40 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/17 21:00:44 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t i;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;

	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return(str1[i] - str2[i]);

}