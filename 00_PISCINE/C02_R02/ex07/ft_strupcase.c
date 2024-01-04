/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:41:52 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/26 20:41:56 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] > 96) && (str[count] < 123))
		{
			str[count] = str[count] -32;
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	src_str[25] = "string to uppercase";
	printf("%s \n", src_str);
	printf("%s ", ft_strupcase(src_str));
	return(0);
}
*/