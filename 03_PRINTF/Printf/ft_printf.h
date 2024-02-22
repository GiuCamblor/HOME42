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

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>

# define hex "0123456789abcdef"
# define DEC "0123456789"
# define HEX "0123456789ABCDEF"

int		ft_printf(char const *format, ...);
int		ft_putchar_cnt(char c);
int		ft_putstr_cnt(char *s);
int		ft_putnbrsign(long n);
int		ft_putnbrbase(unsigned long n, char *base);
size_t	ft_strlen(const char *str);

#endif