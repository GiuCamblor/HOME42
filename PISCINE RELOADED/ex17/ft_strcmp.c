/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:08:38 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/02 20:08:46 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(*s1)
	{
		
	}
}

int main (void)
{
	char *str1;
	char *str2;
	int val;

	str1 = "ESTA ES LA MAYOR";
	str2 = "ESTA NO";
	val = ft_strcmp(str1, str2);
	return(0);
}