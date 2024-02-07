/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:30:34 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/07 18:30:40 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<strings.h>
#include<stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;
	size_t				len;

	len = ft_strlen(s);
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return(str);
}
/*
char	af_chrotate(unsigned int i, char c)
{
	i = 13;
	return c + i;
}
int main()
{
	char s[] = "97";
	char			*d;

	d = ft_strmapi(s, af_chrotate);
	printf("\n%s, DESPUÉS DE MAPI ES: %s\n", s, d);
	return (0);
}
*/

