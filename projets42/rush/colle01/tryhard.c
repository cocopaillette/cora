/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tryhard.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 01:25:05 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 19:04:45 by copayanc         ###   ########.fr       */
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
		ft_putchar ('\n');
		i++;
	}
}

void    affichage(int tab[9][9], int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while ( i < 10)
    {
		while (j < 9)
		{
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				tab[i][j] = argv[i][j] - '0';
			else if (argv[i][j] == '.')
				tab[i][j] = 0;
			ft_putchar(tab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
        ft_putchar('\n');
		j = 0;
		i++;
    }
    ft_putchar('\n');
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
	int ok;

	i = position / 9;
	j = position % 9;
	k = 1;
	ok = 1;
	if (position == 9 * 9)
	{
		return (ok);
	}
	if (tab[i][j] != 0)
		return validee(tab, position + 1);
	while (k <= 9)
	{
		if (check(tab, i, j, k))
		{
			tab[i][j] = k;
			if (validee(tab, position + 1))
				return (ok);
		}
		k++;
	}
		tab[i][j] = 0;
		return (0);
}

int main (int argc, char **argv)
{
    int tab[9][9];

	if (argc == 10)
	{
		affichage(tab, argc, argv);
	}
	return (0);
}
