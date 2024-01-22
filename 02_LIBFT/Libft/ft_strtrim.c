/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:16:26 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/22 21:53:17 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *dst;
    int dstlen;

    if (!s1 || !set)
        return(0);
        i = 0;
        j = ft_strlen(s1);
        while (i < j && ft_strchr(set, (int)s1[i]))
            i++;
        while (j > i && ft_strrchr(set, (int)s1[j]))
            j--;
        dstlen = (j - i + 1);
        dst = malloc(dstlen + 1);
        if (!dst)
            return(0);
        j = 0;
        dst[dstlen] = '\0';
        while (j < dstlen)
        {
            dst[j] = s1[i];
            i++;
            j++;
        }
        return(dst);
}
