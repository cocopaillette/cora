/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 23:20:54 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/22 23:35:37 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = (char *)malloc(sizeof(char*)*ft_strlen(src) - 1);
	if (dest == NULL)
	return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char coucou[] = "coucou";

		printf("%s\nft_strdup\n", ft_strdup(coucou));
		printf("%s\nstrdup\n", strdup(coucou));
		return(0);
}
