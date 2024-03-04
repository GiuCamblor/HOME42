/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcamblor- <gcamblor-@student.42urdul>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:30:24 by gcamblor-         #+#    #+#             */
/*   Updated: 2024/02/27 19:37:11 by gcamblor-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include <fcntl.h>			/*Modos de lectura*/
#include <unistd.h>
#include <stdio.h>

char *get_next_line(int fd)
{
    const char	*file;
    int			fd;
    char		firstchar;

	file = "source.txt";
	fd = open(file, O_RDONLY);
    if (fd == -1)
		return (1);
	if (read(fd, &firstchar, 1) == 1)
		printf("File first character: %c\n", firstchar);
	else
	close (fd);

	return	(0);
}


int main()
{
    const char	*file;
    int			fd;
    char		firstchar;

	file = "source.txt";
	fd = open(file, O_RDONLY);
    if (fd == -1)
		return (1);
	if (read(fd, &firstchar, 1) == 1)
		printf("File first character: %c\n", firstchar);
	else
	close (fd);

	return	(0);
}