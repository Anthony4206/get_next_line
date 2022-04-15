/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 07:58:43 by alevasse          #+#    #+#             */
/*   Updated: 2022/04/15 15:18:54 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
//#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char	*ret;
	int		fd;
	int		read_len;

	ret = malloc(sizeof(char) * 5);
	fd = open("test.txt", O_RDONLY);
	printf("%d\n", fd);
	read_len = read(fd, ret, 5);
	while (read_len > 0)
	{
		printf("%s", ret);
		read_len = read(fd, ret, 5);
	}
	printf("\n");
	free(ret);
	printf("%d\n", ft_strlen(""));
	return (0);
}
