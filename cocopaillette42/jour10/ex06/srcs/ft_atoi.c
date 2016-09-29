/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 23:19:49 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/13 23:21:33 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int result;
    int neg;

    neg = 0;
    i = 0;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if (str[i] == '-')
    {
        neg = 1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    if (neg == 1)
        return (-result);
    else
        return (result);
}
