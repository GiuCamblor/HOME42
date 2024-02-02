/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:42:04 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/02 12:26:48 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h> 
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*af_substr(char const *s, unsigned int start, size_t len);
size_t	af_substrcnt(char const *s, char c);
//char	*faf_fillArrayWords(char *arr, const char *s, int s_ind, char c);
char	*af_substrfill(char const *s, int s_ind, int w_ind, char c);
char	*af_substr(char const *s, unsigned int start, size_t len)		////////////FUNCIÓN AUXILIAR SUSTITUIDA POR ft_substr
{
	char	*d;

	if (start > ft_strlen(s) || !s || len == 0)
		return (ft_strdup(""));
	if (ft_strlen((char *)s) - start < len)
		len = ft_strlen((char *)s) - start;
	d = (char *) malloc(sizeof(char) * (len + 1));
	if (!d)
		return (0);
	ft_memcpy(d, s + start, len);
	d[len] = '\0';
	return (d);
}
/*
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
		while (s[s_ind] && s[s_ind] == c)
		{
			s_ind++;
		}
printf("SIND: %d\n", s_ind);
printf("SUBSTRIND: %d\n", substr_ind);
printf("STRING: %s\n", s);
		arr = af_substr(s, s_ind, substr_ind);
printf("SUBSTRING: %s\n", arr);
printf("SUBSTR_LEN_IN FILL: %zu\n", ft_strlen(arr));
		s_ind = s_ind + substr_ind;
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
		while (s[s_ind] == c)
			s_ind++;
		arr[substr_cnt] = af_substrfill(s, s_ind, substr_ind, c);
		s_ind = s_ind + ft_strlen(arr[substr_cnt]);
//printf("%i\n", s_ind);
//printf("SUBSTR_LEN: %zu\n", ft_strlen(arr[substr_cnt]));
//printf("SUBSTRINGS: %i\n", substr_cnt);
//printf("SUBSTRING %i: %s\n", substr_cnt + 1, arr[substr_cnt]);
		substr_cnt++;
	}
	return (arr);
}
