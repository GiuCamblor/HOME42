/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:54:38 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/26 19:54:41 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int	count;
	int	boolean;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if ((str[count] > 31) && (str[count] < 127))
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
/*
int	main(void)
{
	char	src_str[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Boolean = %i", ft_str_is_printable(src_str));
	return(0);
}
*/