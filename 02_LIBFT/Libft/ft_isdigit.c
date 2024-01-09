/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:32:53 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/09 18:33:03 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c < 48) || (c > 57))
	{
		return (0);
	}
	else
	{
		return(1);
	}
}
/*
int main(void)
{
	char src = '6';
	printf("Boolean de %c = %i", src, ft_isdigit(src));
	return(0);
}
*/
