/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:28:21 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/09 18:28:26 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (((c > 64) && (c < 91))
		|| ((c > 96) && (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return(0);
}
/*
int main(void)
{
	char src;	

	src = 'P';
	printf("Boolean of %c = %i\n", src, ft_isalpha(src));
	return(0);
}
*/
