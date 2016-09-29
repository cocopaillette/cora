/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 01:00:52 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/23 03:06:36 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void last_word(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] >= 33 && str[i + 1] < 127))
		j = i + 1;
		i++;
	}
	while(str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
		ft_putchar('\n');
	}
	else
	ft_putchar('\n');
	return (0);
}
