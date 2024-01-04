/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:15:15 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/25 10:58:02 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main(void)
{
	int a;
	int b;

	a = 24;
	b = 42;
	printf("a = %i\nb = %i", a, b);
	ft_swap(&a, &b);
	printf("\na = %i\nb = %i", a, b);
	return(0);
}