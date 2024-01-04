/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:27:15 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/26 19:27:18 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_lowercase(char *str);
int	locase(char c);

int	ft_str_is_lowercase(char *str)
{
	int	count;
	int	boolean;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (locase(str[count]) == 1)
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

int	locase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	src_str1[] = "abcdefghijklmnopqrstuvwxy";
	char	src_str2[] = "abcd1fghijklmnopqrstuvwxy";
	printf("Boolean = %i", ft_str_is_lowercase(src_str1));
	printf("Boolean = %i", ft_str_is_lowercase(src_str2));
	return(0);
}
*/