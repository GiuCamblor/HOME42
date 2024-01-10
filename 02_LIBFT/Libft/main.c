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

int	main(void)
{
	int	c;
	char *str;
	int strl;

	str = "CACAS";
	c = 52;
	printf ("EN ALPHA EL VALOR de %i ES: %i\n", c, ft_isalpha(c));
	printf ("EN DIGIT EL VALOR de %i ES: %i\n", c, ft_isdigit(c));
	printf ("EN ALNUM EL VALOR de %i ES: %i\n", c, ft_isalnum(c));
	printf ("EN ISASCII EL VALOR de %i ES: %i\n", c, ft_isascii(c));
	printf ("EN ISPRINT EL VALOR de %i ES: %i\n", c, ft_isprint(c));
	printf ("EN STRLEN EL VALOR de %s ES: %i\n", str, ft_strlen(str));
	return (0);
}
