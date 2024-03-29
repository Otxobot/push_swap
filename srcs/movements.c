/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:26:22 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 15:54:07 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	sa(t_list **a)
{
	swap (a);
	ft_putstr_fd ("sa\n");
}

void	sb(t_list **b)
{
	swap(b);
	ft_putstr_fd("sb\n");
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	ft_putstr_fd("rrb\n");
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	ft_putstr_fd("rra\n");
}
