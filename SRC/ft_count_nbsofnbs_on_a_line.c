/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbsofnbs_on_a_ligne.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 05:04:10 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/15 02:40:15 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int			ft_neg(char *str, int i)
{
	if (!str[i] || str[i] == '\0' || str[i] != '-')
		return (0);
	if (!str[i + 1] || str[i + 1] == '\0' || !ft_isdigit(str[i + 1]))
		return (0);
	i++;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (!str[i] || str[i] == '\0' || str[i] == ' ')
		return (1);
	return (0);
}

size_t		ft_count_nbs(char *str)
{
	int		i;
	size_t	n;

	i = 0;
	n = 0;
	if (str[i] == ' ')
		ft_error_fdf(1);
	while (str[i] && str[i] != '\0')
	{
		while (str[i] && str[i] != '\0' && str[i] == ' ')
			i++;
		i = ft_neg(str, i) ? i + 1 : i;
		if (!str[i] && str[i] == '\0')
		{
			return (n + 1);
		}
		(!ft_isdigit(str[i])) ? ft_error_fdf(1) : ft_error_fdf(0);
		while (ft_isdigit(str[i]) && str[i] != '\0')
			i++;
		n++;
	}
	return (n + 1);
}
