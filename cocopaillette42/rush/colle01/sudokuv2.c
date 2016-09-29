/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tryhard.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 01:25:05 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 21:11:18 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char   * affichage(int tab[9][9], int argc, char **argv)
{
    int i;
    int j;
	int k;

    i = 1;
    j = 0;
	k = 0;
    while ( i < 9)
    {
		while (j < 9)
		{
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				tab[k][j] = argv[i][j] - '0';
			else if (argv[i][j] == '.')
				tab[k][j] = 0;
			//ft_putchar(tab[k][j] + '0');
				if (j < 8)
					//	ft_putchar(' ');
			j++;
		}
		if (k < 8)
        	//ft_putchar('\n');
		j = 0;
		i++;
    }
	return(*argv);
	//ft_putchar('\n');
}

int check(int tab[9][9], int ligne, int colonne, int nb)
{

    int x;
    int y;
    int i;

    x = (ligne/3) * 3;
    y = (colonne/3) * 3;
    while(i == 0 && i <9)
    {
        if(tab[ligne][i] == nb)
            return (0);
        if (tab[i][colonne]== nb)
            return (0);
			if (tab[x +(x % 3)][y + (i / 3)] == nb)
				return (0);
				i++;
				}
            return (nb);
}

int	validee(int tab[9][9], int position)
{
	int i;
	int j;
	int k;

	i = position / 9;
	j = position % 9;
	k = 1;
	if (position == 9 * 9)
		return (1);
	if (tab[i][j] != 0)
		return validee(tab, position + 1);
	while (k <= 9)
	{
		if (check(tab, i, j, k))
		{
			tab[i][j] = k;
			if (validee(tab, position + 1))
				return (1);
		}
		k++;
	}
		tab[i][j] = 0;
		return (tab[i][j]);
}

int main (int argc, char **argv)
{
    int tab[9][9];

	if (argc == 10)
	{
		if (validee(tab,argc))
			{
				ft_putstr("Erreur");
				return (0);
			}
			affichage(tab, argc, argv);		
	}
	affichage(tab, argc, argv);
	validee(tab, argc);
	ft_putstr(affichage(tab, argc, argv));
	return (0);
}
