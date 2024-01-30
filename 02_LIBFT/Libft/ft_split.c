/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:42:04 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/30 16:42:17 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

size_t	fun_wordcount(char const *s, char c);

size_t	fun_wordcount(char const *s, char c)
{
	size_t	word;
	int		wordis;

	wordis = 0;
	while (*s)
	{
		if (*s == c)
		{
			wordis = 0;
		}
		else
		{
			if (!wordis)
			{
				word++;
				wordis = 1;
			}
		}
		s++;
	}
	return (word);
}
/*
int main (void)
{
	printf("%zu", fun_wordCount("una dos tres cuatro", ' '));
	return(0);
}
*/

char	**ft_split(char const *s, char c)
{
	int		word;
	int		s_ind;
	int		w_ind;
	char	**arr;
	int		wordis;

	word = 0;
	s_ind = 0;
	arr = (malloc (fun_wordcount(s, c) * sizeof(char *)));
	if (!arr)
		return (0);
	while (s[s_ind])
	{
		while (s[s_ind] == c)
		{
			s_ind++;
		}
		w_ind = 0;
		while (s[s_ind] != c || s[s_ind] != '\n')
		{
			wordis = 1;
			arr[word][w_ind] = s[s_ind];
			s_ind++;
		}
		arr[word][w_ind] = '\0';
		s_ind++;
		if (wordis == 1)
			word++;
	}
	*arr[word] = '\0';
	return (arr);
}
