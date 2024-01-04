/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:09:19 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/27 10:09:24 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	locase(char c);
int	upcase(char c);
int	number(char c);
int	symbol(char c);

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	if (locase(str[0]))
	{
		str[0] = str[0] -32;
	}
	while (str[count] != '\0')
	{
		if ((locase(str[count]) == 1) && ((symbol(str[count -1]) == 1)))
		{
			str[count] = str[count] -32;
		}
		if ((upcase(str[count]) == 1) && (symbol(str[count -1]) == 0))
		{
			str[count] = str[count] +32;
		}
		count++;
	}
	return (str);
}

int	locase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	upcase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	symbol(char c)
{
	if ((locase(c) == 1) || (upcase(c) == 1) || (number(c) == 1))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	src_str[100] = "saLut, 4COMMent tU vAS3s&S ?";
	printf("%s \n", src_str);
	printf("%s ", ft_strcapitalize(src_str));
	return(0);
}
*/