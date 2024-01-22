/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:23:40 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/22 17:22:54 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    int j;
    size_t a;
    size_t b;

    a = ft_strlen(dst);
    b = ft_strlen(src);
    i = ft_strlen(dst) + 1;
    j = 0;
    while (i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return(a + b);
}