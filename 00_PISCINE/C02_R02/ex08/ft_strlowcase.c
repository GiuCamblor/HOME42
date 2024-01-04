/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:00:42 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/27 10:01:31 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] > 64) && (str[count] < 91))
		{
			str[count] = str[count] +32;
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	src_str[25] = "STRING To lowerCASE";
	printf("%s \n", src_str);
	printf("%s ", ft_strlowcase(src_str));
	return(0);
}
*/