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

#include <unistd.h>
/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a_main;
	int	b_main;
	int	div_main;
	int	mod_main;

	a_main = 75;
	b_main = 2;

	ft_div_mod(a_main, b_main, &div_main, &mod_main);
	printf("%i / %i = %i &  %i", a_main, b_main, div_main, mod_main);
	return(0);
}
*/
