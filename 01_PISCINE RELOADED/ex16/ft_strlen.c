/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:48:57 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/02 19:49:01 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	char i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	main(void)
{
	char *str;
	int val;

	str = "CINCOSzsdfvdzfbdgf";
	val = ft_strlen(str);
	printf ("La palabra %s tiene %i caracteres\n", str, val);
	return(0);
}