/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 04:35:59 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:40:37 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_create_image(t_env *e, int n)
{
	int	sizeline;
	int	endian;
	int	bpp;

	if (n == 1)
	{
		e->img_ptr = mlx_new_image(e->mlx, 1280, 720);
		e->data = mlx_get_data_addr(e->img_ptr, &bpp, &sizeline, &endian);
	}
	if (n == 2)
	{
		mlx_put_image_to_window(e->mlx, e->window, e->img_ptr, 0, 0);
		mlx_destroy_image(e->mlx, e->img_ptr);
	}
}
