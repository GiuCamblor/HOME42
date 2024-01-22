/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:43:25 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/22 09:22:54 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int slen;
	slen = ft_strlen(s);

	i = slen;
	while (s[i] > 0)
	{
		i--;
		if (s[i] == (char)c)
			return (&((char*)s)[i]);
	}
	if (s[i] == (char)c)
		return (&((char*)s)[i]);
	return (0);
}
