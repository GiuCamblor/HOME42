/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:45:43 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/18 17:15:53 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while(i >= 97)
	{
		write(1, &i, 1);
		i--;
	}

	write(1, "\nzxywvutsrqponmlkjihgfedcba", 27);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}