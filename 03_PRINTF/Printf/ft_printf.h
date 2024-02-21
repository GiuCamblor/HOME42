/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor- <gcamblor-@student.42urdul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:09:12 by gcamblor-         #+#    #+#             */
/*   Updated: 2024/02/21 21:09:19 by gcamblor-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define hex "0123456789abcdef"
# define HEX "0123456789ABCDEF"
# define DEC "0123456789"
# define OCT "01234567"

int		ft_printf(char const *format, ...);
int		ft_putchar_cnt(char c);
void	ft_putstr_cnt(char *s);
int		ft_putnbr_base(int n, char *base);

#endif