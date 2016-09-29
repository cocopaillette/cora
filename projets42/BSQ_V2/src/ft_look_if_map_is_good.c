/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_if_map_is_good.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluttrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 00:58:53 by mluttrin          #+#    #+#             */
/*   Updated: 2016/09/21 19:53:54 by mluttrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_look_if_map_is_good(char **tab, t_char dot)
{
	int i;
	int j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] != dot.empty && tab[i][j] != dot.obstacles)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}
