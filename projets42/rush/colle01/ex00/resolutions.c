/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolutions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 23:16:49 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 23:41:51 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkLigne(int tab[9][9], int ligne, int nb);
int	checkColonne(int tab[9][9], int colonne, int nb);
int	checkBloc(int tab[9][9], int ligne, int colonne, int nb);

int	resolution(int tab [9][9], int position)
{
	int i;
	int j;
	int nb;

	i = position / 9;
	j = position % 9;
	nb = 1;
	if (position == 9 * 9)
		return (1);
	if (tab[i][j] != 0)
		return resolution(tab, position + 1);
	while (nb <= 9)
	{
		if ((checkLigne(tab, i, nb)) && (checkColonne(tab, j, nb)) && (checkBloc(tab, i, j, nb)))
		{
			tab[i][j] = nb;
			if (resolution(tab, position + 1))
				return (1);
		}
		nb++;
	}
	tab[i][j] = 0;
	return (0);
}

int resolution2(int tab [9][9], int position)
{
	int i;
	int j;
	int nb;

	i = position / 9;
	j = position % 9;
	nb = 9;
	if (position == 9 * 9)
		return (1);
	if (tab[i][j] != 0)
		return resolution2(tab, position + 1);
	while (nb >= 1)
	{
		if ((checkLigne(tab, i, nb)) && (checkColonne(tab, j, nb)) && (checkBloc(tab, i, j, nb)))
		{
			tab[i][j] = nb;
			if (resolution2(tab, position + 1))
				return (1);
		}
		nb--;
	}
	tab[i][j] = 0;
	return (0);
}
