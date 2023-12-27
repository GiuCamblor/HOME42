/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:21:43 by gcamblor          #+#    #+#             */
/*   Updated: 2023/12/27 18:21:50 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int res;
	if (nb == 1)
	{
		return(1);
	}
	res = nb * ft_recursive_factorial(nb -1);
	return(res);
}

int main()
{
	int num;
	int res;

	num = 11;
	res = ft_recursive_factorial(num);
	printf("fact of %i is %i\n", num, res);
	return (0);
}