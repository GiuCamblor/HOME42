/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:23:57 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/03 19:24:00 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void sort_args(char *arr, int size)
{
	int count1;
	int count2;
	int temp;

	count1 = 0;
	while (count1 <= size-1)
	{
		count2 = count1 + 1;
		while (count2 <= size -1)
		{
			while (arr[count1] > arr[count2])
			{
				temp = arr[count1];
				arr[count1] = arr[count2];
				arr[count2] = arr[temp];
			}
			count2++;
		}
		count1++;
	}
}

int	main(int argc, char *argv[])
{
	int i;
	int size;
	char *newArr[];

	while(argv[i])
		i++;
	size = i-1;
	neawArr = sort_args(*argv, size);
	i = 0;
	while (i < size)
	{
		i++;
		printf("%s\n", newArr[i]);
	}
	return(0);
}
