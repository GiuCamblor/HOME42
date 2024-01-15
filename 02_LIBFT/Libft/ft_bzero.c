/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:34:21 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/11 21:34:24 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
/*
	unsigned char *str;
	size_t i;
	
	i = 0;
	str = (unsigned char *) s;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
*/
ft_memset(s, 0, n);

}
