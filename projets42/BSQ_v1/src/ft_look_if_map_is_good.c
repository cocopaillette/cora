/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_if_map_is_good.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 00:58:53 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 09:03:00 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int		ft_look_if_map_is_good(char **tab, t_coord len, t_char dot)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != dot.empty && tab[i][j] != dot.obstacles)
				return (-1);
		}
		if (j != len.y)
			return (-1);
	}
	printf("%d\n", len.x);
	if (i != len.x)
		return (-1);
	return (1);
}
