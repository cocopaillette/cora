/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:48:57 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/09 15:53:05 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;

	temp = *******c;
	*******c = ***a;
	***a = *b;
	*b = ****d;
	****d = temp;
}
