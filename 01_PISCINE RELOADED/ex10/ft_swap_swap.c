/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:12:43 by gcamblor          #+#    #+#             */
/*   Updated: 2023/12/26 17:12:53 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	num_a;
	int	num_b;

	num_a = 5;
	num_b = 6;
	printf("NUM A = %i | ", num_a);
	printf("NUM B = %i\n", num_b);
	ft_swap(&num_a, &num_b);
	printf("NUM A = %i | ", num_a);
	printf("NUM B = %i\n", num_b);
	ft_swap(&num_a, &num_b);
	return (0);
}
