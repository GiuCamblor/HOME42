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

#include "ft_libftprintf.h"
#include <stdio.h>

int	main()
{
	int	count;
	char			c;
	char			*s;
	void			*p;
	int				d;
	int				i;
	unsigned int	u;
	int				x1;
	int				x2;
	int				X1;
	int				X2;

	count = 0;
	c = 'j';
	s = "2";
	p = &s;
	d = -1;
	i = -1;
	u = 9;
	x1 = 1;
	x2 = 2;
	X1 = 298;
	X2 = 459;
	printf("CHA:	%c\nSTR:	%s\nADD:	%p\nDEC:	%d\nINT:	%i\nUNS:	%u\nhex:	%X\nHEX:	%x\n", c, s, p, d, i, u, x1, X1);
/* 	count = printf("CHA:%c\nSTR:%s\nADD:%p\nDEC:%d\nINT:%i\nUNS:%u\nHEX:%X\nHEX:%X\nhex: %x\nhex: %x\n\n", c, s, p, d, i, u, X1, X2, x1, x2);
 */	//printf("COUNT: %i", count);
	 count =  ft_printf("CHA:%c\nSTR:%s\nADD:%p\nDEC:%d\nINT:%i\nUNS:%u\n\n", c, s, p, d, i, u, X1, X2, x1, x2);
	
	ft_printf("COUT: %i\n", count); 
	printf("%u\n%u\n%u\n",u,-3,-99);
	ft_printf("%u\n%u\n%u\n",u,-3,-99);
	return (0);
}