/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 03:47:15 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:39:56 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

size_t	ft_count_lines_of_file(char **tab)
{
	int		fd;
	char	*line;
	size_t	j;

	j = 0;
	if ((fd = open(tab[1], O_RDONLY)) == -1)
	{
		ft_putstr("Open failed.\n");
		exit(0);
	}
	while (get_next_line(fd, &line) == 1)
	{
		j++;
	}
	close(fd);
	return (j + 1);
}

size_t	ft_count_lines_oca(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
