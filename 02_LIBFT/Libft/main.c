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
#include <stdlib.h>

int	main(void)
{
	int	c;
	size_t k;
	char *str1 = "	-2147483650";
	//char *str2 = "BERCANBERCALBERCASBER";
	//char dst1[5];
	//char ch;
	//char *str;

	k = 200;
	c = 9;
/*
	printf ("EN ISALPHA EL VALOR de %i ES: %d\n", c, ft_isalpha(c));
	printf ("EN FT_ISALPHA EL VALOR de %i ES: %d\n", c, isalpha(c));	
	printf ("EN FT_ISDIGIT EL VALOR de %i ES: %i\n", c, ft_isdigit(c));
	printf ("EN ISDIGIT EL VALOR de %i ES: %i\n", c, isdigit(c));
	printf ("EN FT_ALNUM EL VALOR de %i ES: %i\n", c, ft_isalnum(c));
	printf ("EN ALNUM EL VALOR de %i ES: %i\n", c, isalnum(c));
	printf ("EN FT_ISASCII EL VALOR de %i ES: %i\n", c, ft_isascii(c));
	printf ("EN ISASCII EL VALOR de %i ES: %i\n", c, isascii(c));
	printf ("EN FT_ISPRINT EL VALOR de %i ES: %i\n", c, ft_isprint(c));
	printf ("EN ISPRINT EL VALOR de %i ES: %i\n", c, isprint(c));
	printf ("EN STRLEN EL VALOR de %s ES: %lu\n", str1, strlen(str1));
	printf ("EN FT_STRLEN EL VALOR de %s ES: %i\n", str1, ft_strlen(str1));
	printf ("ANTES DE MEMSET EL ARRAY ES: %s\n", str1);
	printf ("DESPUÉS DE MEMSET EL ARRAY ES: %s\n", ft_memset(str1, c, 4));
	ft_bzero(str1, 4);
	printf ("DESPUÉS DE BEZERO EL ARRAY ES: %s\n", &str1[6]);
	printf ("ORIGEN EN MEMCPY: %s\n", str1);
	printf ("DESTINO DE MEMCPY: %s\n", str2);
	printf ("RESUTADO DE MEMCPY: %s\n", ft_memcpy(str2, str1, k));
	printf ("ORIGEN EN MEMMOVE: %s\n", str1);
	printf ("DESTINO DE MEMMOVE: %s\n", str2);
	printf ("RESUTADO DE MEMMOVE: %s\n", ft_memmove(str2, str1, k));
	printf ("ORIGEN EN STRLCPY: %s\n", str1);
	printf ("DESTINO EN STRLCPY: %s\n", dst1);
	printf ("RESULTADO: %lu\n", ft_strlcpy(str1, dst1, k));
	printf ("LOWERCASE: %c\n", c);
	printf ("UPPERCASE: %c\n", ft_toupper(c));
	printf ("UPPERCASE: %c\n", c);
	printf ("LOWERCASE: %c\n", ft_tolower(c));
 	printf ("STRING: %s\n", str1);
	printf ("CHARACTER TO FIND: %c\n", c);
	printf ("RESULTADO: %s\n", ft_strchr(str1, c));
	write (1, ft_strchr(str1, c), 1);
	printf ("COMPARAR \"%s\" Y \"%s\"\n", str1, str2);
	printf ("RESULTADO: %i\n", strcmp(str1, str2));
	printf ("RESULTADO: %i\n", ft_strcmp(str1, str2));
 	printf ("STRING: %s\n", str1);
	printf ("CHARACTER TO FIND: %c\n", c);
	printf ("RESULTADO: %s\n", (char *)ft_memchr(str1, c, k));
	printf ("COMPARAR \"%s\" Y \"%s\"\n", str1, str2);
	printf ("RESULTADO: %i\n", strcmp(str1, str2));
	printf ("RESULTADO: %i\n", ft_memcmp(str1, str2, k));
	printf ("BUSCAR \"%s\" en \"%s\"\n", str1, str2);
	printf ("RESULTADO: %s\n", ft_strnstr(str2, str1, k));
*/
	printf ("ANTES DE ATOI: %s\n", str1);
	printf ("DESPUÉS DE ATOI: %i\n", atoi(str1));
	printf ("DESPUÉS DE ATOI: %i\n", ft_atoi(str1));

	return (0);
}