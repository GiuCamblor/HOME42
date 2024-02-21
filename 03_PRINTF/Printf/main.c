/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor- <gcamblor-@student.42urdul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 23:16:42 by gcamblor-         #+#    #+#             */
/*   Updated: 2024/02/21 23:16:49 by gcamblor-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int	count;

	char				c;		//CHARACTER
	char				*s;		//STRING
	void				*p;		//ADDRESS
	int					d;		//DECIMAL
	int					i;		//INTEGER
	unsigned int		u;		//UNSIGNED
	int					x;		//INT (hexa)
	int					X;		//INT (HEXA)

	c = 'j';
	s = "HOLA";
	p = &s;
	d = -666;
	i = -1974;
	u = 1111;
	x = -8;
	X = 3333;
	//printf("CHA:	%c\nSTR:	%s\nADD:	%p\nDEC:	%d\nINT:	%i\nUNS:	%u\nhex:	%X\nHEX:	%x\n", c, s, p, d, i, u, x, X);
	printf("CHA:%c\nSTR:%s\nADD:%p\nDEC:%d\nINT:%i\nUNS:%u\nhex:%x\nHEX:%X\n\n", c, s, p, d, i, u, x, X);
	count =  ft_printf("CHA:%c\nSTR:%s\nADD:%p\nDEC:%d\nINT:%i\nUNS:%u\nhex:%x\nHEX:%X\n", c, s, p, d, i, u, x, X);
	ft_printf("%i", count);
	return (0);
}