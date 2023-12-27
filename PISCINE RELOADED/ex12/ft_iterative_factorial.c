/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:46:41 by gcamblor          #+#    #+#             */
/*   Updated: 2023/12/26 18:47:02 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int fact;
	int res;

	fact = nb;
	while(fact > 1)
	{
		res = fact * fact-1;
		--fact;
	}
	return(res);
}

int	main(int res)
{
	int nb;

	nb = 6;
	printf("Factorial of %i is ", nb);
	ft_iterative_factorial(nb);
	printf("%i", nb);
	return(0);
}