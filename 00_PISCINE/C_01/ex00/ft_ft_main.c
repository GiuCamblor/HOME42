/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:28:19 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/20 20:18:07 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>


void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int num;

	num = 15;
	printf("Valor: %i \n", num);
	ft_ft(&num);
	printf("Valor: %i \n", num);
	return(0);
}