/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:03:17 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/31 19:02:17 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	count;
	int	boolean;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (((str[count] > 64) && (str[count] < 91))
			|| ((str[count] > 96) && (str[count] < 123)))
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
int main(void)
{
	char src_str[53] = "AaZz";
	printf("Boolean = %i", ft_str_is_alpha(src_str));
	return(0);
}
*/