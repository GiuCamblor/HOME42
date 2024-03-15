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

#include "ft_printf.h"

static int	af_frmttype(va_list arg, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_cnt(va_arg(arg, int));
	else if (c == 's')
		count = ft_putstr_cnt(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbrsign(1, va_arg(arg, int));
	else if (c == 'u')
		count = ft_putnbrbase(1, va_arg(arg, unsigned long), DEC);
	else if (c == 'x')
		count = ft_putnbrbase(1, va_arg(arg, unsigned long), HEXL);
	else if (c == 'X')
		count = ft_putnbrbase(1, va_arg(arg, unsigned long), HEXU);
	else if (c == '%')
		count = write (1, "%", 1);
	else if (c == 'p')
	{
		count = ft_putstr_cnt("0x");
		count += ft_putnbrbase(0, va_arg(arg, unsigned long), HEXL);
	}
	else
		count = write (1, &c, 1);
	return (count);
}

int	ft_printf(char const *format, ...)
{
	int			count;
	int			i;
	va_list		args;

	va_start (args, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += af_frmttype(args, format[i + 1]);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
