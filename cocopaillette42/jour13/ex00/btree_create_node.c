/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copayanc <copayanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 01:57:14 by copayanc          #+#    #+#             */
/*   Updated: 2016/09/16 02:03:25 by copayanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *tp;

	tp = (t_btree)malloc(sizeof(tp));
	tp->item = item;
	tp->left = 0;
	tp->right = 0;
	return (tp);
}
