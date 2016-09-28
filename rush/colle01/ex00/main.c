/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 23:22:13 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/11 23:36:45 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		int_init(int tab[9][9], int argc, char **argv);
int		resolution(int tab[9][9], int position);
int		resolution2(int tab[9][9], int position);
int		print(int tab[9][9]);
int		checkzero(int tab[9][9]);
int		last_check(int tab[9][9], int grille[9][9]);

int		main(int argc, char **argv)
{
	int tab[9][9];
	int grille[9][9];

	if (argc == 10)
	{
		if (int_init(tab, argc, argv))
		{
			ft_putstr("Erreur\n");
			return (0);
		}
		resolution(tab, 0);
		resolution2(grille, 0);
		if (last_check(tab, grille))
		{
			if (checkzero(tab))
				print(tab);
		}
	}
	else
		ft_putstr("Erreur\n");
	return (0);
}
