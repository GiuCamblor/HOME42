/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:29:33 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/25 18:42:32 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	mid;
	int	aux;

	count = 0;
	mid = size / 2;
	while (count < mid)
	{
		aux = tab[size -1 - count];
		tab[size -1 - count] = tab[count];
		tab[count] = aux;
		count++;
	}
}
/*
int	main(void)
{
	int	serie[5] = {1,2,3,4,5};	
	int	i;
	int	size;

	size = 5;
	i = 0;
	while (i <= size -1)
	{
		printf ("%d, ", serie[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(serie, size);
	i = 0;
	while (i <= size -1)
	{
		printf ("%d, ", serie[i]);
		i++;
	}
	return (0);
}
*/
