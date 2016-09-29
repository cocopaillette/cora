/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   version1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 23:31:19 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 01:02:23 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	resolution(int tab[9][9], int ligne, int colonne, int nb)
{

	int x;
	int y;
	int i;

	x = (ligne/3) * 3;
	y = (colonne/3) * 3;
	while(i == 0 && i < 9)
	{
		if(tab[ligne][i] == nb)
			return (0);
		if (tab[i][colonne] == nb;
			return (0);
		if (tab[x + (i % 3)][y + (i / 3) == nb)
			return (0);
			i++;
	}
			return (nb);
}

int	(int tab[9][9], int ligne, int colonne)
{
	int i;

	if(ligne < 9 && colonne < 9)
	{
		if(tab[ligne][colonne] != 0)
		{
			if ((colonne + 1) < 9)
return affichage
		}
	}
}
