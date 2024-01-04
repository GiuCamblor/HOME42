/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:24:01 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/18 17:16:53 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P\n", 1);
	}
	else
	{
		write(1, "N\n", 1);
	}
}

int main(void)
{
	int num;
	num = -4;
	ft_is_negative(num);
	return(0);
}