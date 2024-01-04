/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:42:48 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/18 17:19:00 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	int i;
	
	i = 97;
	while(i <= 122)
	{
		write(1, &i, 1);
		i++;
	}

	write(1, "\nabcdefghijklmnopqrstuvwxyz", 27);
}

int	main(void)
{
	ft_print_alphabet();
	return(0);
}