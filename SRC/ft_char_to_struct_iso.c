/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_struct_iso.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 09:30:09 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:39:27 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int			ft_pass_nbs(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	while (str[i] != '-' && !ft_isdigit(str[i]) && str[i])
		i++;
	return (i);
}

t_struct	**ft_swap_to_struct(char **t)
{
	t_struct	a;
	t_struct	**mp;

	a.y = -1;
	if (!(mp = ft_memalloc(sizeof(t_struct*) * (ft_count_lines_oca(t) + 1))))
		return (0);
	while (++a.y < (int)ft_count_lines_oca(t))
	{
		a.x = 0;
		a.z = 0;
		a.k = 1;
		if (!(mp[a.y] = ft_memalloc(sizeof(t_struct) * (ft_count_nbs(t[a.y])))))
			return (0);
		while (t[a.y][a.z])
		{
			mp[a.y][a.x].x = a.k++;
			mp[a.y][a.x].y = a.y;
			mp[a.y][a.x].z = ft_atoi(&(t[a.y][a.z]));
			mp[a.y][a.x++].k = 1;
			a.z = a.z + ft_pass_nbs(&t[a.y][a.z]);
		}
		mp[a.y][a.x].k = 0;
	}
	mp[a.y] = 0;
	return (mp);
}
