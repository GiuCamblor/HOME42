/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:00:01 by gcamblor          #+#    #+#             */
/*   Updated: 2023/12/21 19:00:04 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P \n", 1);
	}
	else
	{
		write (1, "N \n", 1);
	}
}

int main(void)
{
	int num;
	num = 0;
	ft_is_negative(num);
	return(0);
}