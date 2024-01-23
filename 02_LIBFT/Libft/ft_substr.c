/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:41:55 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/23 22:58:42 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *d;
    int i;
    int j;
/*
    if (len > strlen(s) || start > strlen(s))
        return(0);
*/  
    d = malloc(len + 1);
    if (!d)
        return(0);
    i = start;
    j = 0;
    while (i < ((start + len)) && s[i])
    {
        d[j] = s[i];
        i++;
        j++;
    }
    j++;
    d[j] = '\0';
    return(d);
}