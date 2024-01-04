/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:13:32 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/25 16:16:45 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a / *b;
	aux2 = *a % *b;
	*a = aux1;
	*b = aux2;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 75;
	b = 3;
	printf("%i entre %i es igual a ", a, b);
	ft_ultimate_div_mod (&a, &b);
	printf("%i	y sobra %i", a, b);
	return (0);
}
*/
