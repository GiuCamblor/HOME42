/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:40:23 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/10 17:40:26 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	size_t k;
	char str1[] = "DUBLINESES";
	char str2[20] = "BERGANTIN";

	k = 3;
	c = 'M';
	printf ("EN FT_ISALPHA EL VALOR de %i ES: %d\n", c, isalpha(c));	
	printf ("EN ISALPHA EL VALOR de %i ES: %d\n", c, ft_isalpha(c));
	printf ("EN FT_ISDIGIT EL VALOR de %i ES: %i\n", c, ft_isdigit(c));
	printf ("EN ISDIGIT EL VALOR de %i ES: %i\n", c, isdigit(c));
	printf ("EN FT_ALNUM EL VALOR de %i ES: %i\n", c, ft_isalnum(c));
	printf ("EN ALNUM EL VALOR de %i ES: %i\n", c, isalnum(c));
	printf ("EN FT_ISASCII EL VALOR de %i ES: %i\n", c, ft_isascii(c));
	printf ("EN ISASCII EL VALOR de %i ES: %i\n", c, isascii(c));
	printf ("EN FT_ISPRINT EL VALOR de %i ES: %i\n", c, ft_isprint(c));
	printf ("EN ISPRINT EL VALOR de %i ES: %i\n", c, isprint(c));
	printf ("EN FT_STRLEN EL VALOR de %s ES: %i\n", str1, ft_strlen(str1));
	printf ("EN STRLEN EL VALOR de %s ES: %lu\n", str1, strlen(str1));
	printf ("ANTES DE MEMSET EL ARRAY ES: %s\n", str1);
	printf ("DESPUÉS DE MEMSET EL ARRAY ES: %s\n", ft_memset(str1, c, 4));
	ft_bzero(str1, 4);
	printf ("DESPUÉS DE BEZERO EL ARRAY ES: %s\n", &str1[6]);
	printf ("ORIGEN EN MEMCPY: %s\n", str1);
	printf ("DESTINO DE MEMCPY: %s\n", str2);
	printf ("RESUTADO DE MEMCPY: %s\n", memcpy(str2, str1, k));
	return (0);
}
