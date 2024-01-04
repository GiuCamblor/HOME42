/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:40:11 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/27 14:40:15 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<string.h>
#include<stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	int				bool;

	count = 0;
	bool = 0;
	while (src[count] != '\0')
	{
		if (count < size -1 && size != 0)
			dest[count] = src[count];
		else if (count == size -1 && size != 0)
		{
			dest[count] = '\0';
			bool = 1;
		}
		count++;
	}
	if (bool == 0 && size != 0)
		dest[count] = '\0';
	return (count);
}
/*
int	main(void)
{	
	char			src_str [] = "0123456789abcdefghij";
	char			dst_str[16] = "";
	int				count;
	unsigned int	size;
	
	printf("Destiny string: %s\n", dst_str);
	size = 15;
	printf("Origin string: %s\n", src_str);
	count = ft_strlcpy(dst_str, src_str, size);
	printf("number of characters: %d\n", count);
	printf("Destiny string: %s\n", dst_str);
	return(0);
}
*/