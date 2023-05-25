/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:48:50 by abasante          #+#    #+#             */
/*   Updated: 2023/05/25 10:42:18 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	easy_sort(t_list **a, int size)
{
	if (size == 2)
	{
		if ((*a)->number > (*a)->next->number)
		{
			sa(a);
			printLinkedList(*a);
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
			printf("case 1:\n");
			sa(a);
		}
		else if (((*a)->number > (*a)->next->number) && \
		((*a)->next->number > (*a)->next->next->number) && \
		((*a)->number > (*a)->next->next->number))
		{
			printf("case 2:\n");
			sa(a);
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
			printf("case 3\n");
			ra(a);
		}
		else if (((*a)->next->number > (*a)->number) && \
		((*a)->next->number > (*a)->next->next->number) && \
		((*a)->number < (*a)->next->next->number))
		{
			printf("case 4\n");
			sa(a);
			ra(a);
		}
		else if (((*a)->next->next->number < (*a)->number) && \
		((*a)->next->next->number < (*a)->next->number) && \
		((*a)->number > (*a)->next->next->number))
		{
			printf("case 5\n");
			rra(a);
		}
	}
}

// void	easy_sort2(t_list **a, t_list **b, int size)
// {

// }