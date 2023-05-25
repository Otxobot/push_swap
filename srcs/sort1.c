/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:48:50 by abasante          #+#    #+#             */
/*   Updated: 2023/05/25 11:27:27 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	easy_sort(t_list **a, int size)
{
	if (size == 2)
	{
		if ((*a)->number > (*a)->next->number)
		{
			write (1, "sa", 2);
			sa(a);
		}
	}
}

void	easy_sort1(t_list **a, int size)
{
	if (size == 3)
	{
		if (((*a)->number > (*a)->next->number) && \
		((*a)->next->number < (*a)->next->next->number) && \
		((*a)->number < (*a)->next->next->number))
		{
			write (1, "sa\n", 2);
			sa(a);
		}
		else if (((*a)->number > (*a)->next->number) && \
		((*a)->next->number > (*a)->next->next->number) && \
		((*a)->number > (*a)->next->next->number))
		{
			write (1, "sa\n", 3);
			sa(a);
			write (1, "rra\n", 4);
			rra(a);
		}
	}
}

void	easy_sort_divide(t_list **a, int size)
{
	if (size == 3)
	{
		if (((*a)->number > (*a)->next->number) && \
		((*a)->number > (*a)->next->next->number) && \
		((*a)->next->number < (*a)->next->next->number))
		{
			write (1, "ra\n", 3);
			ra(a);
		}
		else if (((*a)->next->number > (*a)->number) && \
		((*a)->next->number > (*a)->next->next->number) && \
		((*a)->number < (*a)->next->next->number))
		{
			write (1, "sa\n", 3);
			sa(a);
			write (1, "ra\n", 3);
			ra(a);
		}
		else if (((*a)->next->next->number < (*a)->number) && \
		((*a)->next->next->number < (*a)->next->number) && \
		((*a)->number > (*a)->next->next->number))
		{
			write (1, "rra\n", 4);
			rra(a);
		}
	}
}
