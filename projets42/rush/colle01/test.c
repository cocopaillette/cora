/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testdefdp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 01:02:53 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 01:25:30 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(charc)
{
    write(1, &c, 1);
}

void	affichage(int grille[9][9])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ( i == 0 && i < 9)
	{
		while (j == 0 && j < 9)
		{
			grille[i][j] = ((j + 1) % 3)
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

int check_ligne(int k, int grille[9][9], int i)
{
	int j;
	
	i = 0;
	j = 0;
	while ( j < 9)
	{
		if (grille[i][j] == k)
			return (0);
		j++;
	}
	return (k);
