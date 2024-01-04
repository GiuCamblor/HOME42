/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:44:56 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/26 19:45:09 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_uppercase(char *str);
int	upcase(char c);

int	ft_str_is_uppercase(char *str)
{
	int	count;
	int	boolean;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (upcase(str[count]) == 1)
		{
			boolean = 1;
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (boolean);
}

int	upcase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	src_str[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Boolean = %i", ft_str_is_uppercase(src_str));
	return(0);
}
/*