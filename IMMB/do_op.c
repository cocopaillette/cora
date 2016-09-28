/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 02:25:41 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/20 18:55:51 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	do_op(char *s1, char *sop, char *s2)
{
	int i;
	int a;
	int b;

	i = 0;
	a =	atoi(s1);
	b = atoi(s2);
	if (sop[i] == '+')
		return (a + b);
	if (sop[i] == '-')
		return (a - b);
	if (sop[i] == '*')
		return (a * b);
	if (sop[i] == '/')
		return (a / b);
	if (sop[i] == '%')
		return (a % b);
	else
		return (0);
}

int main(void)
{
	printf("%d", do_op("1,5", "+", "1"));
	return (0);
}
