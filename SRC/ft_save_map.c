/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 03:25:06 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:42:00 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char		**ft_save_map(char **tab)
{
	int		fd;
	size_t	i;
	char	*line;
	char	**buff;
	size_t	j;

	i = 0;
	j = ft_count_lines_of_file(tab);
	buff = malloc(sizeof(char*) * j);
	if ((fd = open(tab[1], O_RDONLY)) == -1)
		ft_error_fdf(2);
	while (get_next_line(fd, &line) == 1)
	{
		buff[i] = ft_strnew(ft_strlen(line));
		ft_strcpy(buff[i], line);
		i++;
	}
	buff[i] = NULL;
	close(fd);
	return (buff);
}
