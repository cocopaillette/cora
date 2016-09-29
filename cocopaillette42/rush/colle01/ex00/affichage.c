/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 23:19:28 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 23:32:18 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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

int	int_init(int tab[9][9], int argc, char **argv)
{

	int i;
	int j;
	int k;

	k = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (j < 9)
		{
			if (argv[i][j] >= '1' && argv[i][j] <= '9')
				tab[k][j] = argv[i][j] - '0';
			else if (argv[i][j] == '.')
				tab[k][j] = 0;
			else
				return (1);
			j++;
		}
		if (j != 9)
			return (1);
		j = 0;
		i++;
		k++;
	}
	return(0);
}

int	print(int tab[9][9])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9){
		{            
			ft_putchar(tab[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
		}
		return (0);
}
