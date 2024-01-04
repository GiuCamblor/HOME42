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
#include<string.h>
/*
#include<stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	count = 0;
	if (size != 0)
	{
		while (src[count] && count < size - 1)
		{
			dest[count] = src[count];
			count ++;
		}
		dest[count] = '\0';
	}
	return (src_len);
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
