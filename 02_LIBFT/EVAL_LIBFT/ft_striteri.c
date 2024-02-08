/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor <gcamblor@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:30:34 by gcamblor          #+#    #+#             */
/*   Updated: 2024/02/08 12:20:42 by gcamblor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void example_striteri(unsigned int i, char *c) {

	i = 1;
	c[0] = c[0] + i;
}
int main() {
    char str[] = "Hello, world!";

    printf("\nOriginal string: %s\n", str);
	ft_striteri(str, example_striteri);
	printf("Modified string: %s\n\n", str);
    return 0;
}
{	
}

int main()
{
	char s[] = "CARAMBOLA";

	*s = ft_striteri(s, af_chrotate);
	printf("\n%s, DESPUÉS DE ITERI ES: %s\n", s, s);
	return (0);
}
*/