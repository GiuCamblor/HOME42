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

<<<<<<< HEAD
int	main()
=======
int	main(int res)
>>>>>>> 987bfb42b4245b1a1baef9f926ec7bb9fe7ee2b1
{
	int num;
	int result;

<<<<<<< HEAD
	num = 4;
	result = ft_iterative_factorial(num);
	printf("fact of %i is %i", num, result);
	return (0);
=======
	nb = 6;
	printf("Factorial of %i is ", nb);
	ft_iterative_factorial(nb);
	printf("%i", nb);
	return(0);
>>>>>>> 987bfb42b4245b1a1baef9f926ec7bb9fe7ee2b1
}