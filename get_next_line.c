/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:49:28 by alevasse          #+#    #+#             */
/*   Updated: 2022/04/15 12:11:14 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*ret;
	char		*buf[BUFFER_SIZE + 1];
	int			rd_len;

	rd_len = read(fd, buf, BUFFER_SIZE);
	while (rd_len > 0)
	{
		
	}
}
