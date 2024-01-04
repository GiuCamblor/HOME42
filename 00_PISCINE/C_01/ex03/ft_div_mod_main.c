/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:19:06 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/25 11:01:23 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 18;
	b = 5;
	div = a / b;
	mod = a % b;
	ft_div_mod(a, b, &div, &mod);
	printf("%i / %i = %i &  ", a, b, div);
	printf("resto = %i", mod);
	return(0);

}