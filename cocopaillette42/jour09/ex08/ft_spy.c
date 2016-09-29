/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 07:45:13 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/09 07:56:28 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_spy(void)
{
	write(1, "Alert!!!\n", 9);
}

int	main(int argc, char **argv)
{
	while (argc > 0)
	{
	if ((argv == president) || (argv == attack) || (argv == Powers))
		ft_spy();
	}
	return(0);
}
