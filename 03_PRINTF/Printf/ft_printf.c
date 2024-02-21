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

#include"ft_printf.h"

int af_frmttype(char c, va_list arg)
{
    int count = 0;

    if (c == 'c')
        count = ft_putchar_cnt(va_arg(arg, int));
    else if (c == 's')
        count = ft_putstr_cnt(va_arg(arg, char *));
    else if (c == 'p')
        count = ft_putstr_cnt(va_arg(arg, char *));
    else if (c == 'd' || c == 'i')
        count = ft_putnbrbase_cnt(va_arg(arg, int), DEC);
    else if (c == 'u')
        count = ft_putnbrbase_cnt(va_arg(arg, int)), DEC;
    else if (c == 'x')
        count = ft_putnbrbase_cnt(va_arg(arg, int), hex);
    /*
    else if (c == 'X')
        ft_puthexa(arg);
    */
    return count;
}

int ft_printf(char const *format, ...)
{
    va_list		args;
    va_start	(args, format);
    int			count = 0;
	int			i;

	i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            count += af_frmttype(format[i + 1], args);
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
    return count;
}
