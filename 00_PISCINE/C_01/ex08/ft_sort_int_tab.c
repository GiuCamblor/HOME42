/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:54:09 by gcamblor          #+#    #+#             */
/*   Updated: 2023/07/25 18:54:52 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count1;
	int	count2;
	int	aux;

	count1 = 0;
	while (count1 <= size -1)
	{	
		count2 = count1 + 1;
		while (count2 <= size -1)
		{
			while (tab[count1] > tab[count2])
			{	
				aux = tab[count1];
				tab[count1] = tab[count2];
				tab[count2] = aux;
			}
			count2++;
		}
		count1++;
	}
}

int main()
{
	int arr[10] = {8,6,1,9,7,3,5,2,4,0};
	int i;
	int size;

	size = 10;
	i = 0;
	while(i <= size -1)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(arr, size -1);
	i = 0;
	while(i <= size -1)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}
