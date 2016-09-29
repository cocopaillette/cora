/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 22:50:29 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/08 23:36:54 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_zero(char **argv)
{
	int i;
	int len;
	int len2;

	while (argv[i] != '\0')
	{
		len = ft_strlen(argv[i]) + len + 1;
		if (i == 0)
			len2 = len;
		i++;
	}
	return (len - len2);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*strall;
	int		i;
	int		tab;

	tab = 0;
	argc = 1;
	strall = (char*)malloc(sizeof(char) * (ft_zero(argv)));
	if (strall == NULL)
		return (0);
	while (argv[argc] != NULL)
	{
		i = 0;
		while (argv[argc][i] != '\0')
			strall[tab++] = argv[argc][i++];
		if (argc + 1)
			strall[tab++] = '\n';
		argc++;
	}
	strall[tab] = '\0';
	return (strall);
}
