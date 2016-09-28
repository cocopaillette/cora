/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 23:15:30 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 23:19:17 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    ft_putstr(char *str);

int checkLigne(int tab[9][9], int ligne, int nb)
{

    int i;

    i = 0;
    while(i < 9)
    {
        if(tab[ligne][i] == nb)
            return (0);
        i++;
    }
    return (1);
}

int checkColonne(int tab[9][9], int colonne, int nb)
{
    int j;

    j = 0;
    while(j < 9)
    {
        if(tab[j][colonne] == nb)
            return (0);
        j++;
    }
    return (1);
}

int checkBloc(int tab[9][9], int ligne, int colonne, int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    ligne = (ligne / 3) * 3;
	colonne = (colonne / 3) * 3;

    while (i < 3)
    {
        while (j < 3)
        {
            if (tab[ligne + i][colonne + j] == nb)
                return (0);
            j++;
        }
		j = 0;
		i++;
    }
	return (1);
}

int checkzero(int tab[9][9])
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 9)
    {
        while (j < 9)
        {
            if (tab[i][j] == 0)
            {
                ft_putstr("Erreur\n");
                return(0);
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (1);
}

int last_check(int tab[9][9], int grille[9][9])
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (x < 9)
    {
        while (y < 9)
        {
            if (tab[x][y] == grille[x][y])
                x++;
            else if (tab[x][y] != grille[x][y])
            {
                ft_putstr("Erreur\n");
                return (0);
            }
        }
        y = 0;
        x++;
    }
	return (1);
}
