/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:31:24 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/19 23:06:14 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;

	i = 1;
	while (i <= 128)
	{
		if(octet & i)
			ft_putchar('1');
		else
			ft_putchar('0');
		i = i * 2;
	}
	return (octet);
}

int main(void)
{
	reverse_bits(64);
	return (0);
}
