/*                                                                            */
/*                                                        :::      ::::::::   */
/* ************************************************************************** */
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

size_t	af_substrcnt(char const *s, char c);
//char	*faf_fillArrayWords(char *arr, const char *s, int s_ind, char c);
char	*af_substrfill(char const *s, int s_ind, int w_ind, char c);
/*
char	*fun_fillArrayWords(char *arr, const char *s, int s_ind, char c)		////////////FUNCIÓN AUXILIAR SUSTITUIDA POR ft_substr
{																							(Al sacar la resta s_ind = s_ind - w_ind para no superar los cuatro argumentos, había que recuperar el valor después de esta función o de ft_substr---COMENTAR)
	int w_ind;
	//s_ind = s_ind - w_ind;
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
*/

size_t	af_substrcnt(char const *s, char c)
{
	size_t	substrcnt;
	int		substr;

	substr = 0;
	substrcnt = 0;
	while (*s)
	{
		if (*s == c)
		{
			substr = 0;
		}
		else
		{
			if (!substr)
			{
				substrcnt++;
				substr = 1;
			}
		}
		s++;
	}
	return (substrcnt);
}
char	*af_substrfill(char const *s, int s_ind, int substr_ind, char c)
{
		char *arr;

 		while (s[s_ind] == c)
			s_ind++;
		substr_ind = 0;
		while (s[s_ind] && s[substr_ind] != c)
		{
			s_ind++;
			substr_ind++;
		}
		s_ind = s_ind - substr_ind;
		arr = ft_substr(s, s_ind, substr_ind);
		s_ind = s_ind + substr_ind;
		printf("%i\n", s_ind);
		return (arr);
}	

char	**ft_split(char const *s, char c)
{
	int		substr_cnt;
	int		s_ind;
	int		substr_ind;
	char	**arr;

	s_ind = 0;
	c = ' ';
	substr_cnt = 0;
	af_substrcnt(s, c);
	arr = (char **)malloc ((af_substrcnt(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (0);
	while (substr_cnt < af_substrcnt(s, c))
	{	
		arr[substr_cnt] = af_substrfill(s, s_ind, substr_ind, c);
		s_ind = s_ind - ft_strlen(arr[substr_cnt]);
		//s_ind = s_ind + substr_ind;
		printf("PALABRA %i: %s\n", substr_cnt + 1, arr[substr_cnt]);
		substr_cnt++;
	}
	printf("SUBSTRINGS: %i\n", substr_cnt);
	//arr[word_cnt] = NULL;
	return (arr);
}
