/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublemoves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:45:07 by otxoboy           #+#    #+#             */
/*   Updated: 2023/07/19 15:36:48 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	double_rotate(t_list **a, t_list **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		rotate(&*a);
		rotate(&*b);
		ft_putstr_fd("rr\n");
	}
}

void	double_reverse_rotate(t_list **a, t_list **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		reverse_rotate(&*a);
		reverse_rotate(&*b);
		ft_putstr_fd("rrr\n");
	}
}

void	double_swap(t_list **a, t_list **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		swap(&*a);
		swap(&*b);
		ft_putstr_fd("ss\n");
	}
}
