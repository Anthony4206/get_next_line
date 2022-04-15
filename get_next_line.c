/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:49:28 by alevasse          #+#    #+#             */
/*   Updated: 2022/04/15 15:33:42 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*ret;
	char		*buf[BUFFER_SIZE + 1];
	int			n;

	n = read(fd, buf, BUFFER_SIZE);
	while (n > 0)
	{
		On vide le buff dans ret -> fonction putbuf.
		buf[n] = '\0';
	}
}
