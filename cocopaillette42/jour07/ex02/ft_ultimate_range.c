/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 22:34:05 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/08 22:46:15 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	if (tab != NULL)
	{
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
	}
	*range = tab;
	return (tab);
}
