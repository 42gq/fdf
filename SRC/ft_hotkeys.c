/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hotkeys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 04:57:45 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:41:16 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_reset(t_env *e)
{
	ft_init_mlx(e, 0, 2);
	e->a = 0;
	e->aa = 0;
	e->z_ch = 1;
	e->rotation = 0.20;
	e->rotation2 = 0.40;
}

int		ft_hotkeys2(int keycode, t_env *e)
{
	if (keycode == 15)
		ft_reset(e);
	if (keycode == 123)
		e->a = e->a - 20;
	if (keycode == 124)
		e->a = e->a + 20;
	if (keycode == 126)
		e->aa = e->aa - 10;
	if (keycode == 125)
		e->aa = e->aa + 10;
	if (keycode == 13 && e->rotation < 0.7)
		e->rotation += 0.05;
	if (keycode == 1 && e->rotation > -0.5)
		e->rotation -= 0.05;
	if (keycode == 17 && e->rotation2 < 1)
		e->rotation2 += 0.05;
	if (keycode == 5 && e->rotation2 > -1)
		e->rotation2 -= 0.05;
	return (0);
}

int		ft_hotkeys(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 69)
		e->zoom = e->zoom + 1;
	if (keycode == 78 && e->zoom - 1 > 0)
		e->zoom = e->zoom - 1;
	if (keycode == 14)
		e->z_ch++;
	if (keycode == 12)
		e->z_ch--;
	ft_hotkeys2(keycode, e);
	return (0);
}
