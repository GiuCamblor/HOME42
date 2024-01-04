/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:09:20 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/18 17:16:25 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_numbers(void)
{
	int i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);
}