/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:42:04 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/31 22:57:11 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

size_t	fun_wordCount(char const *s, char c);
char	*fun_fillArrayWords(char *arr, const char *s, int s_ind, int w_ind, char c);

size_t	fun_wordCount(char const *s, char c)
{
	size_t	word;
	int		wordis;

	wordis = 0;
	word = 0;
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

char	*fun_fillArrayWords(char *arr, const char *s, int s_ind, int w_ind, char c)
{
	s_ind = s_ind - w_ind;
	w_ind = 0;
	while (s[s_ind] && s[s_ind] != c)
	{	
		arr[w_ind] = s[s_ind];
		s_ind++;
		w_ind++;
	}
	arr[w_ind] = '\0';
	return(arr);
}
char	**ft_split(char const *s, char c)
{
	int		word_cnt;
	int		s_ind;
	int		word_ind;
	char	**arr;

	word_cnt = 0;
	s_ind = 0;
	arr = (char **)malloc ((fun_wordCount(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (0);
	while (word_cnt < fun_wordCount(s, c))
	{
/////////////////////////////////// SACAR A FUNCIÓN
/*
 		while (s[s_ind] == c)
			s_ind++;
		word_ind = 0;
		while (s[s_ind] && s[s_ind] != c)
		{
			s_ind++;
			word_ind++;
		}
*/
/////////////////////////////////// SACAR A FUNCIÓN
		arr[word_cnt] = malloc ((word_ind + 1) * sizeof(char));
		if (!arr[word_cnt])
			return (0);
		arr[word_cnt] = fun_fillArrayWords(arr[word_cnt], s, s_ind, word_ind, c);
		printf("PALABRA %i: %s\n", word_cnt, arr[word_cnt]);
		word_cnt++;
	}
	arr[word_cnt] = NULL;
	return (arr);
}

/*
*/
/*
int 	main(void)
{
	char* arr;
	char* s;
	int s_ind;
	int w_ind;
	char c;

	s = " monoloco  pacalaca";
	s_ind = 18;
	w_ind = 7;
	c = ' ';
	arr = fun_fillArrayWords(arr, s, s_ind, w_ind, c);
	printf("%s", arr);
	return(0);
}
*/