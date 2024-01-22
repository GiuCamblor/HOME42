/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:23:40 by gcamblor          #+#    #+#             */
/*   Updated: 2024/01/22 06:14:14 by gcamblor         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

size_t  strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    int j;

    i = strlen(dst) + 1;
    j = 0;
    while (i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0'
    return(&dst);
}