/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 23:49:03 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/23 01:06:49 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

  void inter(char* s1, char *s2)
	{
		int i;
		int j;
		int tab[128] = {0};

		i = 0;
		j = 0;
		while(s1[i])
		{

			j = 0;
			while(s2[j])
			{
				if (s2[j] == s1[i] && tab[(int)s1[i]] == 0)
				{
					tab[(int)s1[i]] = 1;
					ft_putchar(s1[i]);
					break;
				}
				j++;
			}
			i++;
		}
	}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		inter(argv[1], argv[2]);
		ft_putchar('\n');
	}
	else
	ft_putchar('\n');
	return(0);
}
