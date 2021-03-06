/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 15:42:23 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/05 15:31:11 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int result;
	int neg;

	neg = 0;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == 9)
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	if (neg == 1)
	{
		result = result * -1;
	}
	return (result);
}

int main()
{
	int test;

	test = atoi("-    1234");
	printf("%d\n",test);
	return (0);
}
