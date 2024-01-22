/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:16:26 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/22 09:30:45 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *dst;
    int dstlen;

    i = 0;
    j = ft_strlen(s1) - 1;
    while (ft_strchr(set, (int)s1[i]))
        i++;
    while (ft_strrchr(set, (int)s1[j]))
        j--;
    dstlen = (j - i);
    dst = malloc(dstlen + 1);
    if (!dst)
        return(0);
    j = 0;
    dst[j + dstlen] = '\0';
    while (dst)
    {
        dst[j] = s1[i];
        i++;
        j++;
    }
    return(dst);
}
