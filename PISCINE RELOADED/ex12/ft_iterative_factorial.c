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

		while (--fact > 1)
		{
			nb *= fact;
		}
	return (nb);
}

int	main()
{
	int num;
	int result;

	num = 4;
	result = ft_iterative_factorial(num);
	printf("fact of %i is %i", num, result);
	return (0);
}