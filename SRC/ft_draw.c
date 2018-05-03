/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 04:36:12 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:40:45 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_use_draw(t_env *e, int j, int i, int k)
{
	ft_translate(e, j, i, k);
	ft_draw_lines(e);
}

void	ft_draw(t_env *e)
{
	int i;
	int j;

	i = 0;
	ft_create_image(e, 1);
	while (i < e->hmax)
	{
		e->v = 2;
		j = -1;
		while (++j < e->smax && e->map[i][j].k != 0)
		{
			if (j + 1 < e->smax && e->map[i][j].k != 0
					&& e->map[i][j + 1].k != 0)
				ft_use_draw(e, j, i, 1);
			if (i + 1 < e->hmax && e->map[i][j].k != 0 &&
					e->map[i + 1][j].k != 0 && e->v != 1)
				ft_use_draw(e, j, i, 0);
			if (i + 1 < e->hmax && e->map[i + 1][j].k == 0)
				e->v = 1;
		}
		i++;
	}
	ft_create_image(e, 2);
}
