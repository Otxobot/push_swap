/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:53:45 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 15:54:10 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ra(t_list **a)
{
	rotate(a);
	ft_putstr_fd("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_putstr_fd("rb\n");
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	ft_putstr_fd("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_putstr_fd("pb\n");
}
