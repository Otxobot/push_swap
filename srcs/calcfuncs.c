/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcfuncs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:45:07 by otxoboy           #+#    #+#             */
/*   Updated: 2023/07/10 12:04:51 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	insert_sorted(t_list **a, t_list **b)
{
    t_list	*tmp;

	tmp = *a;
	if ((*b)->number > find(*a, 1)->number 
	|| (*b)->number < find(*a, -1)->number)
		insert(&*b, &*a, find(*a, -1));
}

void    insert(t_list **b, t_list **a, t_list *node)
{
    if (node->relp > 0)
    {
        while (node->relp != 0)
            ra(a);       
    }
    else if (node->relp < 0)
    {
        while (node->relp != 0)
            rra(a);       
    }
    pa(a, b);
}
