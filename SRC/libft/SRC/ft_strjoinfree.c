/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 01:19:31 by gquerre           #+#    #+#             */
/*   Updated: 2017/04/20 02:57:54 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoinfree(char *s1, char *s2)
{
	char	*mem;
	int		i;
	int		k;
	int		u;

	i = 0;
	k = 0;
	if (!(s1) && !(s2))
		return (NULL);
	u = ft_strlen(s1) + ft_strlen(s2);
	if (!(mem = malloc(sizeof(char) * (u + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		mem[i + k] = s2[k];
		k++;
	}
	mem[i + k] = '\0';
	free(s1);
	return (mem);
}
