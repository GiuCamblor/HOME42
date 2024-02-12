/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:42:04 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/02 12:26:48 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 

char	*af_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (start > ft_strlen(s) || !s || len == 0)
		return (ft_strdup(""));
	if (ft_strlen((char *)s) - start < len)
		len = ft_strlen((char *)s) - start;
	d = (char *) malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	ft_memcpy(d, s + start, len);
	d[len] = '\0';
	return (d);
}

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

char	*af_substrfill(char const *s, int s_ind, char c)
{
	char	*arr;
	int		substr_ind;

	while (s[s_ind] && s[s_ind] == c)
		s_ind++;
	substr_ind = 0;
	while (s[s_ind] && s[s_ind] != c)
	{
		s_ind++;
		substr_ind++;
	}
	s_ind = s_ind - substr_ind;
	arr = af_substr(s, s_ind, substr_ind);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t		substr_cnt;
	int			s_ind;
	char		**arr;

	s_ind = 0;
	substr_cnt = af_substrcnt(s, c);
	arr = (char **)malloc ((af_substrcnt(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (0);
	substr_cnt = 0;
	while (substr_cnt < af_substrcnt(s, c))
	{
		while (s[s_ind] == c)
			s_ind++;
		arr[substr_cnt] = af_substrfill(s, s_ind, c);
		if (!arr[substr_cnt])
		{
			while (substr_cnt > 0)
				free (arr[--substr_cnt]);
			return (free(arr), NULL);
		}
		s_ind = s_ind + ft_strlen(arr[substr_cnt]);
		substr_cnt++;
	}
	return (arr[substr_cnt] = NULL, arr);
}

/* int main()
{
	char	**result;

	result = ft_split("Hola amigo", ' ');
	for(int x = 0; result[x] != NULL; x++)
		printf("%s\n", result[x]);
	return (0);
} */