/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:41:55 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/20 20:00:20 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *d;
    int i;
    int j;

    d = malloc(20);
    if (!d)
        return(0);
    i = 0;
    j = 0;
    while (s1[i])
    {
        d[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        d[i] = s2[j];
        i++;
        j++;
    }
    i++;
    d[i] = '\0';
    return(d);
}