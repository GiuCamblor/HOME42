/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:00:40 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/31 19:05:15 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src_str[5] = "Diego";
	printf("Donde dije %s ", src_str);
	char dst_str[5] = "";
	printf("digo %s \n", ft_strcpy(dst_str, src_str));
	return(0);
}
*/