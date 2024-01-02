/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:30:50 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/02 17:30:55 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
	unsigned int i;
	int res;
	unsigned int max;
	
	max = 2147483647;
	i = 1;
	while(i * i != nb && i * i < max)
	{
		i++;
		res = i;
	}
	if (i * i == nb)
		return(res);
	//else
		//return (0);
}

int main(void)
{
	int nb;
	int res;

	nb = 122;
	res = ft_sqrt(nb);
	printf("LA RAIZ CUADRADA DE %i ES: %i\n", nb, res);
	return(0);
}