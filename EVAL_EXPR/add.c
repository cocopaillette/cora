/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 04:41:51 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/20 02:14:12 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	operation(char *str)
{
	int i;
	int a;
	int b;
	char op;

	i = 0;
	op = '\0';
	a =	ft_atoi(str);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
		i++;
	if (str[i] == ' ')
		i++;
	if (str[i] == '+')
	{
		op = '+';
		i++;
	}
	if (str[i] == '-')
	{
		op = '-';
		i++;
	}
	if (str[i] == '*')
	{
		op = '*';
		i++;
	}
	if (str[i] == '/')
	{
		op = '/';
		i++;
	}
	if (str[i] == '%')
	{
		op = '%';
		i++;
	}
	if (str[i] == ' ')
		i++;
	b = ft_atoi(str + i);
	if (op == '+')
		return (a + b);
	else 	if (op == '-')
			return (a - b);
	else 	if (op == '*')
			return (a * b);
	else 	if (op == '/')
			return (a / b);
	else 	if (op == '%')
			return (a % b);
	else
		return (0);
}

int main(void)
{
	printf("%d", operation("120 + 1"));
	return (0);
}
