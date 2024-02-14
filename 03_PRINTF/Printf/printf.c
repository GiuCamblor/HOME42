/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:35:18 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/14 19:35:49 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main()
{
	char				c;		//CHARACTER
	char				*s;		//STRING
	void				*p;		//ADDRESS
	int					d;		//DECIMAL
	int					i;		//INTEGER
	unsigned int		u;		//UNSIGNED
	int					x;		//INT (hexa)
	int					X;		//INT (HEXA)

	c = 'S';
	s = "MALAMUTE";
	p = &c;
	i = 1974;
	printf("CHAR: %c\nSTR: %s\nADD: %p\n", c, s, p);
	return (0);
}
