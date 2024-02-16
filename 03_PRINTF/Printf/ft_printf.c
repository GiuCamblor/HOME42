/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:42:05 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/16 16:42:09 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *, ...)
{
	va_list
}

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

	c = 'R';
	s = "MALAMUTE";
	p = &s;
	d = 666;
	i = 1974;
	x = 1974;
	printf("CHAR:	%c\nSTR:	%s\nADD:	%p\nINT:	%iDEC:	%d\nHEX:	%x\n", c, s, p,d,  i, x);
	return (0);
}