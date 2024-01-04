/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:19:11 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/26 16:19:15 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	count;
	int	boolean;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if ((str[count] < 48) || (str[count] > 57))
		{
			return (0);
		}
		else
		{
			boolean = 1;
			count++;
		}
	}
	return (boolean);
}
/*
int main(void)
{
	char src_str[5] = "123a5";
	printf("Boolean = %i", ft_str_is_numeric(src_str));
	return(0);
}
*/