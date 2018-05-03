/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_z_to_y.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 02:46:24 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:39:13 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_struct	**ft_apply_to_struct(t_struct **map, t_struct (*f)(t_struct))
{
	int i;
	int j;

	j = 0;
	while (map[j])
	{
		i = 0;
		while (map[j][i].k)
		{
			f(map[j][i]);
			i++;
		}
		j++;
	}
	return (map);
}
