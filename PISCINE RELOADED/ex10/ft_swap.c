/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:13:12 by gcamblor          #+#    #+#             */
/*   Updated: 2023/12/26 17:13:17 by gcamblor         ###   ########.fr       */
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
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("A = %i | ", a);
	printf("B = %i\n", b);
	ft_swap(&a, &b);
	printf("AFTER ft_swap...\nA = %i | ", a);
	printf("B = %i\n", b);
	return (0);
}
