/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 02:16:53 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/22 02:27:44 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (tab[i] > j)
		j = tab[i];
		i++;
	}
	return(j);
}

int	main(void)
{
int tab[] = {1332, 14927, 1500, 485673, 0, 468, 36, 45771};
printf("%d", max(tab, 8));
return (0);
}
