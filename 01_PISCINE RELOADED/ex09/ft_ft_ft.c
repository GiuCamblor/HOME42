/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:31:53 by gcamblor          #+#    #+#             */
/*   Updated: 2023/12/26 16:32:00 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int num;
	num = 0;
	printf("VALOR ANTES DE FT_FT: %i\n", num);
	ft_ft(&num);
	printf("VALOR DESPUÉS DE FT_FT: %i\n", num);
	return(0);
}