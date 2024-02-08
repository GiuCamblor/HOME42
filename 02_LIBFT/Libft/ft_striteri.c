/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:30:34 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/08 12:20:42 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include"libft.h"
#include<strings.h>
#include<stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
void af_chrotate(unsigned int i, char* c)
{
	i = 1;
	c = c + i;
}
int main()
{
	char s[] = "CARAMBOLA";

	//ft_striteri(s, *af_chrotate);
	printf("\n%s, DESPUÉS DE ITERI ES: %s\n", s, s);
	return (0);
}
/*
*/

